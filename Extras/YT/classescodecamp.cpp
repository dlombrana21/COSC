//https://youtu.be/vLnPwxZdW4Y?t=11777
//Daniel L following along with the above link

#include <iostream>

class Book {
    public:
        std::string strTitle;
        std::string strAuthor;
        int intPages;
        Book() {
            strTitle = "Defaul Title";
            strAuthor = "Default Author";
            intPages = 0;
        }
        Book(std::string pTitle, std::string pAuthor, int pPages){
            strTitle = pTitle;
            strAuthor = pAuthor;
            intPages = pPages;
        }

};

int main() {

    Book objBook1("Harry Potter", "JK Rowling", 500);
    
    // objBook1.strTitle = "Harry Potter";              added constructor, no longer need this
    // objBook1.strAuthor = "JK Rowling";
    // objBook1.intPages = 500;
   
   std::cout << objBook1.strTitle << ", written by " <<  objBook1.strAuthor << " is " << objBook1.intPages << " pages long." << std::endl;
   
   Book objBook2("Lord of the Rings", "Tolkein", 700);

    // objBook2.strTitle = "Lord of the Rings";         added constructor, no longer need this 
    // objBook2.strAuthor = "Tolkien";
    // objBook2.intPages = 700;
   
   std::cout << objBook2.strTitle << ", written by " <<  objBook2.strAuthor << " is " << objBook2.intPages << " pages long." << std::endl;

    Book objBook3;
    std::cout << objBook3.strTitle << ", written by " <<  objBook3.strAuthor << " is " << objBook3.intPages << " pages long." << std::endl;
    return 0;
}