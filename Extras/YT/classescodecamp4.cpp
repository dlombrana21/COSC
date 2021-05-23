#include <iostream>

class Chef {
    public:
        void makeChicken() {
            std::cout << "The chef makes chicken." << std::endl;
        }
        void makeSalad (){
            std::cout << "The chef makes salad." << std::endl;
        }
        void makeSpecialDish() {
            std::cout << "The chef makes BBQ ribs." << std::endl;
        }
};
class ItalianChef : public Chef {
    public: 
        void makeSpaggheti() {
            std::cout << "The chef makes spaghetti." << std::endl;
        }
        void makeSpecialDish() {
            std::cout << "The chef makes chicken parm." << std::endl;
        }
};

int main() {

    Chef objChef;
    objChef.makeChicken();

    ItalianChef objItalianChef;
    objItalianChef.makeSpecialDish();
    objItalianChef.makeSpaggheti();

    return 0;
}