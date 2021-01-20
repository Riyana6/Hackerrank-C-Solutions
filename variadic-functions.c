
int  sum (int count,...) {
    int         nSum=0;
    va_list     intargumentpointer;
    va_start(intargumentpointer,count);
    for(int i =0;i<count;i++)
    {
        nSum+=va_arg(intargumentpointer,int);
    }
    va_end(intargumentpointer);
    return nSum;
}

int min(int count,...) {
    int i,min,a;
    va_list intargumentpointer;
    va_start(intargumentpointer,count);
    min=va_arg(intargumentpointer,int);
    for(i=2;i<=count;i++)
    {
        if((a=va_arg(intargumentpointer,int))<min)
            min=a;
    }
    va_end(intargumentpointer);
    return min;       
}

int max(int count,...) {
    int i,max,a;
    va_list intargumentpointer;
    va_start(intargumentpointer,count);
    max=va_arg(intargumentpointer,int);
    for(i=2;i<=count;i++)
    {
        if((a=va_arg(intargumentpointer,int))>max)
            max=a;
    }
    va_end(intargumentpointer);
    return max;
}

