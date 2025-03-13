#include<stdio.h>

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
	
}

