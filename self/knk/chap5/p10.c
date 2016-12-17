#include <stdio.h>

int main(void) {
	int score;
	char grade;

	printf("Enter numerical grade: ");
	scanf("%d", &score);

	if (score > 100 || score < 0) {
		printf("Illegal grade.\n");
		return 0;
	}

	switch (score / 10) {
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7: 
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	}

	printf("Letter grade: %c\n", grade);

	return 0;
}