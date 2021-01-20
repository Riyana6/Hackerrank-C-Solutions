#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int a,a1,b,b1,c,c1,d,d1,sum;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    a=n/10000;
    a1=n%10000;
    b=a1/1000;
    b1=a1%1000;
    c=b1/100;
    c1=b1%100;
    d=c1/10;
    d1=c1%10;
    sum=a+b+c+d+d1;
    printf("%d",sum);
    return 0;
}
