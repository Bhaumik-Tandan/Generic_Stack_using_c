void dispi__19BIT0292(int i)
{
    printf("%d",stack__19BIT0292[i]);
}

void dispi__19BIT0292_pad(int i)
{
    printf("|%20d|\n",stack__19BIT0292[i]);
}

void dispf__19BIT0292(int i)
{
    printf("%f",*(float *)stack__19BIT0292[i]);
}

void dispf__19BIT0292_pad(int i)
{
    printf("|%20.4f|\n",*(float *)stack__19BIT0292[i]);
}

void disps__19BIT0292(int i)
{
    printf("%s",stack__19BIT0292[i]);
}

void disps__19BIT0292_pad(int i)
{
    printf("|%20s|\n",stack__19BIT0292[i]);
}

void dispc__19BIT0292(int i)
{
    printf("%c",stack__19BIT0292[i]);
}

void dispc__19BIT0292_pad(int i)
{
    printf("|%20c|\n",stack__19BIT0292[i]);
}