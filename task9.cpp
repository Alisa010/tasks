/*Տրված ֆայլում պարունակվում է տեքստ։ Իրականացնել ծրագիր, որը ֆայլի մեջ պարունակվող տեքստի բոլոր բառերի առաջին տառերը դարձնում է մեծատառ և ձևափոխված ամբողջ տեքստը պահպանում մեկ այլ ֆայլում։*/
#include <iostream>
#include <fstream>

int main() {
  std::ifstream file;
  std::ofstream result;
  std::string word;
  file.open("Txt.txt");
  if(!file) {
    std::cout << "Error! File does not open" << std::endl;
  }
  result.open("res.txt");
  file >> word;
  while(!file.eof()) {
    word[0] -= 32;
    result << word << " ";
    file >> word;
  }
  file.close();
  result.close();
  return 0;
}