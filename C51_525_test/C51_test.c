//// _nop_()延时一个机器周期
//#include <reg52.h>
//#include <intrins.h>
//sbit PWM = P3^7;  //设定PWM输出的I/O端口
//unsigned char count = 0;
//unsigned char timer1 ;


//unsigned int Counter_L = 0;  
//unsigned int Counter_R = 0;  
//unsigned int Compare_L = 20; 
//unsigned int Compare_R = 20;

////sbit PWM_L=P2^0;  

////sbit IN1=P2^1;//电机驱动引脚
////sbit IN2=P2^2;
////sbit IN3=P2^3;   
////sbit IN4=P2^4;

////sbit PWM_R=P2^5;


//sbit PWM_L=P1^0;  

//sbit IN1=P1^1;//电机驱动引脚
//sbit IN2=P1^2;
//sbit IN3=P1^3;   
//sbit IN4=P1^4;

//sbit PWM_R=P1^5;
// void servo(int angle);
// void go(int compare_left,int compare_right)//设置占空比
//{
//    Compare_L=compare_left;
//    Compare_R=compare_right;
//    IN1 = 1; 
//  IN2 = 0;
//  IN3 = 1; 
//  IN4 = 0;
//}
//void back(int compare_left,int compare_right)//设置占空比
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
//对于180°舵机
//t = 0.5ms——————-舵机会转动 0 ° 
//t = 1.0ms——————-舵机会转动 45°
//t = 1.5ms——————-舵机会转动 90°
//t = 2.0ms——————-舵机会转动 135°
//t = 2.5ms——————-舵机会转动180
//*/


// 
///*延时程序*/
//void delay1s(void)   //误差 0us
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

///*定时器T0初始化*/
//void Timer0_Init()           
//{
//    TMOD &= 0x00;
//    TMOD |= 0x01; //定时器T0设置成方式1
// 
//    TH0 = 0xff;   //定时常数 0.1ms 晶振为11.0592MHz
//    TL0 = 0xa4;
// 
//    ET0 = 1;      
//    TR0 = 1; 
//	EA=1; 
//	}
//	
///*T0中断初始化*/
//void Time0_Init() interrupt 1 
//{
//	TR0 = 0; 
//	TH0 = 0xff; // 0.1ms
//	TL0 = 0xa4;
//	
//	if(count <= timer1) //5==0° 15==90°
//	{ 
//		PWM = 1; 
//	}
//	else 
//	{ 
//		PWM = 0; 
//	}
//	count++;
//	if (count >= 200) //T = 20ms清零
//	{ 
//		count = 0; 
//	}
//	TR0 = 1; //开启T0
//}
//void main()
//{
//	Timer0_Init();
//	while(1)
//	{
//		servo(3);
//		servo(-3);
//	  go(20,70);

////		timer1 =15;//舵机旋转90°
////		count=0;
////		delay1s();
//	}
//}

//void servo(int angle)
//{ 	timer1 =10-angle;//舵机恢复到0°的位置
//		count=0;//让定时器重新计数
//		delay1s();}



//#include <REG52.H>
//#include "Timer0.h"
//#include "Delay.h"
//#include "ultrwave.h"
//unsigned int Counter_L,Compare_L,Counter_R,Compare_R;
//unsigned int i=0;
//int t;


//sbit Moter_R=P1^0;  //电机使能

//sbit IN1=P1^1;   //右电机正反转
//sbit IN2=P1^2;
//sbit IN3=P1^3;   //左电机正反转
//sbit IN4=P1^4;

//sbit Moter_L=P1^5;

//sbit duoji=P2^0;

//sbit HWSM_L=P2^2;  //红外线探测模块
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
//// 假设PWM频率为1KHz，定时器0的计数周期为1us
//#define PWM_FREQ 1000  // PWM频率1KHz
//#define PWM_PERIOD 1000  // 1ms，即1000us

//// 以下是PWM初始化和中断服务函数的示例
//void Timer0InitPWM(void) {
//    TMOD &= 0x0F;  // 清除TMOD寄存器高四位，配置定时器模式
//    TMOD |= 0x10;  // 设置定时器0为模式1（16位定时器）
//    TH0 = (65536 - PWM_PERIOD) / 2;  // 设置定时器高8位初值
//    TL0 = (65536 - PWM_PERIOD) / 2;  // 设置定时器低8位初值
//    ET0 = 1;  // 开启定时器0中断
//    EA = 1;   // 开启总中断
//    TR0 = 1;  // 启动定时器0
//}

