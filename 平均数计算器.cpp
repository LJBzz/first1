#include<stdio.h>
int main()
{double sum=0;int n=0;int x=0;double average=0;
 do{printf("��������Ҫ��ƽ�����������-1ʱ��ʼ����\n");
    scanf("%d",&x) ;
    sum=x+sum;
    n++;	
 }while(x!=-1);
  n--;
  average=(sum+1)/n;
 printf("�������ƽ����Ϊ%f",average);
 return 0;
 	
}
