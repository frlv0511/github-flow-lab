#include <iostream>
#include <string>

void printMessage(const std::string& greeting) {
    std::cout << greeting << std::endl;
}

int main() {
    // Выводим приветственное сообщение пользователю
    std::string greeting = "Hello";
    printMessage(greeting);
    printMessage("Программа завершена успешно");
    return 0;
}
