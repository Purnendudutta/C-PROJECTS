#include<stdio.h>
#include<math.h>

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
/*
void calculate(float value);

void calculate(float value) {
value = (value + (0.18*value));
printf("Final Price is : %.2f\n",value);	
}

int main() {
	float value;
	printf("Enter Value : ");
	scanf("%f",&value);
	calculate(value);
	printf("Value is : %.2f",value);
}
*/

float squareArea(float a);
float circleArea(float red);
float rectangleArea(float a, float b);

float squareArea(float a) {
	return a*a;
}

float circleArea(float red) {
	return (3.14*red*red);
}

float rectangleArea(float a, float b) {
	return a*b;
}

int main() {
	int switcher;
	printf("Enter\n 1 for squareArea,\n 2 for circleArea,\n 3 for rectangleArea\n");
	scanf("%d", &switcher);
	switch(switcher) {
		case 1:
		float square;
        printf("Enter Base value : ");
        scanf("%f",&square);
        printf("Area:%f",squareArea(square));
        break;

    case 2:
        float red;
        printf("Enter Base value : ");
        scanf("%f",&red);
        printf("Area:%f",circleArea(red));
        break;

    case 3:
        float a,b;
        printf("Enter Base value : ");
        scanf("%f",&a);
        printf("Enter Base value : ");
        scanf("%f",&b);
        printf("Area:%f",rectangleArea(a,b));
	}
}
