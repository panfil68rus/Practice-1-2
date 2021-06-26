#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int c = 5, d;
	float a = 5, b;
	printf("b=");
	scanf("%f", &b);
	printf("d=");
	scanf("%d", &d);
	a += b - 2;
	printf("a=a+(b-2) : \t \t a=%.0f, b=%.0f, c=%d, d=%d;\n", a, b, c, d);
	d += ++c - a;
	printf("d=d+(c+1)-a : \t \t a=%.0f, b=%.0f, c=%d, d=%d;\n", a, b, c, d);
	a *= c--;
	printf("a=a*(c-1) : \t \t a=%.0f, b=%.0f, c=%d, d=%d;\n", a, b, c, d);
	d *= (с /= 2) + --b + ( a /= 10);
	printf("d=d*(c/2+(b-1)+a/10) : \t a=%.0f, b=%.0f, c=%d, d=%d;\n", a, b, c, d);
	system("pause");
	return 0;
}
