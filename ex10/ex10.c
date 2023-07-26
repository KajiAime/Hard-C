#include <stdio.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 0;
	char *states[] = {
		"California", NULL, "Oregon",
		"Washington", "Texas"
	};
	int num_states = 5;
//	argv[3] = states[3];
//	states[3] = argv[3];
	for(i=0; i<argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	for(i=0; i<num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}
	return 0;
}
