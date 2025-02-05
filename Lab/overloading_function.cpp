#include <iostream>
int add(int a ,int b){
std::cout<<"initial functioon\n";
	return a+b;
}
float add(float a, int b){
	std::cout<<"function OverLoading\n";
	return a+b;
}
int mul(int a, int b=2){
	std::cout<<"Default Value Function (Defalut value of b is 2)\n";
	return a*b;
}
inline int inline_add(int a, int b){
		std::cout<<"Inline Function\n";
		return a+b;
	}
int main(){
	int a,b;
	std::cout<<"Enter two Numbers:";
	std::cin>>a>>b;
	std::cout<<"Answer: "<< add(a,b)<<"\n";
	std::cout<<"Answer: "<< add((float)a,b)<<"\n";
	std::cout<<"Answer: "<< inline_add(a,b)<<"\n";
	std::cout<<"Answer: "<< mul(a)<<"\n";
	return 0;
}
