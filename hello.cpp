#include <iostream>
#include <string>
#include <stdexcept>

void printMessage(const std::string& greeting) {
    try {
        std::cout << greeting << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Ошибка вывода: " << e.what() << std::endl;
    }
}

int main() {
    // Выводим приветственное сообщение пользователю
    std::string greeting = "Hello";
    printMessage(greeting);
    printMessage("Программа завершена успешно");
    return 0;
}
