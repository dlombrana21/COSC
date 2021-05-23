#include <iostream>



int recursive_sum(int intpFirstNum, int intpSecondNum) {
    if (intpFirstNum == intpSecondNum) return intpFirstNum;
    return intpFirstNum + recursive_sum(intpFirstNum+1, intpSecondNum);
}


int main() {
    int intFirstNum = 0;
    int intSecondNum = 0;
    int intTempSwap = 0;
    int intSum = 0;
    std::cout << "Please enter a beginning number: ";
    std::cin >> intFirstNum;
    std::cout << "Please enter a second number: ";
    std::cin >> intSecondNum;

    if (intFirstNum > intSecondNum) {
        intTempSwap = intFirstNum;
        intFirstNum = intSecondNum;
        intSecondNum = intTempSwap;
    }

    // for (int intCounter = intFirstNum; intCounter <= intSecondNum; intCounter++){
    //     intSum += intCounter;
    // }

    std::cout << "I will sum the numbers between the two numbers." << std::endl;
    std::cout << "Sum: " << recursive_sum(intFirstNum, intSecondNum);
    return 0;
}