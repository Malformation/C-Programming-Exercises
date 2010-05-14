//Ex 1-20
//Malfy

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

	char* string;
	int replace = '\t';
	int n = 5;
	int i = 0;
	char* a;
	
	string = malloc(1024);
	
	printf("Input: ");
	
	fgets(string,40,stdin);
	string[strlen(string)-1] = '\0';
	
	while ((a = strchr(string,replace)) != NULL) {
		*a = ' ';
	}
	
	printf("%s\n",string);
	
	return 0;
}

