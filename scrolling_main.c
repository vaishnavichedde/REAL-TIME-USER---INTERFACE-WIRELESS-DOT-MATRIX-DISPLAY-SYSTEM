#include <LPC21xx.H>

#include "dotmatrix_driver.h"
#include "sipo_74hc164.h"

//#define DBUG

int main()
{
	u8 i,user_str[] = "   V25HE4 BATCH IS TOOO GOOD BATCH!   ";
	Init_SIPO();
	Init_dotmatrix_anodes();
	while(1)
	{
		for(i=0;i<38-3;i++)
		{
				display_str(user_str+i,10);
		}		
	}
}
