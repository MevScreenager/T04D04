#include <stdio.h>
#include <math.h>

int nod(int n);



int main(){
	int x;
	if (!scanf("%d", &x))
	{
	printf("n/a");
	return -1;
	}
	if ((int) x  != x){
	printf("n/a");
	return -1;
	}
	if (x > 0) printf("%d", nod(x));
	else printf("%d", nod(-x));


}

int nod(int n){
	int tm;
	for (int i = 1; (i < n) || (i == n); i = i + 1){
		for (int j = 1; (j < n) || (j == n); j = j + 1){
			if ((i * j) == n){
				int count = 0;
				for (int k = 1; (k < i) || (k == i); k = k + 1){
					for (int h = 1; (h < i) || (h == i); h = h + 1){
						if ((k * h) == i) count = count + 1;
					}
				}
				if ((count == 2) && (i > tm)) tm = i;
			}
		}
	}
	return tm;
}
