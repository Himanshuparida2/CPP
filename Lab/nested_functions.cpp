#include <iostream>
#include <string>
using namespace std;
class binary{
	string s;
	public:
		void read(){
			cout<<"Enter binary number : ";
			cin>>s;
		}
		void check_bin(void){
			int i;
			for(i=0;i<s.length();i++){
				if(s.at(i)!='1' && s.at(i)!='0'){
					cout<<"incorrect Binary Number Format"<<endl;
					exit(0);
				}
			}
		}
		void ones(void){
			check_bin();
			int i;
			for(i=0;i<s.length();i++){
				if(s.at(i)=='1'){
					s.at(i)='0';
				}
				else{
					s.at(i)='1';
				}
			}
		}
		void print(void){
			int i;
			ones();
			cout<<"1's Compliment of the binary : "<<s<<endl;
		}
};
int main(){
			binary b1;
			b1.read();
			b1.print();
			return 0;
		}
