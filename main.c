#include <REGX52.H>
#include "CS1635.H"
#include "LED.H"
#include "UART.H"

int R,K;
void main()
{
    Init_UART();
//    disp0(4);
    disp(1,1,8);
    disp(2,2,8);
    disp(3,3,8);
	while(1)
	{
		R=read_key();
        UART_SendByte(R);
//        if(R==3)
//        {
            LED(500);
//        }
	}
}
