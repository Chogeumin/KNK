// 학습일자 2016년 4월 12일 오후 10시 32분.
// 장호연.
// K.N.King C Programming.
//
// Write a program taht declares several int and float variables - without initializing them - and then prints their values.
// Is there any pattern to the values? (Usually there isn't.)
//

#include <stdio.h>

int main(void)
{
	int integer1, integer2, integer3, integer4, integer5;
	float floater1, floater2, floater3, floater4, floater5;

	printf("int: %d\n", integer1);
	printf("int: %d\n", integer2);
	printf("int: %d\n", integer3);
	printf("int: %d\n", integer4);
	printf("int: %d\n", integer5);

	printf("float: %f\n", floater1);
	printf("float: %f\n", floater2);
	printf("float: %f\n", floater3);
	printf("float: %f\n", floater4);
	printf("float: %f\n", floater5);

	return 0;
}
