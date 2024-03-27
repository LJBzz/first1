
#include<stdio.h>
int main()
{  int a,b,c;
   printf("请输入你要比较的三个数\n");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b)
	 if(b>c)
     printf("%d>%d>%d",a,b,c);
     else if(b==c)
       printf("%d>%d=%d",a,b,c) ;
     else if(c>a>b)
         printf("%d>%d>%d",c,a,b);
     else
         printf("%d>%d>%d",a,c,b);
   else if(a==b) 
	     if(b<c)
           printf("%d>%d=%d",c,a,b);
         else if(b>c)
           printf("%d=%d>%d",a,b,c);
         else printf("%d=%d=%d",a,b,c);
   else 
        if(a>c)
           printf("%d>%d>%d",b,a,c);
        else if(a==c)
         printf("%d>%d=%d",b,a,c);
        else if(b==c)
        printf("%d=%d>%d",b,c,a);
        else if(a<c<b)
           printf("%d>%d>%d",b,c,a);
        else printf("%d>%d>%d",c,b,a);
return 0;
 } 
