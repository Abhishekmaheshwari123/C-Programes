#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter The Number:");
	scanf("%d",&a);
	printf("Enter The Power:");
	scanf("%d",&b);
	c=pow(a,b);
	printf("Answer=%d",c);
	return 0;
}
