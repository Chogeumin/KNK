// 학습시간: 2016년 4월 14일 목요일 오후 3시 22분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Chapter3. Exercise.
//

#include <stdio.h>

int main(void)
{
	// // 1.
	// printf("%6d, %4d\n", 86, 1040);
	// printf("%12.5e\n", 30.253);
	// printf("%.4f\n", 83.162);
	// printf("%-6.2g\n", .0000009979);

	// // 2.
	// float x = 1401.2;

	// printf("%-8.1e\n", x);
	// printf("%10.6e\n", x);
	// printf("%-8.3f\n", x);
	// printf("%6.0f\n", x);

	// 3.
	// int i, j, k, m, n, l;
	// float x, y, w, v;

	// printf("(a) \"%%d\" versus \" %%d\"\n");
	// scanf("%d", &i);
	// scanf(" %d", &j);
	// printf("%d versus %d\n", i, j);

	// printf("(b) \"%%d-%%d-%%d\" versus \"%%d -%%d -%%d\"\n");
	// scanf("%d-%d-%d", &i, &j, &k);
	// scanf("%d -%d -%d", &m, &n, &l);
	// printf("\"%d-%d-%d\" versus \"%d-%d-%d\"\n", i, j, k, m, n, l);

	// printf("(c) \"%%f\" versus \"%%f \"\n");
	// scanf("%f", &x);
	// scanf("%f ", &y);
	// printf("\"%f\" versus \"%f\"\n", x, y);

	// printf("(d) \"%%f,%%f\" versus \"%%f, %%f\"\n");
	// scanf("%f,%f", &x, &y);
	// scanf("%f, %f", &w, &v);
	// printf("\"%f,%f\" versus \"%f,%f\"\n", x, y, w, v);

	// 4.
	int i, j;
	float x;

	scanf("%d%f%d", &i, &x, &j);
	printf("%d %f %d\n", i, x, j);

	return 0;
}