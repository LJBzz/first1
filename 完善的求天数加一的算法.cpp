#include<stdio.h>
//#include<stdbool.h>
struct date{
int day;
int month;
int year;	
}today,tomorrow;

int Isleap(struct date d);
int lastday(struct date d);



int main(){
printf("please input the data of today:\n");
scanf("%d %d %d",&today.day,&today.month,&today.year);
if(today.day!=lastday(today)){
 today.day=today.day+1;
}
else {
    if (today.month==12){
	today.day=1;
	today.month=1;
	today.year+=1;}
    else{today.day=1;
    today.month+=1;} }
printf("tomorrow is %d-%d-%d\n",today.day,today.month,today.year);
return 0;	
} 

int lastday(struct date d){
int a[]	={31,28,31,30,31,30,31,31,30,31,30,31};
if(Isleap(d)&&d.month==2){
d.day=29;
}
else d.day=a[d.month-1];
return d.day;	
}

int  Isleap(struct date d){
int leap=0;

printf("%d",d.year);
//int b=d.year%4;
if(d.year%4==0&&d.year!=100||d.year%400==0){
leap=1;	
}
return leap;		
}
