#include <iostream>

// Define name_x_times() below:
void name_x_times(std::string name, int x){
while (x>0){
  std::cout << name << "\n";
  x--;
}
}

int main() {
  
  std::string my_name = "Daniel";
  int some_number = 5; // Change this if you like!

  std::cout << "Hello, what is your name? ";
  std::cin >> my_name;
  std::cout << "\nWhat's your favorite number? ";
  std::cin >> some_number;
  
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);
  
}