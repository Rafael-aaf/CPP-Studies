#include <iostream>

template <typename T, typename U>
auto min(T x, U y){
	return (x < y) ? x : y; //Ternary Operator
}

template <typename T, typename U>
auto max(T a, U b){
	return(a > b) ? a : b;
}

int main(){

	std::cout << "Minimun: " << min(8, 2.6) << "\n";
	std::cout << "Maximun: "<<max(8, 2.6) << "\n";
	
	return 0;
}