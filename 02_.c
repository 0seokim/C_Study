/* 
0. �Է��� �޴� scanf �Լ� -> ������ �Է¹ޱ� ���� �̸� ������ �ΰ� �Է¹��� �ÿ� ������ �ּҸ� ǥ�����־�� ��

1. float : 4byte�� �Ǽ��� ǥ�� 
   double : 8byte�� �Ǽ��� ǥ��
   ���� double�� float���� �� ǥ���� ���� 

2. �Ҽ��� ǥ���� ���� %.2f , �⺻�� 6�ڸ�
    */

#include <stdio.h>

int main() {
	int age; // 4byte ������ ���� age�� �����Ѵ�.
	float pi1; // 4byte %f
	double pi2; // 8byte %lf

    printf("&pi1, &pi2, &age�� ���� �������ּ���");
	// scanf �Լ� ȣ�� �� ����ϴ� ���� �����ڿ� ������ ���� �Է��� �����մϴ�.
	scanf("%f %lf %d",  &pi1, &pi2, &age);

	// printf �Լ������� ���� �����ڿ� ��� ������ �����մϴ�.
	printf("%.2f\n", pi1);

	return 0;
}
