#include <iostream>
#include <unordered_map>
int main() {
	int n;
	std::cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	std::unordered_map<int, int> m;
	for(int i = 0; i < n; i++) {
		m[arr[i]]++;  
	}
	for(auto it = m.begin(); it != m.end(); it++) {
	std::cout << "The count of " << it -> first << " in array is " <<  it -> second << std::endl;
	}
}
