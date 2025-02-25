#include <iostream>
using namespace std;
class sample{
    int a;
    int b;
    public:
        void setValues(){
            a=20;
            b=35;
        };
        friend float mean(sample s);
};
float mean(sample s){
    return float(s.a+s.b)/2.0;
};
int main(){
    sample s;
    s.setValues();
    cout<<"The Mean is "<<mean(s)<<endl;
    return 0;
}
