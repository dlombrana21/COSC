//fizzbuzz Challenge, write a code that counts from 1 - 100,
//every multiple of 3 is replaced with the word Fizz, every 
//multiple of 5 is replaced with buzz, any multiple of both
//is replaced with FizzBuzz.

//Daniel L || 4/27/21

#include <iostream>

int main() {
for (int intCounter=1; intCounter <=100; intCounter++) {
    if (intCounter % 3 == 0 && intCounter % 5 == 0) std::cout << "FizzBuzz\n";
    else if (intCounter % 3 == 0) std::cout << "Fizz\n";
    else if (intCounter % 5 == 0) std::cout << "Buzz\n";
    else std::cout << intCounter << "\n";
}

//std::cout << "1" << std::endl;
//std::cout << "2" << std::endl;
//std::cout << "Fizz" << std::endl;
//std::cout << "4" << std::endl;
//std::cout << "Buzz" << std::endl;

//etc

return 0;
}