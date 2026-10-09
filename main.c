#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

// Вариант 10
// Вычисление возраста по дате рождения
int main() {
    setlocale(LC_CTYPE, "RUS");
    int day, month, year;
    int curDay, curMonth, curYear;
    int birth, current, age;
    puts("Введите дату рождения (дд мм гггг)");
    scanf("%d %d %d", &day, &month, &year); // дата рождения
    puts("Введите сегодняшнюю дату (дд мм гггг)");
    scanf("%d %d %d", &curDay, &curMonth, &curYear); // сегодняшняя дату

    // Склеиваем дату в одно число
    // Так более поздняя дата всегда дает большее число
    birth = year * 10000 + month * 100 + day;
    current = curYear * 10000 + curMonth * 100 + curDay;
    age = (current - birth) / 10000; // годы стоят в старших разрядах, поэтому делим разницу на 10000

    printf("Дата рождения: %02d.%02d.%d\n", day, month, year);
    printf("Сегодня: %02d.%02d.%d\n", curDay, curMonth, curYear);
    printf("Возраст: %d (полных лет)\n", age);
    return 0;
}
