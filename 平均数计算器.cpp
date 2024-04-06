#include<stdio.h>
int main()
{double sum=0;int n=0;int x=0;double average=0;
 do{printf("请输入你要求平均数的项，输入-1时开始计算\n");
    scanf("%d",&x) ;
    sum=x+sum;
    n++;	
 }while(x!=-1);
  n--;
  average=(sum+1)/n;
 printf("你想求的平均数为%f",average);
 return 0;
 	
}
