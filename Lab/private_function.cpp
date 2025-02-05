#include <iostream>
using namespace std;
class Sample{
	int m;
	void read(void);
	public:
		void update(void);
		void write(void);
};
void Sample::read(){
	cout<<"Number is "<<m<<endl;
}
void Sample::write(){
	cout<<"Enter a Number : ";
	cin>>m;
	read();
}
void Sample::update(){
	cout<<"Enter a Number : ";
	cin>>m;
	read();
}
int main(){
	Sample s1;
	s1.write();
	s1.update();
	return 0;	
}
