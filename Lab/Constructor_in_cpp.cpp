#include <iostream>
using namespace std;
class integer{
    int a,b;
    public:
        integer(int a,int b);
        void display();
};
integer::integer(int a,int b){
    this->a=a;
    this->b=b;
}
void integer::display(){
    cout<<"a = "<<a<<" b = "<<b<<endl;
}
int main(){
    integer i=integer(10,20);
    cout<<"Object 1"<<endl;
    i.display();
    integer j= integer(30,40);
    cout<<"Object 2"<<endl;
    j.display();
    return 0;
}