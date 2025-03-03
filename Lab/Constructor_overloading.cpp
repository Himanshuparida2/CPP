#include <iostream>
using namespace std;
class ClassA{
    int a,b;
    public:
        ClassA(int a, int b){
            this->a=a;
            this->b=b;
        }
        ClassA(int a){
            this->a=a;
            this->b=10;
        }
        ClassA(){
            this->a=1;
            this->b=2;
        }
        void display();
};
void ClassA::display(){
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main(){
    ClassA a=ClassA(100,200);
    a.display();
    ClassA b=ClassA(100);
    b.display();
    ClassA c=ClassA();
    c.display();
    return 0;
}