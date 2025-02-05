#include <iostream>
using namespace std;
int main(){
	int n,m,i,j;
	cout<<"Enter Row and Column: ";
	cin>>n>>m;
	int a[n][m];
	cout<<"Enter The values of the array:";
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<"The Value of a["<<i<<"]["<<j<<"] : "<<a[i][j]<<endl;
		}
	}
	
	return 0;
}
