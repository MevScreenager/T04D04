/*
Программа, рассчитывающая максимум двух чисел
*/
#include <stdio.h>

int max(int a, int b);

void main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", max(x, y));
}

int max(int a, int b)
{
    if (b > a)
        a = b;
	
    return a;
}
