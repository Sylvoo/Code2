#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("content.txt");
    if (!file.is_open()) {
        std::cerr << "Nie mozna otworzyc pliku!" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
    return 0;
}
