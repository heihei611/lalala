//// _nop_()��ʱһ����������
//#include <reg52.h>
//#include <intrins.h>
//sbit PWM = P3^7;  //�趨PWM�����I/O�˿�
//unsigned char count = 0;
//unsigned char timer1 ;


//unsigned int Counter_L = 0;  
//unsigned int Counter_R = 0;  
//unsigned int Compare_L = 20; 
//unsigned int Compare_R = 20;

////sbit PWM_L=P2^0;  

////sbit IN1=P2^1;//�����������
////sbit IN2=P2^2;
////sbit IN3=P2^3;   
////sbit IN4=P2^4;

////sbit PWM_R=P2^5;


//sbit PWM_L=P1^0;  

//sbit IN1=P1^1;//�����������
//sbit IN2=P1^2;
//sbit IN3=P1^3;   
//sbit IN4=P1^4;

//sbit PWM_R=P1^5;
// void servo(int angle);
// void go(int compare_left,int compare_right)//����ռ�ձ�
//{
//    Compare_L=compare_left;
//    Compare_R=compare_right;
//    IN1 = 1; 
//  IN2 = 0;
//  IN3 = 1; 
//  IN4 = 0;
//}
//void back(int compare_left,int compare_right)//����ռ�ձ�
//{
//    Compare_L=compare_left;
//    Compare_R=compare_right;
//    IN1 = 0; 
//  IN2 = 1;
//  IN3 = 0; 
//  IN4 = 1;
//}
//void stop()
//{
//        IN1 = 0; 
//    IN2 = 0;
//    IN3 = 0; 
//    IN4 = 0;

//}
//void forward()
//{
//      IN1 = 1; 
//    IN2 = 0;
//    IN3 = 1;
//    IN4 = 0;
//}

//void backward()
//{
//      IN1 = 0; 
//    IN2 = 1;
//    IN3 = 0; 
//    IN4 = 1;
//}
///*
//����180����
//t = 0.5ms������������-�����ת�� 0 �� 
//t = 1.0ms������������-�����ת�� 45��
//t = 1.5ms������������-�����ת�� 90��
//t = 2.0ms������������-�����ת�� 135��
//t = 2.5ms������������-�����ת��180
//*/


// 
///*��ʱ����*/
//void delay1s(void)   //��� 0us
//{
//    unsigned char a,b,c;
//    for(c=167;c>0;c--)
//        for(b=171;b>0;b--)
//            for(a=16;a>0;a--);
//    _nop_();  //if Keil,require use intrins.h
//}
// 

//void Timer1_Init()  
//{  
//    TMOD &= 0xF0; 
//    TMOD |= 0x01; 
//  
//    TH1 = 0xFF;   
//    TL1 = 0xA4;   
//  
//    ET1 = 1;       
//    TR1 = 1;     
//    EA = 1;         
//}  
//  
//void Timer1_PWM() interrupt 3 using 1 
//{  
//    TH1 = 0xFF;   
//    TL1 = 0xA4;  
//  
//    Counter_L++;  
//    Counter_R++;  
//    
//    Counter_L %= 100;   
//    Counter_R %= 100;  
//    
//    if(Counter_L < Compare_L)      
//    {  
//        PWM_L = 1;  
//    }  
//    else                  
//    {  
//        PWM_L = 0;  
//    }  
//  
//    if(Counter_R < Compare_R)      
//    {  
//        PWM_R = 1;  
//    }  
//    else                  
//    {  
//        PWM_R = 0;  
//    }  
//        
//}

///*��ʱ��T0��ʼ��*/
//void Timer0_Init()           
//{
//    TMOD &= 0x00;
//    TMOD |= 0x01; //��ʱ��T0���óɷ�ʽ1
// 
//    TH0 = 0xff;   //��ʱ���� 0.1ms ����Ϊ11.0592MHz
//    TL0 = 0xa4;
// 
//    ET0 = 1;      
//    TR0 = 1; 
//	EA=1; 
//	}
//	
///*T0�жϳ�ʼ��*/
//void Time0_Init() interrupt 1 
//{
//	TR0 = 0; 
//	TH0 = 0xff; // 0.1ms
//	TL0 = 0xa4;
//	
//	if(count <= timer1) //5==0�� 15==90��
//	{ 
//		PWM = 1; 
//	}
//	else 
//	{ 
//		PWM = 0; 
//	}
//	count++;
//	if (count >= 200) //T = 20ms����
//	{ 
//		count = 0; 
//	}
//	TR0 = 1; //����T0
//}
//void main()
//{
//	Timer0_Init();
//	while(1)
//	{
//		servo(3);
//		servo(-3);
//	  go(20,70);

