#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
 int x=rand()%100;
 int guess;
 int n; 
 printf("��µ����ǣ�");
 scanf("%d",&guess) ;
 while(guess!=x)
 {n++;
 	if(guess<x)
	 	{
		 printf("̫С�ˣ�С����������һ�ΰ�\n");
		 scanf("%d",&guess) ;
		 ;
		 }  
	else {
	printf("̫���ˣ��󱿵�������һ�ΰ�\n");
	scanf("%d",&guess); 
	}
	
 }
 printf("��ϲ�����¶��ˣ������ر��ر������,һ������%d��\n",n=n+1);
 return 0; 

}
 
 
	
	
	
	
	
	
	
	

