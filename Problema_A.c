#include <stdio.h>

int main() {
    int n, total = 0;
    scanf("%d", &n);
    for (int i = 0, filhos; i < n; i++) {
        scanf("%d", &filhos);
        total += filhos;
    }
    printf("%d\n", total);
    return 0;
}
