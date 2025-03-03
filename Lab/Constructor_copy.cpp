#include <iostream>
using namespace std;
class code{
    int a;
    public:
        code();
        code(int i){a=i;}
        code(code &x){
            a=x.a;
        }
        void display(){
            cout<<a<<endl;
        }
};
code::code(){
    a=0;
}
int main(){
    code c1(10);
    c1.display();
    code c2;
    c2=code(c1);
    c2.display();
    return 0;
}