#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);
    int idade_real = 2025 - y;
    int idade_millenial = idade_real * 2;
    int ano_millenial = 2025 - idade_millenial;
    printf("%d\n", ano_millenial);
    return 0;
}
