#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

// Вариант 15
// Пересчет числа световых лет в астрономические единицы
int main() {
    setlocale(LC_CTYPE, "RUS");
    double ly, au;
    puts("Введите число световых лет");
    scanf("%lf", &ly); // расстояние в световых годах
    au = ly * 63241.077; // в одном световом году 63241.077 астрономической единицы
    printf("%g св. лет = %.3f а. е.\n", ly, au);
    return 0;
}
