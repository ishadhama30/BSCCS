/* print

A 
B C
D E F 
G H I J

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of rows : ";
    cin>>n;
    char count='A';
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}