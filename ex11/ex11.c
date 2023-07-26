#include <stdio.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;
	char *states[20] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;
	while(i<argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}
	i=0;
	while(i<num_states) {
		printf("state %d: %s\n", i+1, states[i]);
		i++;
	}
	i=0;
	while(i<argc) {
		states[i] = argv[i];
		printf("state %d: %s\n", i+1, states[i]);
		if(i == 20) {
			break;
		}
		i++;
	}
	return 0;
}