//void Timer0_ISR(void) interrupt 1 using 1 {  // 使用定时器0中断1
//    static unsigned int pwm_counter = 0;
//    static unsigned int pwm_duty = 0;  // 占空比，取值范围0-PWM_PERIOD

//    // 定时器溢出后重新装载初值
//    TH0 = (65536 - PWM_PERIOD) / 2;
//    TL0 = (65536 - PWM_PERIOD) / 2;

//    // 判断是否到达PWM周期结束
//    if (++pwm_counter >= PWM_PERIOD) {
//        pwm_counter = 0;  // 重置计数器
//        PWM = 0;  // 将PWM信号拉低
//    }

//    // 判断是否到达PWM占空比设定的高电平时间
//    if (pwm_counter > pwm_duty) {
//        PWM = 1;  // 将PWM信号拉高
//    }
//}

//void DelayMs(unsigned int ms) {
//    unsigned int i, j;
//    for (i = 0; i < ms; i++)
//        for (j = 0; j < 120; j++);
//}

//void stop()
//{
//		IN1 = 0; // 假设低电平为正转
//    IN2 = 0;
//    IN3 = 0; // 假设低电平为正转
//    IN4 = 0;
//	  Moter_R = 1; // 使右电机使能
//    Moter_L = 1; // 使左电机使能
//	  DelayMs(100000);
//}
//void forward()
//{
//	  IN1 = 1; // 假设低电平为正转
//    IN2 = 0;
//    IN3 = 0; // 假设低电平为正转
//    IN4 = 1;

//    // 使能电机
//    Moter_R = 1; // 使右电机使能
//    Moter_L = 1; // 使左电机使能
//	  
//}

//void backward()
//{
//	  IN1 = 0; // 假设低电平为正转
//    IN2 = 1;
//    IN3 = 1; // 假设低电平为正转
//    IN4 = 0;

//    // 使能电机
//    Moter_R = 1; // 使右电机使能
//    Moter_L = 1; // 使左电机使能
//}

//void turn()
//{
//	  IN1 = 0; // 假设低电平为正转
//    IN2 = 1;
//    IN3 = 0; // 假设低电平为正转
//    IN4 = 1;
//	
//	  Moter_R = 1; // 使右电机使能
//    Moter_L = 1; // 使左电机使能
//	  DelayMs(1000);
//	  forward();
//	  DelayMs(10000);
//	
//}
//void Pattern1()
//{

//    IN1 = 0; // 假设低电平为正转
//    IN2 = 0;
//    IN3 = 0; // 假设低电平为正转
//    IN4 = 0;
//    DelayMs(100000);
//	  backward();
//	  
//}
//void main() {

//	
//    // 主循环
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
//sbit PWM = P3^7;  //设定PWM输出的I/O端口
//unsigned char count = 0;
//unsigned char timer1 ;

//unsigned int i=0;
//int t;


//sbit PWM_L = P1^0;  
//  
//sbit IN1=P1^1;   //右电机正反转
//sbit IN3=P1^2;   //左电机正反转
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
//void delay1s(void)   //误差 0us
//{
//    unsigned char a,b,c;
//    for(c=167;c>0;c--)
//        for(b=171;b>0;b--)
//            for(a=16;a>0;a--);
//    _nop_();  //if Keil,require use intrins.h
//}
// 
///*定时器T0初始化*/
//void Timer0_Init()           
//{
//    TMOD &= 0x00;
//    TMOD |= 0x01; //定时器T0设置成方式1
// 
//    TH0 = 0xff;   //定时常数 0.1ms 晶振为11.0592MHz
//    TL0 = 0xa4;
// 
//    ET0 = 1;      
//    TR0 = 1; 
//	EA=1; 
//	}
//	
///*T0中断初始化*/
//void Time0_Init() interrupt 1 
//{
//	TR0 = 0; 
//	TH0 = 0xff; // 0.1ms
//	TL0 = 0xa4;
//	
//	if(count <= timer1) //5==0° 15==90°
//	{ 
//		PWM = 1; 
//	}
//	else 
//	{ 
//		PWM = 0; 
//	}
//	count++;
//	if (count >= 200) //T = 20ms清零
//	{ 
//		count = 0; 
//	}
//	TR0 = 1; //开启T0
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


