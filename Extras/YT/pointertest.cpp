#include <iostream>

int main() {
int *ptr;
int intArray[5] = {2, 4, 6, 8};
*ptr = intArray [0];

for (int intCounter = 0; intCounter < sizeof(intArray); intCounter++) {
    std::cout << intArray[*ptr] << std::endl;
}

    return 0;
}