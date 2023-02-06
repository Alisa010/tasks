/*Իրականացնել հաշվիչ ծրագիր, որն օգտագործում է std::map և ֆունկցիայի ցուցիչներ։ Ֆունկցիայի ցուցիչները հղվում են համապատասխան թվաբանական գործողությունը կատարող ֆունկցիայի վրա։*/
#include <iostream>
#include <map>

double sum(double a, double b) {
  return a + b;
}
double sub(double a, double b) {
  return a - b;
}
double mul(double a, double b) {
  return a * b;
}
double div(double a, double b) {
  return a / b;
}


int main() {
  double (*function)(double, double);
  char op;
  int num1 = 0;
  int num2 = 0;
  std::cout << "Please input first num " << std::endl;
  std::cin >> num1;
  std::cout << "Please input operation " << std::endl;
  std::cin >> op;
  std::cout << "Please input second num " << std::endl;
  std::cin >> num2;
  
  switch(op) {
    case '+':
      function = sum;
      break;
    case '-':
      function = sub;
      break;
    case '*':
      function = mul;
      break;
    case '/':
      function = div;
      break;
    
  }

  double res = function(num1, num2);
  std::map<char, double> m;
  m[op] = res;
  auto it = m.begin();
  std::cout << it -> second;
  return 0;
}