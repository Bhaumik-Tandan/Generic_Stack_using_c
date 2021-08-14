#include "varibles_decalred.h"//it also contains header files
void disp(int i,int f)// 0 f represted represents print without padding
{
    switch(d_type[i])
    {
    case 0:
    if(f==0)
    printf("%d",stack[i]);
    else
    printf("|%20d|\n",stack[i]);
    break;
    case 1:
    if(f==0)
    printf("%f",*(float *)stack[i]);
    else
    printf("|%20.4f|\n",*(float *)stack[i]);
    break;    
    case 2:
    if(f==0)
    printf("%s",stack[i]);
    else
    printf("|%20s|\n",stack[i]);
    break;
    case 3:
    if(f==0)
    printf("%c",stack[i]);
    else
    printf("|%20c|\n",stack[i]);
    break;
    }


}