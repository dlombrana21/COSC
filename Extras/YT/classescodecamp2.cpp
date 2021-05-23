#include <iostream>

class Student {
    public:
        std::string strName;
        std::string strMajor;
        double dblGpa;
        bool boolisHonorRoll = false;
    Student(std::string strpName, std::string strpMajor, double dblpGPA){
            strName = strpName;
            strMajor = strpMajor;
            dblGpa = dblpGPA;
            if (dblGpa > 3.5) {boolisHonorRoll = true;}
    }
};

int main() {
    Student objStudent1("Jim", "Business", 2.4);
    Student objStudent2("Pam", "Art", 3.6);

    std::cout << objStudent1.boolisHonorRoll << std::endl;
    std::cout << objStudent2.boolisHonorRoll << std::endl;


    return 0;
}