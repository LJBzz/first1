#include<stdio.h>
int main(){
int cnt=0;
int x;
double sum;
int number[100];
int i=0;
double average;
scanf("%d",&x);
while(x!=-1)//����-1ʱֹͣ���� 
{number[cnt]=x;
cnt++;
sum=sum+x;
scanf("%d",&x);
}
average=sum/cnt;
printf("ƽ������%f\n",average);
for(i=0;i<cnt;i++){
	if(number[i]>(sum/cnt))
	 printf("��ƽ����������ǣ�%d\t",number[i]);//�����ƽ��������� 
	else continue;	
}
return 0;
	
	
}
