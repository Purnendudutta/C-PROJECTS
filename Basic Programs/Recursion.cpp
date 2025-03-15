#include <stdio.h>

/*		===== RECURSION =====

void printHelloWorld(int count) {
    if (count <= 0) {
        return;
    }
    printf("Hello, World!\n");
    printHelloWorld(count - 1);
}

int main() {
    printHelloWorld(5);
    return 0;
}
*/

/*      ==== FACTORIAL OF "N" INTIGER ====

long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
*/
/*      ==== FACTORIAL OF "N" INTIGER ====

int fact(int n) {
	if(n==0) {
		return 1;
	}	else {
	int factm = fact(n-1);
	int factn = factm*n;
	return factn;
	}
}
int main() {
	int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
	printf("Factorial of %d is:%d",n,fact(n));
}
*/
/*        ==== Convert Temperature ====

float convertTemp(int celcius) {
	float far=celcius*(9.0/5.0)+32;
	return far;
}
 int main() {
 	float far = convertTemp(0);
 	printf("Fahrenheit : %f",far);
 	return 0;
 }*/
 /*
 int percent(int num1, int num2, int num3) {
 	return(num1+num2+num3)/3;
 }
 
 int main() {
 	int num1=99;
 	int num2=98;
 	int num3=97;
 	
 	printf("percentage is :%d",percent(num1,num2,num3));
 }
 */
 

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}