////		timer1 =15;//�����ת90��
////		count=0;
////		delay1s();
//	}
//}

//void servo(int angle)
//{ 	timer1 =10-angle;//����ָ���0���λ��
//		count=0;//�ö�ʱ�����¼���
//		delay1s();}



//#include <REG52.H>
//#include "Timer0.h"
//#include "Delay.h"
//#include "ultrwave.h"
//unsigned int Counter_L,Compare_L,Counter_R,Compare_R;
//unsigned int i=0;
//int t;


//sbit Moter_R=P1^0;  //���ʹ��

//sbit IN1=P1^1;   //�ҵ������ת
//sbit IN2=P1^2;
//sbit IN3=P1^3;   //��������ת
//sbit IN4=P1^4;

//sbit Moter_L=P1^5;

//sbit duoji=P2^0;

//sbit HWSM_L=P2^2;  //������̽��ģ��
//sbit HWSM_R=P2^1;
////
//sbit PWM=P2^0;
//sbit hongwai1=P0^7;
//sbit hongwai2=P0^6;

//int count=0;        
//int c=0;	        
//                   
// 
//int th;
//int tl;
//int co;
// 
//// ����PWMƵ��Ϊ1KHz����ʱ��0�ļ�������Ϊ1us
//#define PWM_FREQ 1000  // PWMƵ��1KHz
//#define PWM_PERIOD 1000  // 1ms����1000us

//// ������PWM��ʼ�����жϷ�������ʾ��
//void Timer0InitPWM(void) {
//    TMOD &= 0x0F;  // ���TMOD�Ĵ�������λ�����ö�ʱ��ģʽ
//    TMOD |= 0x10;  // ���ö�ʱ��0Ϊģʽ1��16λ��ʱ����
//    TH0 = (65536 - PWM_PERIOD) / 2;  // ���ö�ʱ����8λ��ֵ
//    TL0 = (65536 - PWM_PERIOD) / 2;  // ���ö�ʱ����8λ��ֵ
//    ET0 = 1;  // ������ʱ��0�ж�
//    EA = 1;   // �������ж�
//    TR0 = 1;  // ������ʱ��0
//}

//void Timer0_ISR(void) interrupt 1 using 1 {  // ʹ�ö�ʱ��0�ж�1
//    static unsigned int pwm_counter = 0;
//    static unsigned int pwm_duty = 0;  // ռ�ձȣ�ȡֵ��Χ0-PWM_PERIOD

//    // ��ʱ�����������װ�س�ֵ
//    TH0 = (65536 - PWM_PERIOD) / 2;
//    TL0 = (65536 - PWM_PERIOD) / 2;

//    // �ж��Ƿ񵽴�PWM���ڽ���
//    if (++pwm_counter >= PWM_PERIOD) {
//        pwm_counter = 0;  // ���ü�����
//        PWM = 0;  // ��PWM�ź�����
//    }

//    // �ж��Ƿ񵽴�PWMռ�ձ��趨�ĸߵ�ƽʱ��
//    if (pwm_counter > pwm_duty) {
//        PWM = 1;  // ��PWM�ź�����
//    }
//}

//void DelayMs(unsigned int ms) {
//    unsigned int i, j;
//    for (i = 0; i < ms; i++)
//        for (j = 0; j < 120; j++);
//}

//void stop()
//{
//		IN1 = 0; // ����͵�ƽΪ��ת
//    IN2 = 0;
//    IN3 = 0; // ����͵�ƽΪ��ת
//    IN4 = 0;
//	  Moter_R = 1; // ʹ�ҵ��ʹ��
//    Moter_L = 1; // ʹ����ʹ��
//	  DelayMs(100000);
//}
//void forward()
//{
//	  IN1 = 1; // ����͵�ƽΪ��ת
//    IN2 = 0;
//    IN3 = 0; // ����͵�ƽΪ��ת
//    IN4 = 1;

//    // ʹ�ܵ��
//    Moter_R = 1; // ʹ�ҵ��ʹ��
//    Moter_L = 1; // ʹ����ʹ��
//	  
//}

//void backward()
//{
//	  IN1 = 0; // ����͵�ƽΪ��ת
//    IN2 = 1;
//    IN3 = 1; // ����͵�ƽΪ��ת
//    IN4 = 0;

