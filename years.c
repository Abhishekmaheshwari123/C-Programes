#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number of days");
	scanf("%d",&a);
	
	b=a/365;
	printf("\nYears=%d",b);
	int c,m;
	c=a%365;
	m=c/30;
	printf("\nmonths=%d",m);
	int t,o,q;
	t=c%30;
	
	o=t/7;
	
	printf("\nweeks=%d",o);
	q=t-(o*7);
	printf("\ndays=%d",q);
	
	
	
	
	
}
