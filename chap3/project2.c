// 학습시간: 2016년 4월 22일 금요일 오후 7시 56분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Chapter3. Project2.
//

#include <stdio.h>

int main(void)
{
	int number, month, day, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", number, price, month, day, year);

	return 0;
}