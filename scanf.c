#include <stdio.h>

int main() {
	char name[100];
	printf("Hello, what's your name?\n");
	scanf("%s", name);
	printf("Hello, %s!\n",name);	

	return 0;
}
