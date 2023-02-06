/*Իրականացնել to_upper_case(string) ֆունկցիա, որը ստանում է տող (std::string), ձևափոխում և վերադարձնում է նույն տողը, որտեղ բոլոր տառերը մեծատառ են։*/
#include <iostream>
#include <string>

std::string to_upper_case(std::string& str){
  for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32;
    }
  }
  return str;
}


int main() {
  std::string str;
  std::getline(std::cin, str);
  to_upper_case(str);
  std::cout << str;
  return 0;
}