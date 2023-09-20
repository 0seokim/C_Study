#include <stdio.h>

// char : -128~127(256)
int main(){
    char a = 64;
    a = 64 + a;
    printf("%d", a);
}
// output : -128 (127를 넘어  overflow 되었기 때문에)

int main(){
    char a = 128;
    printf("%d", a);
}
// output : -128 (127를 넘어  overflow 되었기 때문에)

int main(){
    char a = 64;
    printf("%d", a + 64);
}
// output : 128 (printf 시에 임시메모리를 통해 int를 기준으로 연산되었기 때문에 정상적으로 출력)