#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 0;
	int argcs = argc -1;
	if (argcs == 0) {
		printf("Too few arguments.");
	} else if (argcs > 0 && argcs < 3) {
		printf("You have %d argument", argcs);
		if (argcs == 2) {
			printf("s. Your arguments are ");
		} else {
			printf(". Your argument is ");
		}
		for(i=1; i<argc; i++) {
			printf("%s ", argv[i]);
		}
	} else {
		printf("You have too many arguments. %d is too much!", argcs);
	}
	return 0;
}
