#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int a,int b)
{
    int res=a>b?a:b;
    return res;
}
int max_of_four(int a,int b,int c,int d){
    int final=max(max(max(a,b),c),d);
    return final;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
