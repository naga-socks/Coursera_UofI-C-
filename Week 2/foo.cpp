/*
Week 2 Notes on memory Address
29-JAN-2021
Jhonatan Nagasako
*/
#include <iostream>

void foo() {
  int x = 42;
  std::cout << " x in foo (): " << x << std::endl;
  std::cout << "&x in foo (): " << &x << std::endl;
}

int main() {
  int num = 7;

  std::cout << " num in main():  " << num << std::endl;
  std::cout << "&num in main(): " << &num << std::endl;

  foo();

  return 0;
}
