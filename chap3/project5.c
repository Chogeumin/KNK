// 학습시간: 2016년 4월 22일 금요일 오후 9시 10분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Chapter3. Project5.
//

#include <stdio.h>

int main(void)
{
	int n11, n12, n13, n14, n21, n22, n23, n24, n31, n32, n33, n34, n41, n42, n43, n44;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
		&n11, &n12, &n13, &n14, &n21, &n22, &n23, &n24, &n31, &n32, &n33, &n34, &n41, &n42, &n43, &n44);

	printf("\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\nRow sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d\n",
		n11, n12, n13, n14, n21, n22, n23, n24, n31, n32, n33, n34, n41, n42, n43, n44,
		n11 + n12 + n13 + n14, n21 + n22 + n23 + n24, n31 + n32 + n33 + n34, n41 + n42 + n43 + n44,
		n11 + n21 + n31 + n41, n12 + n22 + n32 + n42, n13 + n23 + n33 + n43, n14 + n24 + n34 + n44,
		n11 + n22 + n33 + n44, n14 + n23 + n32 + n41);

	return 0;
}