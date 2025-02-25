#include <iostream>
using namespace std;
class secondClass;
class firstClass{
    public:
        int val;
        void setValue(int a){val=a;}
        void printElement();
        friend void Exchange(firstClass &,secondClass &);
};
class secondClass{
    public:
            int val;
        void setValue(int a){val=a;}
        void printElement();
        friend void Exchange(firstClass &, secondClass &);
};
void Exchange(firstClass &a,secondClass &b){
    int temp=a.val;
    a.val=b.val;
    b.val=temp;
}
void firstClass::printElement(){
    cout<<val;
}
void secondClass::printElement(){
    cout<<val;
}
int main(){
    firstClass a;
    secondClass b;
    a.setValue(10);
    b.setValue(20);
    Exchange(a,b);
    a.printElement();
    b.printElement();
    return 0;
}