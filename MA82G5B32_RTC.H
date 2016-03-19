#ifndef _MA82G5B32_RTC_H
#define _MA82G5B32_RTC_H

#include <REG_MA82G5B32.H>
#include "MA82G5B32_IAP.H"

extern xdata unsigned int POWERON_FLG;  //�˱����ж��Ƿ���Ӳ�ϵ�

extern xdata unsigned long RtcCounter;
extern bit bGetTime;

#define RTC_OUT_Enable()      RTCCR|=1<<6;       //����RTC��P4.5���
#define RTC_OUT_Disable()     RTCCR&=~(1<<6);    //��ֹRTC���

#define RTC_Cnt_Start()       RTCCR|=1<<7;       //����RTC������
#define RTC_Cnt_Stop()        RTCCR&=~(1<<7);    //ֹͣRTC������

#define RTC_Int_Enable()      SFIE|=1<<4;        //RTC�����ж�
#define RTC_Int_Disable()     SFIE&=~(1<<4);     //RTC��ֹ�ж�


#define RTC_Clear_Int_Flag()  PCON1|=1<<4;       //д1��RTCF��BIT4������жϱ�־

typedef enum
{
	XTAL_DIV16384 = 0,
	XTAL_DIV32768 = 1,
	SYSCLK_DIV12 = 2,
	SYSCLK_DIV32768 = 3
}rtcclk_def;


void RTC_SourceClk_Config(rtcclk_def clock);
//void Set_RTC_Reload(unsigned char Dat6bits);
// unsigned char Get_RTC_Cnt(void);

void RTC_init(void);


#endif
