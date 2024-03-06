/* hello.c */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Проверка, что передано два аргумента командной строки
    if (argc != 3) {
        printf("Использование: %s <нижний_предел> <верхний_предел>\n", argv[0]);
        return 1; // Возвращаем код ошибки
    }

    // Преобразование аргументов в целые числа
    int lowerLimit = atoi(argv[1]);
    int upperLimit = atoi(argv[2]);

    // Проверка корректности введенных данных
    if (lowerLimit > upperLimit || lowerLimit < 100000 || upperLimit > 999999) {
        printf("Ошибка: Некорректные пределы\n");
        return 1; // Возвращаем код ошибки
    }

    // Подсчет счастливых чисел
    int countHappyNumbers = 0;

    // Вывод исходных данных
    printf("Исходные данные:\n");
    printf("Нижний предел: %d\n", lowerLimit);
    printf("Верхний предел: %d\n", upperLimit);

    // Вывод результатов
    printf("Количество счастливых чисел: %d\n", countHappyNumbers);

    return 0;
}

