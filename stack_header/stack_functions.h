void* pop(stack *s)
{
    #include "display_fucntion.h"// it contains the disp____19BIT0292lay function
    #define t s->t__19BIT0292
    if(t==-1)
    printf("\nStack is empty");
    else
    {
        printf("\n");
        disp____19BIT0292(s,t,0);
        printf(" poped");
        s->stack__19BIT0292=realloc(s->stack__19BIT0292,t*sizeof(void *));
        s->d_type__19BIT0292=realloc(s->d_type__19BIT0292,t*sizeof(short));
        return s->stack__19BIT0292[t--];
    }
    #undef t
}

void* top(stack *s)
{
    #include "display_fucntion.h"// it contains the disp____19BIT0292lay function
    #define t s->t__19BIT0292
    if(t==-1)
    printf("\nStack is empty");
    else{
        printf("\nTop Element is: ");
       disp____19BIT0292(s,t,0);
       return s->stack__19BIT0292[t];
    }
    #undef t
}
void* display(stack *s)
{
    #include "display_fucntion.h"// it contains the disp____19BIT0292lay function
    #define t s->t__19BIT0292
    if(t==-1){
    printf("\nStack is empty");
    return;
    }
    printf("\nThe whole stack is\n\n");
    for(int i=t;i>=0;i--)
    disp____19BIT0292(s,i,1);
    printf("|");
    for(int i=0;i<20;i++)
    printf("_");
    printf("|");
    #undef t
}
