#include <stdio.h>

int main(int argc, char *argv[]){
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n",
		bugs, bug_rate);

	//Large numbers print out 2's complement representation of extremely large numbers.
	//long universe_of_defects = 1L *1024L *1024L *1024L *1024L *1024L *1024L *1023L;
	unsigned long universe_of_defects = 1L *1024L *1024L *1024L *1024L *1024L *1024L;
	printf("The entire universe has %ld bugs.\n",
		universe_of_defects);

	double expected_bugs = bugs *bug_rate;
	printf("You are expected to have %f bugs.\n",
		expected_bugs);

	double part_of_universe = expected_bugs/universe_of_defects;
	printf("That is only a %e portion of the unuiverse.\n",
		part_of_universe);

	//A demo of something weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n",
		care_percentage);
	printf("Nul byte: %s \n", nul_byte);
	printf("Nul byte: %c \n", nul_byte);
	/*Multiplying a char by an int is possible because all char
	have corresponding int values.
	*/
	printf("Multiplying %c by %d gives %d\n",
		'e', 3, 'e'*3);
	return 0;
}
