#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;


int main()
{
    // 1. Ввести число, и определить – чётное оно, или нет.

    int num;

    cout << "Enter your number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is an even number\n";
    }
    else
    {
        cout << num << " is an odd number\n";
    }

    //-----------------------------------------------------
    // 2. Ввести три числа и найти наименьшее среди них.

    int a;
    int b;
    int c;

    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    cout << "Enter your third number: ";
    cin >> c;

    int min = a;
    if (b < min)
    {
        min = b;
    }
    else if (c < min)
    {
        min = c;
    }

    cout << "The smallest number: " << min << "\n";

    //-----------------------------------------------------
    // 3. Ввести число, и выяснить - положительное оно, отрицательное, или равно нулю?

    int num;

    cout << "Enter your number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The number is positive\n";
    }
    else if (num < 0)
    {
        cout << "The number is negative\n";
    }
    else
    {
        cout << "The number is zero\n";
    }

    //-----------------------------------------------------
    // 4. Реализовать калькулятор. Вводятся 2 любых вещественных числа в переменные a и b. Необходимо вывести на экран меню с пунктами:
    // 1) a + b
    // 2) a – b
    // 3) a * b
    // 4) a / b
    // 5) a % b
    // При выборе соответствующего пункта меню происходит вывод результата вычисления (должна быть проверка деления на 0!)

    double a;
    double b;
    int choice;

    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    cout << "Menu:\n1) a + b\n2) a - b\n3) a * b\n4) a / b\n5) a % b\nYour choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Result: " << a + b << "\n";
            break;
        case 2:
            cout << "Result: " << a - b << "\n";
            break;
        case 3:
            cout << "Result: " << a * b << "\n";
            break;
        case 4:
            if (b != 0)
            {
                cout << "Result: " << a / b << "\n";
            }
            else
            {
                cout << "You can't divide by zero\n";
            }
            break;
        case 5:
            if (b != 0)
            {
                cout << "Result: " << fmod(a, b) << "\n";
            }
            else
            {
                cout << "You can't divide by zero\n";
            }
            break;
        default:
            cout << "Wrong choice!\n";
    }

    //-----------------------------------------------------
    // 5. Ввести с клавиатуры символ. Определить, чем он является: цифрой, буквой или знаком пунктуации.

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isdigit(ch))
    {
        cout << "Number\n";
    }
    else if (isalpha(ch))
    {
        cout << "Letter\n";
    }
    else if (ispunct(ch))
    {
        cout << "Punctuation mark\n";
    }

    //-----------------------------------------------------
    // 6. Ввести с клавиатуры число и проверить, принадлежит ли это число диапазону от N до M (включительно).

    int num;
    int N;
    int M;

    cout << "Enter your number: ";
    cin >> num;
    cout << "Enter the start of the range: ";
    cin >> N;
    cout << "Enter the end of the range: ";
    cin >> M;

    if (num >= N && num <= M)
    {
        cout << "The number belongs to the range\n";
    }
    else
    {
        cout << "The number doesn't belong to the range\n";
    }

    //-----------------------------------------------------
    // 7. Ввести число и определить кратно ли оно 3, 5, и 7 одновременно.

    int num;

    cout << "Enter your number: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0)
    {
        cout << num << " is a multiple of 3, 5 and 7 at the same time\n";
    }
    else
    {
        cout << num << " isn't a multiple of 3, 5 and 7 at the same time\n";
    }

    //-----------------------------------------------------
    // 8. Найти максимальное значение среди 4 переменных, используя тернарный оператор.

    int a;
    int b;
    int c;
    int d;

    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    cout << "Enter your third number: ";
    cin >> c;
    cout << "Enter your fourth number: ";
    cin >> d;

    int max = (a > b ? a : b) > (c > d ? c : d) ? (a > b ? a : b) : (c > d ? c : d);
    cout << "Maximum value: " << max << "\n";

    //-----------------------------------------------------
    // 9. Написать программу, которая предлагает пользователю ввести номер дня недели, 
    // и в ответ показывает название этого дня (например, 6 – это суббота). Решить с использованием if и switch.

    int day;

    cout << "Enter the number of the day of the week: ";
    cin >> day;

    if (day == 1)
    {
        cout << "Monday\n";
    }
    else if (day == 2)
    {
        cout << "Tuesday\n";
    }
    else if (day == 3)
    {
        cout << "Wednesday\n";
    }
    else if (day == 4)
    {
        cout << "Thursday\n";
    }
    else if (day == 5)
    {
        cout << "Friday\n";
    }
    else if (day == 6)
    {
        cout << "Saturday\n";
    }
    else if (day == 7)
    {
        cout << "Sunday\n";
    }
    else
    {
        cout << "There are only 7 days in a week :(\n";
    }

    //----------------

    int day;

    cout << "Enter the number of the day of the week: ";
    cin >> day;

    switch (day)
    {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "There are only 7 days in a week :(\n";
    }

    //-----------------------------------------------------
    // 10. Написать программу, которая предлагает пользователю выбрать животное из списка (1 – кошка, 2 – собака и тд.), 
    // и в ответ показывает, какие звуки издаёт выбранное животное. В списке должно быть хотя бы 10 животных.

    int choice;

    cout << "Select an animal from the list:\n1) Cat\n2) Dog\n3) Cow\n4) Crow\n5) Pig\n6) Sheep\n7) Duck\n8) Lion\n9) Donkey\n10) Rooster\n";
    cout << "Enter the animal's number: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "The cat says: Meow!\n";
            break;
        case 2:
            cout << "The dog says: Woof!\n";
            break;
        case 3:
            cout << "The cow says: Moo!\n";
            break;
        case 4:
            cout << "The crow says: Caw! Caw!\n";
            break;
        case 5:
            cout << "The pig says: Oink-oink!\n";
            break;
        case 6:
            cout << "The sheep says: Baa!\n";
            break;
        case 7:
            cout << "The duck says: Quack-quack!\n";
            break;
        case 8:
            cout << "The lion says: Roarrrrrrr!\n";
            break;
        case 9:
            cout << "The donkey says: Eee-aaaah!\n";
            break;
        case 10:
            cout << "Rooster says: Cock-a-doodle-do!\n";
            break;
        default:
            cout << "There is no such number :(\n";
    }
}
