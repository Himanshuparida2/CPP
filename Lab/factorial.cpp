#include <iostream>
int factorial(int n){
	if(n==1)
		return 1;
	return n*factorial(n-1);
}
int main(){
	int n;
	std::cout<<"Enter Number for Factorial: ";
	std::cin>>n;
	std::cout<<"Factorial is "<<factorial(n)<<"\n";
	return 0;
}
