#include <stdio.h>
#include<stdlib.h>
void update(int *a,int *b) {
    int sum,diff;
    (*a) = (*a) + (*b);
    (*b) = abs(((*a)-(*b)) - (*b));
    return (*a);
    return (*b);  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
