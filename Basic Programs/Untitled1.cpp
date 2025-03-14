#include<stdio.h>
/*
int sum(int a, int b);

int sum(int x, int y){
	return x+y;
}
int main() {
	int a, b;
	printf("Enter A:");
	scanf("%d", &a);
	printf("Enter B:");
	scanf("%d", &b);
	int s = sum(a,b);
	printf("SUM = %d",s);
	
}
*/

void calculate(float value);

void calculate(float value) {
value = (value + (0.18*value));
printf("Final Price is : %f",value");	
}

int main() {
	float value=100.0;
	calculate(value);
	printf("Final Price is : %f",value);
}
