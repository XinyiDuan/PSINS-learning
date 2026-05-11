#pragma once
#include ".\PSINSCore\PSINS.h"
#include ".\Demo\PSINS_Demo.h"

#define mydemo(demoNo) \
	switch(demoNo){ \
	case 1:	MyDemo_StaticINS(); break; \
	case 2:	MyDemo_IMUErrorCompare(); break; \
	case 3:	MyDemo_CoarseAlign(); break; \
	case 4:	MyDemo_VelcocityAidedAlignKF(); break; \
	case 5:	MyDemo_SINSGNSS_Sim(); break; \
	case 6:	MyDemo_GNSSOutage(); break; \
	case 7:	MyDemo_SINS_OD(); break; \
	case 8:	MyDemo_Sysclbt_Sim(); break; \
	default: Demo_User(); break; \
	}

void MyDemo_StaticINS(void);
void MyDemo_IMUErrorCompare(void);
void MyDemo_CoarseAlign(void);
void MyDemo_VelocityAidedAlignKF(void);
void MyDemo_SINSGNSS_Sim(void);
void MyDemo_GNSSOutage(void);
void MyDemo_SINS_OD(void);
void MyDemo_SysClbt_Sim(void);