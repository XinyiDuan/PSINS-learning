#include "My_demo.h"

void MyDemo_StaticINS(void)
{
	CFileRdWt::Dir(".\\Data\\"); CFileRdWt fins("my_static_ins.bin");
	double ts = 0.01;
	int T = 3600, frq = 100;
	CVect3 wm[2], vm[2];
	CVect3 att0(3 * DEG, 3 * DEG, 5 * DEG);
	CVect3 vn0 = O31;
	CVect3 pos0 = LLH(34.0, 108.0, 400);
	IMUStatic(wm[0], vm[0], att0, pos0, ts);

}