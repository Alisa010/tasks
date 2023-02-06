/*Իրականացնել ֆունկցիա, որը շրջում է C-ական տողը (char*)։*/
#include <iostream>

int strlen(char* str) {
  int len = 0;
  while(*str != '\0') {
    len++;
    str++;
  }
  return len;
}

char* reverse_string(char* str) {
  for(int i = 0; i < strlen(str) / 2; i++) {
    int tmp = str[i];
    str[i] = str[strlen(str) - i - 1] ;
    str[strlen(str) - i - 1] = tmp;
  }
  return str;
}

int main() {
  char str[15];
  std::cin.getline(str, 15);
  reverse_string(str);
  std::cout << str << std::endl;
  return 0;
}