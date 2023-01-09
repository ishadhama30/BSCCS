/* print

A A A
B B B
C C C

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            char ch='A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}