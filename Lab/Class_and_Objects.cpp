#include <iostream>
using namespace std;
class Student{
	char name[50];
	int age;
	int roll_no;
	int marks;
	public:
	void getData(){
		cout<<"Enter Age : "<<endl;
		cin>>age;
		cout<<"Enter Name : "<<endl;
		cin>>name;
		cout<<"Enter Marks : "<<endl;
		cin>>marks;
	}
	void display();
};
void Student::display(){
	cout<<"\nDetails: \nName : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Marks : "<<marks<<endl; 
}
int main(){
	Student s1;
	s1.getData();
	s1.display();
}
