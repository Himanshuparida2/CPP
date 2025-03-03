#include <iostream>
using namespace std;
class sample{
    int a;
    public:
        void indata(int a);
        void showdata();
        friend sample update(sample s);
};
void sample::indata(int a){
    this->a=a;
}
void sample::showdata(){
    cout<<"a = "<<a<<endl;
}
sample update(sample s){
    sample temp;
    temp.a=s.a;
    return temp;
}
int main(){
    sample S1;
    cout<<"Before Update"<<endl;
    S1.indata(10);
    S1.showdata();
    sample S2;
    S2.indata(20);
    S1=update(S2);
    cout<<"After Update"<<endl;
    S1.showdata();
    return 0;
}