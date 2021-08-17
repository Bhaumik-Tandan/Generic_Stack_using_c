void dispi__19BIT0292(stack *s,int i)
{
    printf("%d",s->stack__19BIT0292[i]);
}

void dispi__19BIT0292_pad(stack *s,int i)
{
    printf("|%20d|\n",s->stack__19BIT0292[i]);
}

void dispf__19BIT0292(stack *s,int i)
{
    printf("%f",*(float *)s->stack__19BIT0292[i]);
}

void dispf__19BIT0292_pad(stack *s,int i)
{
    printf("|%20.4f|\n",*(float *)s->stack__19BIT0292[i]);
}

void disps__19BIT0292(stack *s,int i)
{
    printf("%s",s->stack__19BIT0292[i]);
}

void disps__19BIT0292_pad(stack *s,int i)
{
    printf("|%20s|\n",s->stack__19BIT0292[i]);
}

void dispc__19BIT0292(stack *s,int i)
{
    printf("%c",s->stack__19BIT0292[i]);
}

void dispc__19BIT0292_pad(stack *s,int i)
{
    printf("|%20c|\n",s->stack__19BIT0292[i]);
}