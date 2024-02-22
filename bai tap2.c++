#include <iostream>

int main() {
    int n;
    std::cout << "Nhap so nguyen duong n: ";
    std::cin >> n;

    int tong = 0;
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }

    std::cout << "Tong cac chu so cua so nguyen n la: " << tong << std::endl;

    return 0;
}