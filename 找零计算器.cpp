#include<stdio.h>
int main()
{int total,cost,change;
 printf("请输入您的票面和花费：\n"); 
 scanf("%d %d",&total,&cost);
 change=total-cost;
   if(change>=0)
     printf("%d",change);
     
   else 
    printf("您的余额不足"); 
	 
  return 0;
}
        
