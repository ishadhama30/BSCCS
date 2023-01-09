/*
print
1111
 222
  33
   4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=row-1;
        while(space){//print space 
        cout<<" ";
        space=space-1;
        }
        int col=n;
        while(col>=row){ // print digit of triangle
            cout<<row;
            col--;
        }
        cout<<endl;
        row=row+1;
    }
}