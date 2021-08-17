#include "./stack_header/varibles_decalred.h"//it also contains header files
#include "./stack_header/stack_functions.h"
#include "./stack_header/push_type.h"
#pragma once//restrict double import
//https://stackoverflow.com/questions/479207/how-to-achieve-function-overloading-in-c
//https://www.geeksforgeeks.org/_generic-keyword-c/
#define push(st,a) _Generic(a, int: pushi__19BIT0292, char*: pushs__19BIT0292,double: pushf__19BIT0292,char:pushc__19BIT0292,float:pushf__19BIT0292)(st,a)//char and int will be treated similarly


void s_in(stack *s)
{
    s->t__19BIT0292=-1;
    s->stack__19BIT0292=0;
    s->d_type__19BIT0292=0;
}

void menu(stack *st)
{
    void* (* fp[3])(stack *);
    //0 push 
    //1 pop 
    //2 top 
    //3 display whole stack
    fp[0]=&pop;
    fp[1]=&top;
    fp[2]=&display;
    printf("\n\n\n1)Push\n2)Pop\n3)Top\n4)Display\n5)Exit\n");
    printf("\nEnter your choice: ");
    int c;
    scanf("%d",&c);
    if(c==1)
    {
        printf("\n\nEnter that you to push in the stack: ");
        char s[21];//this will get destroyed after function is finished it also has null
        scanf("%s",s);
        int a=atoi(s);//convert string to int
        float f=atof(s);
         if((a!=0 || strcmp("0",s)==0)&& f==a)
        {
            push(st,a);
            return menu(st);
        }
        if(f!=0)
        {
            push(st,f);
            return menu(st);
        }
        if(strlen(s)>1){
        push(st,s);
        }
        else
        push(st,s[0]);
        return menu(st);
    }    
    else if(c==5)
    return;
    fp[c-2](st);
    return menu(st);
}
