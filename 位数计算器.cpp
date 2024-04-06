#include<stdio.h>
int main()
{int x ;
 int n=0;
 scanf("%d",&x);
 do{x=x/10;
    n++;
 }while(x>0);
 //printf("%d",n) 

	printf("您输入的数是%d位数" ,n) ;
	return 0;
	
	
	
	
	
	
 } 
