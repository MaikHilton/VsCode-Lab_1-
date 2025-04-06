#include <stdio.h>

int main() {
    // 1. Поділити два цілих числа 5 та 2 і вивести результат як float
    int a = 5, b = 2;
    float result = (float)a / b;
    printf("Division result: %.2f\n", result);

    // 2. Оголосити константну змінну типу float та вивести її значення
    const float PI = 3.14;
    printf("Constant PI: %.2f\n", PI);

    // 3. Оголосити змінну типу char та вивести її ASCII-код
    char symbol = 'A';
    printf("Character: %c, ASCII code: %d\n", symbol, symbol);

    // 4. Користувач вводить ціле і дробове число. Вивести їх суму
    int integer;
    float decimal;
    printf("Enter an integer and a float number: ");
    scanf("%d %f", &integer, &decimal);
    printf("Sum: %.2f\n", integer + decimal);

    // 5. Програма зчитує символ та виводить наступний символ у таблиці ASCII
    char input_char;
    printf("Enter a character: ");
    scanf(" %c", &input_char);
    printf("Next character: %c\n", input_char + 1);

    return 0;
}