// void go(int compare_left,int compare_right)//设置占空比
//{
//   Compare_L=compare_left;
//   Compare_R=compare_right;
//   IN1 = 1; 
//   IN2 = 0;
//   IN3 = 0; 
//   IN4 = 1;
//}

// void back(int compare_left,int compare_right)//设置占空比
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
//    // 主循环
//	while(1)
//	{
//		go(10,70);
//	  timer1 =5;//舵机恢复到0°的位置
//		count=0;//让定时器重新计数
//		delay1s();
//		timer1 =15;//舵机旋转90°
//		count=0;
//		delay1s();
//  }
//	
//	

//}


// _nop_()延时一个机器周期
#include <reg52.h>
#include <intrins.h>
sbit PWM = P3^7;  //设定PWM输出的I/O端口
unsigned char count = 0;
unsigned char timer1 ;

/*******调速部分**/
unsigned char count_L = 0;
unsigned char count_R = 0;
unsigned char compare_L = 20;
unsigned char compare_R = 20;
sbit PWM1 = P1^0;  //设定PWM输出的I/O端口

sbit IN1=P1^1;   //右电机正反转
sbit IN3=P1^2;   //左电机正反转
sbit IN2=P1^3;
sbit IN4=P1^4;

sbit PWM2 = P1^5;
/******调速部分****/

/*
对于180°舵机
t = 0.5ms——————-舵机会转动 0 ° 
t = 1.0ms——————-舵机会转动 45°
t = 1.5ms——————-舵机会转动 90°
t = 2.0ms——————-舵机会转动 135°
t = 2.5ms——————-舵机会转动180
*/

 
 
/*延时程序*/
void delay1s(void)   //误差 0us
{
    unsigned char a,b,c;
    for(c=167;c>0;c--)
        for(b=171;b>0;b--)
            for(a=16;a>0;a--);
    _nop_();  //if Keil,require use intrins.h
}
 
/*定时器T0初始化*/
void Timer0_Init()           
{
    TMOD &= 0x00;
    TMOD |= 0x01; //定时器T0设置成方式1
 
    TH0 = 0xff;   //定时常数 0.1ms 晶振为11.0592MHz
    TL0 = 0xa4;
 
    ET0 = 1;      
    TR0 = 1; 
	EA=1; 
	}
	
/*T0中断初始化*/
void Time0_Init() interrupt 1 
{
	TR0 = 0; 
	TH0 = 0xff; // 0.1ms
	TL0 = 0xa4;
	
	if(count <= timer1) //5==0° 15==90°
	{ 
		PWM = 1; 
	}
	else 
	{ 
		PWM = 0; 
	}
	count++;
	if (count >= 200) //T = 20ms清零
	{ 
		count = 0; 
	}
	
/********寻迹调速*如果不要*可删***/
		if(count_L <= compare_L) //5==0° 15==90°
	{ 
		PWM1 = 1; 
	}
	else 
	{ 
		PWM1 = 0; 
	}
	count_L++;
	if (count_L >= 200) //T = 20ms清零
	{ 
		count_L = 0; 
	}
	
	
			if(count_R <= compare_R) //5==0° 15==90°
	{ 
		PWM2 = 1; 
	}
	else 
	{ 
		PWM2 = 0; 
	}
	count_R++;
	if (count_R >= 200) //T = 20ms清零
	{ 
		count_R = 0; 
	}
/********寻迹调速*如果不要*可删	***/
	
	
	
	TR0 = 1; //开启T0

}



/***调速函数***/
void go(int compare_left,int compare_right)//设置占空比
{
   compare_L=compare_left;
   compare_R=compare_right;
   IN1 = 1; 
   IN2 = 0;
   IN3 = 0; 
   IN4 = 1;
}
/****调速函数****/



void main()
{
	Timer0_Init();
	while(1)
	{
		
		timer1 =5;//舵机恢复到0°的位置
		count=0;//让定时器重新计数
		delay1s();
		timer1 =15;//舵机旋转90°
		count=0;
		delay1s();
/*****调速函数 不要可删****/
		go(70,180);
/*****调速函数 不要可删****/
	}
}
