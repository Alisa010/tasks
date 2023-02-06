/*Իրականացնել բինար որոնման ալգորիթմը զանգվածի համար` իտերատիվ և ռեկուրսիվ տարբերակներով։*/
#include <iostream>

int binary_search(int arr[], int value, int left, int right){
  while(left <= right){
    int mid = (left + right) / 2;
    if(arr[mid] == value){
      return mid;
    }
    else if(arr[mid] < value){
      left = mid + 1;
    }
    else{
      right = mid - 1;
    }
  }
  return -1;;
}

int main() {
  const int n = 7;
  int arr[n];
  std::cout << "Please input elements of array " << std::endl;
  for(int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  int num = 0;
  std::cout << "Please input value you are searching" << std::endl;
  std::cin >> num;
  int search = binary_search(arr, num, 0, n - 1);
  if(search != -1) {
     std::cout << "The index of found element is " << search << std::endl;
  }
  else{
    std::cout << "The element is not found " << std::endl; 
  }
  
}