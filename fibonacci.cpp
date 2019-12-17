#include <iostream>

int main() {

    unsigned long long int a, b, c;
    int i = 0;
    a = 0;
    b = 1;
    c = 0;
    while(c >= a) {
        std::cout << c << std::endl;
        a = b;
        b = c;
        c = a + b;
        i++;
    }
    return 0;
}
