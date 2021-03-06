#ifndef _MA82G5B32_IAP_H
#define _MA82G5B32_IAP_H

#include <reg_ma82g5b32.h>
#include "typedef.h"

#define IAPLB   0X03

typedef enum
{
    Standby_Cmd=0,          /* ����  */  
    IAP_Read_Cmd=1,         /*  AP/IAP-�洢����  */
    IAP_Write_Cmd=2,        /*  AP/IAP-�洢����� */
    IAP_PageErase_Cmd=3,    /*  AP/IAP-�洢��ҳ���� */
	Ppage_Wirte_Cmd=4,      /*  P ҳ SFR д  */
	Ppage_Read_Cmd=5,       /*  P ҳ SFR ��  */
}Flash_Cmd;


void Page_P_SFR_Write(uint8_t SFR,uint8_t dat);  //PҳSFR�Ĵ���д
uint8_t Page_P_SFR_Read(uint8_t SFR);            //PҳSFR�Ĵ�����

// void IAP_FlashErease(uint16_t addr,uint16_t len);
// uint8_t IAP_ReadByte(uint16_t addr);
// bit IAP_ReadBytes(uint16_t addr,void *buf,uint16_t len);
// bit IAP_WirteByte(uint16_t addr,uint8_t dat);
// bit IAP_WirteBytes(uint16_t addr,void *pdat,uint16_t len);


#endif