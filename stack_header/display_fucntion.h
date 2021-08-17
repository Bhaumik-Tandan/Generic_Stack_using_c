void disp____19BIT0292(stack *s,int i,int f)// 0 f represted represents print without padding
{
    #include "disp_all.h"
    void* (* fp[4][2])(stack *s,void *);//functions will be called based of value of i and f
    fp[0][0]=dispi__19BIT0292;
    fp[0][1]=dispi__19BIT0292_pad;
    fp[1][0]=dispf__19BIT0292;
    fp[1][1]=dispf__19BIT0292_pad;
    fp[2][0]=disps__19BIT0292;
    fp[2][1]=disps__19BIT0292_pad;
    fp[3][0]=dispc__19BIT0292;
    fp[3][1]=dispc__19BIT0292_pad;
    fp[s->d_type__19BIT0292[i]][f](s,i);//as per the data type stored in d_type__19BIT0292 it will call
}