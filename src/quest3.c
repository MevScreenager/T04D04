#include<stdio.h>
#include<math.h>

int fib(int f);

int main(){
	int f;
	if (!scanf("%d", &f))
	{
	printf("n/a");
	return -1;
	}
	if ((int) f  != f){
		printf("n/a");
		return -1;
	}
	printf("%d", fib(f));

}

int fib(int f){
	if (f == 0) return 0;
	if (f == 1) return 1;
	return fib(f - 2) + fib(f - 1);
}
