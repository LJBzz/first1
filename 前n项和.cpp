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
        }//自定义函数 

int main()
{ int a[3];//int i ;int j; int t;
 sort(a);
 if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
 	{printf("直角三角形");
	 }
 else if(a[0]==a[1]&&a[0]==a[2])
    {printf("等边三角形");
	}
 else if(a[0]+a[1]<=a[2])
    {printf("不存在") ;
	}
else printf("寻常三角形"); 

 
 return 0;
}
	
	
	

	

