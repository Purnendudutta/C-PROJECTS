/*
#include<stdio.h>

int square(int n) {
	n = n*n;
	printf("Square = %d\n",n);
}

int _square(int*n) {
	*n = (*n)*(*n);
	printf("Square = %d\n",*n);
} 

int main(){
	int number = 4;
	square(number);
	printf("Square = %d\n",number);
	_square(&number);
	printf("Square = %d\n",number);
	return 0;
}
*/
/*
//		==== Swap Two Numbers ====
#include<stdio.h>

void swap(int a,int b){
	int t=a;
	a=b;
	b=t;
	printf("a=%d b=%d\n",a,b);
}

void _swap(int *a,int *b) {
	int t=*a;
	*a=*b;
	*b=t;
	printf("a=%d b=%d\n",*a,*b);
}

int main() {
	int x=3,y=5;
	swap(x,y);
	printf("x=%d y=%d\n",x,y);
	_swap(&x,&y);
	printf("x=%d y=%d\n",x,y);
	return 0;
}
*/
/*
//        USE OF POINTER =====
#include<stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);
int main() {
	int a=3,b=5;
	int sum,prod,avg;
	dowork(a,b,&sum,&prod,&avg);
	printf("Sum=%d,Product=%d,Average=%d",sum,prod,avg);
	return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg) {
	*sum=a+b;
	*prod=a*b;
	*avg=(a+b)/2;
}
