//DATE: 2023.09.10
//PURPOSE: Compare 2 strings to see if they are equal

#include<stdio.h>

//Function prototypes

_Bool compareString(const char str1[],const char str2[]);

int main(void) {
	const char myString1[] = "This";
	const char myString2[] = "This";
	int result = 0;
	result = compareString(myString1, myString2);
	printf("2 strings are equal? %i", result);
	char myNum = 'T';

	//can be applied directly
	printf("\nAdam and Adam is equal? %i", compareString("Adam", "Adam"));

	return 0;
}


//function definitions
_Bool compareString(const char str1[],const char str2[]) {
	_Bool result;
	int i = 0;

	while (str1[i] != '\0') {
		if (str1[i] == str2[i]) {
			result = 1;
			i++;
		}
		else
		{
			result = 0;
			break;
		}
	}
	return result;
}