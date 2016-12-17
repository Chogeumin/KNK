#include <stdio.h>

int main(void) {
	int month1, month2, day1, day2, year1, year2, date1, date2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);

	date1 = year1 * 10000 + month1 * 100 + day1;
	date2 = year2 * 10000 + month2 * 100 + day2;

	if (date1 <= date2)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
	else
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);

	// printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date1 >= date2 ? month2, day2, year2, month1, day1, year1 : month1, day1, year1, month2, day2, year2);
	// gcc compiler에서 expression result unused -Wunused-value 경고가 발생한다.
	// 제대로 작동하나 이런식으론 쓰지 않는다는 걸 의미.
	// exp 1 ? exp 2 : epx3의 경우 하나에 한가지 값만을 넣는 것이 좋다.
	
	return 0;
}