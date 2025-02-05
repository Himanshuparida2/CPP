#include <iostream>
using namespace std;
class Array{
	int arr[10];
	public:
		void write_arr(void);
		void sum_arr(void);
		void print_arr(void);
		void largest_val(void);
};
void Array::write_arr(){
	int i;
	cout<<"Enter Element of the Array : ";
	for(i=0;i<10;i++){
		cin>>arr[i];
	}
}
void Array::sum_arr(){
		int i,sum=0;
		for(i=0;i<10;i++){
			sum+=arr[i];
		}
		cout<<"The Sum of All elements of the Array : "<<sum<<endl;
	}
void Array::largest_val(){
		int i,larg=arr[0];
		for(i=0;i<10;i++){
			if(arr[i]>larg){
				larg=arr[i];
			}
		}
		cout<<"Largest Value : "<<larg<<endl;
	}
void Array::print_arr(){
		int i;
		cout<<"Value of Array : \n";
		for(i=0;i<10;i++){
			cout<<arr[i]<<endl;
		}
}
int main(){
	Array A1;
	A1.write_arr();
	A1.print_arr();
	A1.sum_arr();
	A1.largest_val();
	return 0;
}	

