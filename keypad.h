int val=0;

sbit r1=P1^0;
sbit r2=P1^1;
sbit r3=P1^2;
sbit r4=P1^3;
sbit c1=P1^4;
sbit c2=P1^5;
sbit c3=P1^6;

int keypad_init(void);

int keypad_init(void){
	c1=1;
	c2=1;
	c3=1;
	
	r1=0;
	r2=1;
	r3=1;
	r4=1;
	if(c1==0){
		while(c1==0);
		LCD_Data('*');
		val=(val*10)+1;
	}
	else if(c2==0){
		while(c2==0);
		LCD_Data('*');
		val=(val*10)+2;

	}
	else if(c3==0){
		while(c3==0);
		LCD_Data('*');
		val=(val*10)+3;
	}
	
	r1=1;
	r2=0;
	r3=1;
	r4=1;
	if(c1==0){
		while(c1==0);
		LCD_Data('*');
		val=(val*10)+4;
	}
	else if(c2==0){
		while(c2==0);
		LCD_Data('*');
		val=(val*10)+5;
	}
	else if(c3==0){
		while(c3==0);
		LCD_Data('*');
		val=(val*10)+6;
	}
	
	r1=1;
	r2=1;
	r3=0;
	r4=1;
	if(c1==0){
		while(c1==0);
		LCD_Data('*');
		val=(val*10)+7;
	}
	else if(c2==0){
		while(c2==0);
		LCD_Data('*');
		val=(val*10)+8;
	}
	else if(c3==0){
		while(c3==0);
		LCD_Data('*');
		val=(val*10)+9;
	}
	
	r1=1;
	r2=1;
	r3=1;
	r4=0;
	if(c1==0){
		while(c1==0);
		LCD_Command(0x01);
		LCD_String("Secret_Key");
		val=0;
	}
	else if(c2==0){
		while(c2==0);
		LCD_Data('*');
		val=(val*10)+0;
	}
	else if(c3==0){
		while(c3==0);
		return 1;
	}
	return 0;
}
