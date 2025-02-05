#include <iostream>
#include <string>
using namespace std;
class Shop{
	int m=10;
	string item_name[10];
	int item_code[10];
	int count;
	public:
		void CNT(void){count=0;}
		void displayItem(void);
		void addItem(void);
		void removeItem(void);
		void getItem(void);
};
int i;
void Shop::displayItem(){
	for(i=0;i<count;i++){
		cout<<item_name[i]<<" "<<item_code[i]<<endl;
	}
}
void Shop::addItem(string s,int ind){
	item_name[count]=s;
	item_code[count]=ind;
}
void Shop::removeItem(int ind){
	for(i=0;i<count;i++){
		if(item_code[i]==ind){
			item_code[i]=0;
			item_name="";
		}
	}
}
void Shop::getItem(int ind){
	for (i=0;i<count;i++){
		if(item_code[i]==ind){
			cout<<item_code[i]<<" "<<item_name[i]<<endl;
		}
	}
}
int main(){
	Shop S1;
	int n;
	do{
		cout<<"-----Menu-----";
		cout<<"1 : ADD ITEM";
		cout<<"2 : GET ITEM";
		cout<<"3 : REMOVE ITEM";
		cout<<"4 : DISPLAY ITEM";
		cout<<"5 : EXIT";
		cout<<"Enter Your Choice : "
		cin>>n;
		switch(n){
			case 1 :
				int j;string name;
				cout<<"Enter ITEM CODE : ";cin>>j;
				cout<<"Enter ITEM NAME : ";cin>>name;
				s1.addItem(name,j);
				break;
			case 2 :
				int j;
				cout<<"Enter ITEM CODE : ";cin>>j;
				s1.getitem(j);
				break;
			case 3:
				int j;
				cout<<"Enter ITEM CODE : ";cin>>j;
				s1.removeItem(j);
				break;
			case 4:
				s1.displayItem();
				break;
			default:
				cout<<"Some Error Occured";
		}while(n!=5);
}