//    // ʹ�ܵ��
//    Moter_R = 1; // ʹ�ҵ��ʹ��
//    Moter_L = 1; // ʹ����ʹ��
//}

//void turn()
//{
//	  IN1 = 0; // ����͵�ƽΪ��ת
//    IN2 = 1;
//    IN3 = 0; // ����͵�ƽΪ��ת
//    IN4 = 1;
//	
//	  Moter_R = 1; // ʹ�ҵ��ʹ��
//    Moter_L = 1; // ʹ����ʹ��
//	  DelayMs(1000);
//	  forward();
//	  DelayMs(10000);
//	
//}
//void Pattern1()
//{

//    IN1 = 0; // ����͵�ƽΪ��ת
//    IN2 = 0;
//    IN3 = 0; // ����͵�ƽΪ��ת
//    IN4 = 0;
//    DelayMs(100000);
//	  backward();
//	  
//}
//void main() {

//	
//    // ��ѭ��
//	while(1)
//	{
//		      forward();
////		      DelayMs(1000);
////	        if (hongwai1 == 1) 
////					{
////               	forward();
////          }
////					else if(hongwai1 == 0)
////					{
////             turn();
////						 
////					}
//					
//				}	
//}



//#include <intrins.h>
//#include <REG52.H>
//sbit PWM = P3^7;  //�趨PWM�����I/O�˿�
//unsigned char count = 0;
//unsigned char timer1 ;

//unsigned int i=0;
//int t;


//sbit PWM_L = P1^0;  
//  
//sbit IN1=P1^1;   //�ҵ������ת
//sbit IN3=P1^2;   //��������ת
//sbit IN2=P1^3;
//sbit IN4=P1^4;

//sbit PWM_R = P1^5;


//sbit duoji=P2^0;

//sbit hongwai1=P0^7;
//sbit hongwai2=P0^6;


//unsigned int Counter_L = 0;  
//unsigned int Counter_R = 0;  
//unsigned int Compare_L = 20; 
//unsigned int Compare_R = 20;  
//void delay1s(void)   //��� 0us
//{
//    unsigned char a,b,c;
//    for(c=167;c>0;c--)
//        for(b=171;b>0;b--)
//            for(a=16;a>0;a--);
//    _nop_();  //if Keil,require use intrins.h
//}
// 
///*��ʱ��T0��ʼ��*/
//void Timer0_Init()           
//{
//    TMOD &= 0x00;
//    TMOD |= 0x01; //��ʱ��T0���óɷ�ʽ1
// 
//    TH0 = 0xff;   //��ʱ���� 0.1ms ����Ϊ11.0592MHz
//    TL0 = 0xa4;
// 
//    ET0 = 1;      
//    TR0 = 1; 
//	EA=1; 
//	}
//	
///*T0�жϳ�ʼ��*/
//void Time0_Init() interrupt 1 
//{
//	TR0 = 0; 
//	TH0 = 0xff; // 0.1ms
//	TL0 = 0xa4;
//	
//	if(count <= timer1) //5==0�� 15==90��
//	{ 
//		PWM = 1; 
//	}
//	else 
//	{ 
//		PWM = 0; 
//	}
//	count++;
//	if (count >= 200) //T = 20ms����
//	{ 
//		count = 0; 
//	}
//	TR0 = 1; //����T0
//}

//void Timer1_Init() // PWM??????  
//{  
//    TMOD &= 0xF0; 
//    TMOD |= 0x01; 
//  
//    TH1 = 0xFF; 
//    TL1 = 0xA4;  
//  
//    ET1 = 1;    
//    TR1 = 1;      
//    EA = 1;       
//}  
//  
//void Timer1_PWM() interrupt 3 using 1 
//{  
//    TH1 = 0xFF;  
//    TL1 = 0xA4;  
//  
//    Counter_L++;  
//    Counter_R++;  
//  
//    Counter_L %= 100; 
//    Counter_R %= 100;  
//  
//    if(Counter_L < Compare_L)      
//    {  
//        PWM_L = 1;  
//    }  
//    else                  
//    {  
//        PWM_L = 0;  
//    }  
//  
//    if(Counter_R < Compare_R)      
//    {  
//        PWM_R = 1;  
//    }  
//    else                  
//    {  
//        PWM_R = 0;  
//    }  
//}  
//  

//void DelayMs(unsigned int ms) {
//    unsigned int i, j;
//    for (i = 0; i < ms; i++)
//        for (j = 0; j < 120; j++);
//}


