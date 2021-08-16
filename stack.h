#include "./stack_header/stack_functions.h"
#include "./stack_header/push_type.h"
#pragma once//restrict double import
//https://stackoverflow.com/questions/479207/how-to-achieve-function-overloading-in-c
//https://www.geeksforgeeks.org/_generic-keyword-c/
#define push(a) _Generic(a, int: pushi__19BIT0292, char*: pushs__19BIT0292,double: pushf__19BIT0292,char:pushc__19BIT0292,float:pushf__19BIT0292)(a)//char and int will be treated similarly


//https://technotip.com/8617/pragma-directive-c-program/
void __attribute__ ((constructor)) default_constructor__19BIT0292() //it get called at initailisation of the header file
{ 
    fp__19BIT0292[0]=&pop;
    fp__19BIT0292[1]=&top;
    fp__19BIT0292[2]=&display;
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
            push(a);
            menu();
        }
        if(f!=0)
        {
            push(f);
            menu();
        }
        if(strlen(s)>1)
        push(s);
        else
        push(s[0]);
        menu();
    }    
    fp__19BIT0292[c-2]();
    menu();
}
