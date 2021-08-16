#include "display_fucntion.h"// it contains the disp____19BIT0292lay function
void* pop()
{
    #define t t__19BIT0292
    if(t==-1)
    printf("\nStack is empty");
    else
    {
        printf("\n");
        disp____19BIT0292(t,0);
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
       disp____19BIT0292(t,0);
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
    disp____19BIT0292(i,1);
    printf("|");
    for(int i=0;i<20;i++)
    printf("_");
    printf("|");

}