#include <stdio.h>

int main(void) {
	int day, month, year, date, early_date = 1000000;

	while (1) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		date = year * 10000 + month * 100 + day;

		if (date == 0)
			break;

		if (date < early_date) {
			early_date = date;
		}
	}

	printf("%d/%d/%.2d is the earliest date\n", early_date % 10000 / 100, early_date % 100, early_date / 10000);

	return 0;
}