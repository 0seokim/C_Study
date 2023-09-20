/* 
0. 입력을 받는 scanf 함수 -> 변수를 입력받기 전에 미리 선언해 두고 입력받을 시에 변수의 주소를 표시해주어야 함

1. float : 4byte로 실수를 표현 
   double : 8byte로 실수를 표현
   따라서 double이 float보다 더 표현력 있음 

2. 소수점 표현을 위해 %.2f , 기본은 6자리
    */

#include <stdio.h>

int main() {
	int age; // 4byte 정수형 변수 age를 선언한다.
	float pi1; // 4byte %f
	double pi2; // 8byte %lf

    printf("&pi1, &pi2, &age의 값을 지정해주세요");
	// scanf 함수 호출 시 사용하는 서식 지정자와 변수에 대한 입력을 수정합니다.
	scanf("%f %lf %d",  &pi1, &pi2, &age);

	// printf 함수에서의 서식 지정자와 출력 형식을 수정합니다.
	printf("%.2f\n", pi1);

	return 0;
}
