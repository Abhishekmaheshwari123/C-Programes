#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("enter the 1st angle:");
	scanf("%f",&a);
	printf("enter the 2nd angle:");
	scanf("%f",&b);
	c=180-a-b;
	printf("third angle=%f",c);
	return 0;
}
