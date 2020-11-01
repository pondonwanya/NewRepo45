#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	struct  profile
	{
		char name[100];
		int score;
	} s[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Student [%d] \n", i+1);
		printf(" \t Please enter your name   : ");
		scanf("%s", s[i].name);
		printf("\t Please enter your score  : ");
		scanf("%d", &s[i].score);
	}

	printf("\n");

	for (int i = 0; i < 10; i++)
		if (s[i].score > 0 && s[i].score <= 50) {
			printf("%s \t : No pass!",s[i].name);
			printf("\n");
		}
		else if (s[i].score > 50 && s[i].score <= 100) {
			printf("%s \t : Pass",s[i].name);
			printf("\n");
		}
	return 0;
}