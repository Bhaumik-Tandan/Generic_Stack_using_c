#include "varibles_decalred.h"//it also contains header files
#include "display_fucntion.h"// it contains the display function
void push__19BIT0292(void* a,int v)
{
    #define t t__19BIT0292
    t++;
    stack__19BIT0292=realloc(stack__19BIT0292,(t+1)*sizeof(void *));//array size increased
    stack__19BIT0292[t]=a;//pointer address given to array
    d_type__19BIT0292=realloc(d_type__19BIT0292,(t+1)*sizeof(short));
    d_type__19BIT0292[t]=v;
    printf("\n");
    disp(t,0);
    printf(" pushed");
}
void* pop()
{
    #define t t__19BIT0292
    if(t==-1)
    printf("\nStack is empty");
    else
    {
        printf("\n");
        disp(t,0);
        printf(" poped");
        stack__19BIT0292=realloc(stack__19BIT0292,t*sizeof(void *));
        d_type__19BIT0292=realloc(d_type__19BIT0292,t*sizeof(short));
        return stack__19BIT0292[t--];
    }
}

void* top()
{
    #define t t__19BIT0292
    if(t==-1)
    printf("\nStack is empty");
    else{
        printf("\nTop Element is: ");
       disp(t,0);
       return stack__19BIT0292[t];
    }
}
void* display()
{
    #define t t__19BIT0292
    if(t==-1){
    printf("\nStack is empty");
    return;
    }
    printf("\nThe whole stack is\n\n");
    for(int i=t;i>=0;i--)
    disp(i,1);
    printf("|");
    for(int i=0;i<20;i++)
    printf("_");
    printf("|");

}