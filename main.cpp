#include <iostream>
#include <string>
#include "Counter.h"

int main() {
    std::setlocale(LC_ALL, "");

    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;

    Counter counter;
    if (answer == "да" || answer == "Да" || answer == "ДА") {
        int initial;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial;
        counter = Counter(initial);
    }
    else {
        counter = Counter();
    }

    char command;
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == '+') {
            counter.increment();
        }
        else if (command == '-') {
            counter.decrement();
        }
        else if (command == '=') {
            std::cout << counter.getValue() << "\n";
        }
        else if (command == 'x') {
            std::cout << "До свидания!\n";
            break;
        }
        else {
           
        }
    }

    return 0;
}