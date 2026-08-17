#include<lpc21xx.h>
#include "header.h"


#define R1 8
#define R2 9
#define R3 10
#define R4 11

#define C1 4
#define C2 5
#define C3 6
#define C4 7
char key_map[4][4] =
{
	{'1','2','3','A'},
	{'4','5','6','B'},
	{'7','8','9','C'},
	{'*','0','#','D'}
};

void keypad_init(void)
{
	/* Rows -> Output */
	IODIR0|=(1<<R1)|(1<<R2)|(1<<R3)|(1<<R4);

	/* Columns -> Input */
	IODIR0&=~((1<<C1)|(1<<C2)|(1<<C3)|(1<<C4));

	/* Make all rows HIGH */
	IOSET0=(1<<R1)|(1<<R2)|(1<<R3)|(1<<R4);
}
char keypad_scan(void)
{
	unsigned int row,col;
	while(1)
	{
		for(row=0;row<4;row++)
		{
			/* All rows HIGH */
			IOSET0=(1<<R1)|(1<<R2)|(1<<R3)|(1<<R4);
			/* Current row LOW */
			IOCLR0=(1<<(R1+row));
			delay_ms(1);
			for(col=0;col<4;col++)
			{
				if(((IOPIN0)>>(C1 + col)&1)== 0)
				{
					/* Debounce  */
					delay_ms(20);
					while(((IOPIN0>>(col + C1)&1))==0);
					return key_map[row][col];
				}
			}
		}
	}
}

