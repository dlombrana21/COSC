#include <iostream>

template<typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
int a = 0;
int b = 0;
char c = '-';
char d = '-';

std::cout << "Please enter a value for A: ";
std::cin >> a;
std::cout << "Please enter a value for B: ";
std::cin >> b;
std::cout << "Please enter a value for C: ";
std::cin >> c;
std::cout << "Please enter a value for D: ";
std::cin >> d;
std::cout << "Commencing Swappage" << std::endl;

Swap(a,b);
Swap(c,d);
std::cout << "New A Value: " << a << "\nNew B Value: " << b << std::endl;
std::cout << "New C Value: " << c << "\nNew D Value: " << d << std::endl;
}