#include <iostream>
#include <vector>
#include <string>

int main (){
    std::vector<std::string> vtrNames;
    std::string strName = "0";

    // std::cout << "Size: " << vtrNames.size() << std::endl;
    // vtrNames.push_back("Daniel"); // Adding to vector
    // vtrNames.push_back("Kyle");
    // vtrNames.push_back("Lee");
    // vtrNames.push_back("Harold");

do {
    std::cout << "Please enter a name: ";
    std::cin >> strName;
    if(strName != "0") {
        vtrNames.push_back(strName);
        std::cout << "Size: " << vtrNames.size() << std::endl;
    }
}while (strName !="0");
    

    // std::cout << "Size: " << vtrNames.size() << std::endl;
    //Going forward you should use .at instead of []. .at() will catch and be more forgiving for going out of bounds of a vector, it won't crash.
    for (int intCounter = 0; intCounter < vtrNames.size(); intCounter++) {
        std::cout << vtrNames[intCounter] << std::endl;
    }




    return 0;
}