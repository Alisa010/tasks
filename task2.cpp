/*Իրականացնել ֆունկցիա, որը տպում է էկրանին unsigned int արգումենտի 1 և 0 բիթերի քանակները։*/

#include <iostream>

void print_counts_of_bits(unsigned int n) {
   int count_of_ones = 0;
   int count_of_zeros = 0;
   for(int i = 0; i < sizeof(int) * 8; i++) {
     if((n >> i) & 1){
       count_of_ones++;
     }
     else{
       count_of_zeros++;
     }
   }
   std::cout << "Count of ones is " << count_of_ones << std::endl; 
   std::cout << "Count of zeros is " << count_of_zeros << std::endl;
   return;
}

int main() {
  unsigned int n = 0;
  std::cin >> n;
  print_counts_of_bits(n);
  return 0;
}