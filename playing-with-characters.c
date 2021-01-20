 #include<stdio.h>
 #include<string.h>
 int main()
 {
     char ch,s[10],sen[500];
     scanf("%c",&ch);
     scanf("%s\n",&s);
     scanf("%[^\n]%*c",&sen);
     printf("%c\n",ch);
     printf("%s\n",s);
     printf("%s",sen);
     return 0;

 }
