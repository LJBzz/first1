#include<stdio.h>
  int sort(int a[3] )
  {
  int i,j,t;
  printf("input 3 numbers you want to compare\n");
 
    for(i=0;i<3;i++)
    {scanf("%d",&a[i]);}
    printf("\n");
  
    for(j=0;j<2;j++)
	 for(i=0;i<2-j;i++)
	  if(a[i]>a[i+1])
       {t=a[i];a[i]=a[i+1];a[i+1]=t;}
    //printf("the sorted numbers are:\n");
    for(i=0;i<3;i++)
      //printf("%d\t",a[i]); 
      return 0;
        }//�Զ��庯�� 

int main()
{ int a[3];//int i ;int j; int t;
 sort(a);
 if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
 	{printf("ֱ��������");
	 }
 else if(a[0]==a[1]&&a[0]==a[2])
    {printf("�ȱ�������");
	}
 else if(a[0]+a[1]<=a[2])
    {printf("������") ;
	}
else printf("Ѱ��������"); 

 
 return 0;
}
	
	
	

	

