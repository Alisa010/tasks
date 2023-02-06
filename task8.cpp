/*Տրված ֆայլում պարունակվում են թվեր։ Իրականացնել ծրագիր, որը հաշվում և վերադարձնում է ֆայլում պարունակվող թվերի գումարը։*/
#include <iostream>
#include <fstream>

int main() {
  std::ifstream file;
  int num;
  file.open("num.txt");
  if(!file) {
    std::cout << "Error! File does not open" << std::endl;
  }
  int sum = 0;
  file >> num;
  while(!file.eof()) {
    sum += num;
    file >> num;
  }
  std::cout << sum << std::endl;
  file.close();
  return 0;
}