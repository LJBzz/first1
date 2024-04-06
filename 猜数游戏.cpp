#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
 int x=rand()%100;
 int guess;
 int n; 
 printf("你猜的数是：");
 scanf("%d",&guess) ;
 while(guess!=x)
 {n++;
 	if(guess<x)
	 	{
		 printf("太小了，小笨蛋，再来一次叭\n");
		 scanf("%d",&guess) ;
		 ;
		 }  
	else {
	printf("太大了，大笨蛋，再来一次叭\n");
	scanf("%d",&guess); 
	}
	
 }
 printf("恭喜宝贝猜对了，真是特别特别聪明呢,一共猜了%d次\n",n=n+1);
 return 0; 

}
 
 
	
	
	
	
	
	
	
	

