#include <stdio.h>
#include <math.h> // Для функції round() в завданні 2

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

    //Творчі завдання

    // Тест: Що буде виведено?
    // Питання: Що буде виведено на екран після виконання наступного коду в мові C?

    //#include <stdio.h>

    // int main() {
        // char a = 255;
        // printf("%d\n", a);
        // return 0;
    // }

    //Варіанти відповідей:
    // A) 255
    // B) -1
    // C) Невизначене значення
    // D) Помилка компіляції

    //Правильна відповідь: B) -1

    // Пояснення:
    // Тип char у C може бути signed або unsigned.
    // Значення 255 не входить у signed char (-128 до 127), тому інтерпретується як -1.
    // У багатьох компіляторах за замовчуванням char є signed.
    // Тому завжди потрібно уточнювати signed/unsigned при використанні типу char, щоб уникнути несподіваних результатів.
    
    //Перевірка правильності тесту
    char test_char = 255;
    printf("Test output (char = 255): %d\n", test_char);

    // Завдання: обчислити середнє значення трьох float-чисел і вивести його як int
    float x, y, z;
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    float average = (x + y + z) / 3;

    // Без округлення — просто приведення до int
    int result_trunc = average;

    // З округленням
    int result_round = (int)round(average);

    printf("Average (float): %.2f\n", average);
    printf("Average as int (truncated): %d\n", result_trunc);
    printf("Average as int (rounded): %d\n", result_round);

    // Пояснення:
    // При присвоєнні float -> int дробова частина відсікається (0.9 → 0).
    // Мова С не округлює автоматично при приведенні до int.
    // Для округлення до найближчого цілого потрібно використовувати round() з math.h
    
    return 0;
}
