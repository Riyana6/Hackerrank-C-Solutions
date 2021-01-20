#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,a,b,x,y,z,A=0,B=0,C=0;
  for(i=1;i<n;i++) {
      a=i;
      for(j=i+1;j<=n;j++){
          b=j;
          x=a&b;
          y=a|b;
          z=a^b;
          if(x<k && x>A)
          A=x;
          if(y<k && y>B)
          B=y;
          if(z<k && z>C)
          C=z;
        
      }
  }
  printf("%d\n",A);
  printf("%d\n",B);
  printf("%d",C);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
