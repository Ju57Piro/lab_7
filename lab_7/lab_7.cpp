#include "functions.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "выберите функцию 1-10: ";
    while (true) {
        std::cin >> n;
        std::cout << std::endl;
        switch (n) {
        case 1:
            one();
            break;
        case 2:
            two();
            break;
        case 3:
            three();
            break;
        case 4:
            four();
            break;
        case 5:
            five();
            break;
        case 6:
            six();
            break;
        case 7:
            seven();
            break;
        case 8:
            eight();
            break;
        case 9:
            nine();
            break;
        case 10:
            ten();
            break;
        default:
            std::cout << "выберите функцию 1-10: ";
            break;
        }
        break;
    }
    return 0;
}

