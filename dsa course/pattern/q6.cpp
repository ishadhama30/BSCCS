/* print

A A A
B B B
C C C

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"enter the no.of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch=ch+1;
    }
}