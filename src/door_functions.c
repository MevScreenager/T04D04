#include<stdio.h>
#include<math.h>

int main(){
	for (double i = 0; i < (3.1415927 * 2); i = i + ((3.1415927 * 2)/42)){
		if (i < 3.1415927) printf("%.7lf|%.7lf|-|%.7lf", i,1. / (1 + pow(i, 2)),1. / pow(i, 2) );
		else printf("%.7lf|%.7lf|%.7lf|%.7lf", i, 1. / (1 + pow(i, 2),
					sqrt(sqrt(1 + (4 * pow(i, 2))) - pow(i, 2) - 1), 1. /pow(i, 2)));
	}
}


