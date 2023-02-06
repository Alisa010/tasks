#include <iostream>

int main() {
	int n = 0;
	int count = 0;
	std::cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	for(int i = 1; i < n; i++) {
		if(arr[i] % i == 0){
			count++;
		}	
	}
	std::cout << count << std::endl;

}
