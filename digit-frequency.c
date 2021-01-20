#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    gets(s);
    int len=strlen(s);
    int i,j,total=0;
    char r='0';
    for(i=0;i<=9;i++)
    {
        total=0;
        for(j=0;j<len;j++)
        {
            if(s[j]==r)
            {
                total++;
            }
        }
        printf("%d ",total);
        r++;
    }
    return 0;
}
