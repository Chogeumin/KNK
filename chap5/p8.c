#include <stdio.h>

int main(void) {
	int hour, min, time, departure, arrival;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);

	time = hour * 60 + min;

	if (1223 <= time) {
		departure = 21 * 60 + 45; arrival = 23 * 60 + 58; 
	}
	else if (1043 <= time) {
		departure = 19 * 60; arrival = 21 * 60 + 20;
	}
	else if (893 <= time) {
		departure = 15 * 60 + 45; arrival = 17 * 60 + 55;
	}
	else if (804 <= time) {
		departure = 14 * 60; arrival = 16 * 60 + 8;
	}
	else if (732 <= time) {
		departure = 12 * 60 + 47; arrival = 15 * 60;
	}
	else if (631 <= time) {
		departure = 11 * 60 + 19; arrival = 13 * 60 + 31;
	}
	else if (532 <= time) {
		departure = 9 * 60 + 43; arrival = 11 * 60 + 52;
	}
	else if (173 <= time) {
		departure = 8 * 60; arrival = 10 * 60 + 16;
	}
	else {
		departure = 21 * 60 + 45; arrival = 23 * 60 + 58; 
	}

	printf("Closest departure time is %d:%.2d ", departure / 60, departure % 60);
	if (departure < 720)
		printf("a.m.");
	else
		printf("p.m.");
	printf(", arrivaing at %d:%.2d ", arrival / 60, arrival % 60);
	if (arrival < 720)
		printf("a.m.\n");
	else
		printf("p.m.\n");

	return 0;
}