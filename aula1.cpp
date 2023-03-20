#include <cstdio>

constexpr int isqrt(int n) {
    int i = 1;
    while (i*i < n) {
        ++i;
    }
    return i - (i*i != n);
}
    
int main() {
    constexpr int i = isqrt(1764); // resolve enquanto roda o programa -> queremos sempre diminuir o tempo de execuão do programa
    printf("%d", i); // poderia ser usado cout tb
}