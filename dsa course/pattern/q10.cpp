/* print

A B C
A B C
A B C

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of rows : ";
    cin>>n;
    char count='A';
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}