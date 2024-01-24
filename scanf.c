#include <stdio.h>
int main()
{
	int age;
	float gpa;
	char grade;
	
	printf("Enter your age: ");
	scanf("%i", &age);

	printf("Enter your gpa: ");
	scanf("%f", &gpa);

	printf("Enter your letter grade: ");
	scanf(" %c", &grade);
	
return 0;
}
