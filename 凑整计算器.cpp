#include<stdio.h>
int main()
{int x=2;//x������Ҫƴ�յ��ܽ��,��λ��Ԫ 
 int one,two,five;
 int exit=0;
  for(one=1;one<x*10;one++) {
  	for(two=1;two<x*5;two++){
  		for(five=1;five<x*2;five++){
  		    if(one+2*two+5*five==10*x){
  		    	printf("������Ľ�������%d��һ�ǣ�%d�����ǣ�%d�����ƴ��\n",one,two,five);
  		    	goto out;
				//exit=1;
				//break; 
			}
		}
		//if(exit) break;
	}
	//if(exit) break;	
  }
out:
return 0;		
}
