#include <iostream>
using namespace std;
class matrix{
    int m[3][3];
    public:
        void setMatrix(matrix);
        friend matrix transpose(matrix);
        void print(matrix);
};
matrix transpose(matrix m){
    matrix m1;
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m1.m[i][j]=m.m[j][i];
        }
    }
    return m1;
};
void matrix::setMatrix(matrix m){
    int i,j;
    cout<<"Enter Elements";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>m.m[i][j];
        }
    }
};
void matrix::print(matrix M){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<M.m[i][j]<<endl;
        }
    }
};
int main(){
    matrix M;
    M.setMatrix(M);
    transpose(M);
    M.print(M);
    return 0;
}