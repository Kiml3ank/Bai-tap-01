#include <iostream>

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Nhap so nguyen duong n: ";
    std::cin >> n;

    std::cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    return 0;
}