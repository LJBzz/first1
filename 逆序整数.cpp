#include<stdio.h>
int main()
{int x=0;
int res=0;
int digit=0;
printf ("��Ҫ����������ǣ�") ;
 scanf("%d",&x);
 while(x>0)
 {digit=x%10;
  res=res*10+digit;
  x/=10;
 }
 printf("%d",res);
 return 0;

}
