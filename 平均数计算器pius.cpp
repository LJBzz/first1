#include<stdio.h>
int main(){
int cnt=0;
int x;
double sum;
int number[100];
int i=0;
double average;
scanf("%d",&x);
while(x!=-1)//输入-1时停止计算 
{number[cnt]=x;
cnt++;
sum=sum+x;
scanf("%d",&x);
}
average=sum/cnt;
printf("平均数是%f\n",average);
for(i=0;i<cnt;i++){
	if(number[i]>(sum/cnt))
	 printf("比平均数大的项是：%d\t",number[i]);//输出比平均数大的项 
	else continue;	
}
return 0;
	
	
}
