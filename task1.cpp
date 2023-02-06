#include <iostream>

bool lsb_and_msb_are_equal(unsigned int n) {
  return (n & 1) == (n >> (sizeof(int) * 8 - 1) & 1);
}

int main() {
  unsigned int n = 0;
  std::cin >> n;
  if(lsb_and_msb_are_equal(n)) {
    std::cout << "Most significat and least significant bits are equal";    
  }
  else {
    std::cout << "Most significat and least significant bits are not equal"; 
  }
}