// void go(int compare_left,int compare_right)//����ռ�ձ�
//{
//   Compare_L=compare_left;
//   Compare_R=compare_right;
//   IN1 = 1; 
//   IN2 = 0;
//   IN3 = 0; 
//   IN4 = 1;
//}

// void back(int compare_left,int compare_right)//����ռ�ձ�
//{
//   Compare_L=compare_left;
//   Compare_R=compare_right;
//   IN1 = 0; 
//   IN2 = 1;
//   IN3 = 1; 
//   IN4 = 0;
//}


//void main() 
//{

//	Timer1_Init();
//	Timer0_Init();
//    // ��ѭ��
//	while(1)
//	{
//		go(10,70);
//	  timer1 =5;//����ָ���0���λ��
//		count=0;//�ö�ʱ�����¼���
//		delay1s();
//		timer1 =15;//�����ת90��
//		count=0;
//		delay1s();
//  }
//	
//	

//}


// _nop_()��ʱһ����������
#include <reg52.h>
#include <intrins.h>
sbit PWM = P3^7;  //�趨PWM�����I/O�˿�
unsigned char count = 0;
unsigned char timer1 ;

/*******���ٲ���**/
unsigned char count_L = 0;
unsigned char count_R = 0;
unsigned char compare_L = 20;
unsigned char compare_R = 20;
sbit PWM1 = P1^0;  //�趨PWM�����I/O�˿�

sbit IN1=P1^1;   //�ҵ������ת
sbit IN3=P1^2;   //��������ת
sbit IN2=P1^3;
sbit IN4=P1^4;

sbit PWM2 = P1^5;
/******���ٲ���****/

/*
����180����
t = 0.5ms������������-�����ת�� 0 �� 
t = 1.0ms������������-�����ת�� 45��
t = 1.5ms������������-�����ת�� 90��
t = 2.0ms������������-�����ת�� 135��
t = 2.5ms������������-�����ת��180
*/

 
 
/*��ʱ����*/
void delay1s(void)   //��� 0us
{
    unsigned char a,b,c;
    for(c=167;c>0;c--)
        for(b=171;b>0;b--)
            for(a=16;a>0;a--);
    _nop_();  //if Keil,require use intrins.h
}
 
/*��ʱ��T0��ʼ��*/
void Timer0_Init()           
{
    TMOD &= 0x00;
    TMOD |= 0x01; //��ʱ��T0���óɷ�ʽ1
 
    TH0 = 0xff;   //��ʱ���� 0.1ms ����Ϊ11.0592MHz
    TL0 = 0xa4;
 
    ET0 = 1;      
    TR0 = 1; 
	EA=1; 
	}
	
/*T0�жϳ�ʼ��*/
void Time0_Init() interrupt 1 
{
	TR0 = 0; 
	TH0 = 0xff; // 0.1ms
	TL0 = 0xa4;
	
	if(count <= timer1) //5==0�� 15==90��
	{ 
		PWM = 1; 
	}
	else 
	{ 
		PWM = 0; 
	}
	count++;
	if (count >= 200) //T = 20ms����
	{ 
		count = 0; 
	}
	
/********Ѱ������*�����Ҫ*��ɾ***/
		if(count_L <= compare_L) //5==0�� 15==90��
	{ 
		PWM1 = 1; 
	}
	else 
	{ 
		PWM1 = 0; 
	}
	count_L++;
	if (count_L >= 200) //T = 20ms����
	{ 
		count_L = 0; 
	}
	
	
			if(count_R <= compare_R) //5==0�� 15==90��
	{ 
		PWM2 = 1; 
	}
	else 
	{ 
		PWM2 = 0; 
	}
	count_R++;
	if (count_R >= 200) //T = 20ms����
	{ 
		count_R = 0; 
	}
/********Ѱ������*�����Ҫ*��ɾ	***/
	
	
	
	TR0 = 1; //����T0

}



/***���ٺ���***/
void go(int compare_left,int compare_right)//����ռ�ձ�
{
   compare_L=compare_left;
   compare_R=compare_right;
   IN1 = 1; 
   IN2 = 0;
   IN3 = 0; 
   IN4 = 1;
}
/****���ٺ���****/



void main()
{
	Timer0_Init();
	while(1)
	{
		
		timer1 =5;//����ָ���0���λ��
		count=0;//�ö�ʱ�����¼���
		delay1s();
		timer1 =15;//�����ת90��
		count=0;
		delay1s();
/*****���ٺ��� ��Ҫ��ɾ****/
		go(70,180);
/*****���ٺ��� ��Ҫ��ɾ****/
	}
}
