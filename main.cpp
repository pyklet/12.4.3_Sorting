#include <iostream>

int main() {
    float numbers[15];
    float numbersSort[15] = {};
    int count = 0;

    for (int i = 0; i < 15; i++) {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i != j) {
                if (numbers[i] > numbers[j]) count++;
            }
        }
        //equality check
        bool write = false;
        while(!write) {
            if (numbersSort[count] == 0) {
                (numbersSort[count] = numbers[i]);
                write = true;
            }
            else
                count++;
        }
        count = 0;
    }

    for (int i = 0; i < 15; i++) {
        std::cout << numbersSort[i] << "\n";
    }
}