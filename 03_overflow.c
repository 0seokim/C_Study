#include <stdio.h>

// char : -128~127(256)
int main(){
    char a = 64;
    a = 64 + a;
    printf("%d", a);
}
// output : -128 (127�� �Ѿ�  overflow �Ǿ��� ������)

int main(){
    char a = 128;
    printf("%d", a);
}
// output : -128 (127�� �Ѿ�  overflow �Ǿ��� ������)

int main(){
    char a = 64;
    printf("%d", a + 64);
}
// output : 128 (printf �ÿ� �ӽø޸𸮸� ���� int�� �������� ����Ǿ��� ������ ���������� ���)