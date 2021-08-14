#include "stack_functions.h"
//https://technotip.com/8617/pragma-directive-c-program/
void __attribute__ ((constructor)) default_constructor() //it get called at initailisation of the header file
{ 
    fp[0]=&push;
    fp[1]=&pop;
    fp[2]=&top;
    fp[3]=&display;
} 
void menu()
{
    printf("\n\n\n1)Push\n2)Pop\n3)Top\n4)Display\n");
    printf("\nEnter your choice: ");
    int c;
    scanf("%d",&c);
    if(c==1)
    {
        printf("\n\nEnter that you to push in the stack: ");
        char s[20];
        scanf("%s",s);
        int a=atoi(s);//convert string to int
        float f=atof(s);
         if((a!=0 || strcmp("0",s)==0)&& f==a)
        {
            fp[0](a,0);
            menu();
        }
        if(f!=0)
        {
            fp[0](&f,1);
            menu();
        }
        if(strlen(s)>1)
        fp[0](s,2);
        else
        fp[0](s[0],3);
        menu();
    }    
    fp[c-1]();
    menu();
}