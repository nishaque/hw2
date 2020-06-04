#include <iostream>

int main() {
  std::string name;
  std::cin>>name;
  std::cout << "Hello, World from " <<name<<std::endl;
  std::cin>>name;//lire un nom
  std::cout << "Hello, World from " <<name<<std::endl;//écrire un message
  return 0;
}
