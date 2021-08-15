#include "disp_all.h"
void disp(int i,int f)// 0 f represted represents print without padding
{
    typedef void* (* ppt)(void *);//functions will be called based of value of i and f
    ppt fp[4][2];
    fp[0][0]=dispi__19BIT0292;
    fp[0][1]=dispi__19BIT0292_pad;
    fp[1][0]=dispf__19BIT0292;
    fp[1][1]=dispf__19BIT0292_pad;
    fp[2][0]=disps__19BIT0292;
    fp[2][1]=disps__19BIT0292_pad;
    fp[3][0]=dispc__19BIT0292;
    fp[3][1]=dispc__19BIT0292_pad;
    fp[d_type__19BIT0292[i]][f](i);//as per the data type stored in d_type__19BIT0292 it will call
}