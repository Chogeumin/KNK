#include <stdio.h>

int main(void) {
	char ch;
	float countWord = 0.0f, countSpell = 0;
	
	printf ("Enter a sentence: ");
	
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			countWord++;
			continue;
		}

		countSpell++;
	}
	
	countWord++;
	printf("Average word length: %.1f\n", countSpell / countWord);

	return 0;
}