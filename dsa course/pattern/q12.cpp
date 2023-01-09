/* print

A 
B C
C D E 
D E F G

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of rows : ";
    cin>>n;
    /*
    1st method
    int i=1;
    while(i<=n){
        int j=1;
        char val='A'+i-1;
        while(j<=i){
            cout<<val;
            val=val+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}
    