void pushi__19BIT0292(stack *s,int a)
{
    #include "push_main.h"
    push__19BIT0292(s,a,0);
}
void pushf__19BIT0292(stack *s,float a)
{
    #include "push_main.h"
    float *f=malloc(sizeof(float));
    *f=a;
    push__19BIT0292(s,f,1);
}
void pushs__19BIT0292(stack *s,char * a)
{
    #include "push_main.h"
    char *p=malloc(sizeof(char)*21);
    strcpy(p,a);//this exists even after memory assigned
    push__19BIT0292(s,p,2);
}
void pushc__19BIT0292(stack *s,char a)
{
    #include "push_main.h"
    push__19BIT0292(s,a,3);
}