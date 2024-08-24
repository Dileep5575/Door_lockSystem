#include <reg51.h>
#include <stdio.h>
#include "lcd.h"
#include "keypad.h"

sbit in1=P3^2;
sbit in2=P3^3;

void motor(){
	in1=1;
	in2=0;
	delay(100);
	in1=0;
	in2=0;
	delay(1000);
	in1=0;
	in2=1;
	delay(100);
	in1=0;
	in2=0;
}
int pass = 1234;
extern val;

void main(void)
{ 
	
	unsigned int a;
   LCD_Init();
   LCD_String("Secret_Key:");
	
	while(1){
		a=keypad_init();
		if(a==1){
			if(pass==val){
				LCD_Command(0xC0);
				LCD_String("Door_is_Opening");
				delay(100);
				motor();
			}
			else{
				LCD_Command(0xC0);
				LCD_String("Wrong_Password");
			}
			val=0;
			
		}
	
	}
}
