#include<stdio.h>

void main() {
	
	int a, i, j, star;
	printf("Enter Diamond Size\n");
	scanf("%d", &a);

	for (i = a; i > 0; i--){
		for (j = i; j > 0; j--){
			printf("* ");
		}
		for (j = i; j < a; j++)
		{
			printf("    ");
		}
		star = i;
		for (j = star; j > 0; j--)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (i = 1; i <= a; i++){
		for (j = 0; j < i; j++)
		{
			printf("* ");
		}
		for (j = i; j < a; j++)
		{
			printf("    ");
		}
		star = i;
		for (j = star; j > 0; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
