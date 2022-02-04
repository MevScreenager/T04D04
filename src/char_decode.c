#include<stdio.h>
#include<math.h>

char *antiHex();

int main(){
	int c, f, cns = 0;
	int count = 0;
	while ((c=getchar()) != EOF){
		if (c == 10) return 0;
		if ((c == 49) && (count == 1)) f = 1;
		if ((c == 48) && (count  == 0)) f = 0;
		if (c == 10) cns = cns + 1;
		if ((count > 3) && (cns < 2)){ printf("n/a"); return 0;}

		if ((f == 0) && (c != 32) && (count != 0)) printf("%x ", c);
		if ((f == 1) && (c != 32) && (count != 0)){}
		count = count + 1;
	}	
}
