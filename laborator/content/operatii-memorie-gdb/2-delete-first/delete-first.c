#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern)
{
	//char *copy = strstr(s, pattern);
	char *copy = malloc(100);
	//strcpy(copy, strstr(s, pattern));
	//strcpy(copy, copy + strlen(pattern));
	//strcpy(s + (strstr(s, pattern) - s), copy);
	//s + (strstr(s, pattern) - s) = copy;

	strcpy(copy, s);
	//printf("%s\n\n\n", copy);
	strcpy(strstr(copy, pattern), strstr(copy, pattern) + strlen(pattern));
	s = copy;
	return s;
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";
	char *p;

	// Decomentati linia dupa ce ati implementat functia delete_first.
	p = delete_first(s, pattern);
	printf("%s\n", p);
	free(p);
	return 0;
}
