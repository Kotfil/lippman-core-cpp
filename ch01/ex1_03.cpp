#include <iostream>
#include "Sales_item.h" // Тот самый файл, который ты скинул

int main() {
    Sales_item item1, item2;
    if (std::cin >> item1 >> item2) {

        std::cout << item1 + item2 << std::endl;
    } else {
        std::cerr << "Данные введены неверно!" << std::endl;
        return -1;
    }
    return 0;
}