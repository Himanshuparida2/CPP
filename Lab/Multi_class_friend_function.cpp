#include <iostream>
using namespace std;
class ABC;
class XYZ{
    int a;
    public:
        void setValue(int x){a=x;}
        friend int max(ABC,XYZ);
};
class ABC{
    int a;
    public:
    void setValue(int x){a=x;}
    friend int max(ABC,XYZ);
};
int max(ABC a,XYZ b){
    if(a.a>b.a){
        return a.a;
    }
    else{
        return b.a;
    }
};
int main(){
    ABC a;
    XYZ b;
    a.setValue(5);
    b.setValue(10);
    cout<<"The Max Value is "<<max(a,b)<<endl;
    return 0;
}