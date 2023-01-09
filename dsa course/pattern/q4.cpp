/* print

1
2 3
3 4 5 
4 5 6 7

 1st method by using value keyword

#include<iostream>
using namespace std;
int main(){
    int n;
    int value;
    cout<<"enter the no.of rows : ";
    cin>>n;
    for(int row=1;row<=n;row++){
        value=row;
        for(int col=1;col<=row;col++){
            cout<<value<<" ";
            value=value+1;
        }
        cout<<endl;
    }
}
*/

// 2nd method without value

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of rows : ";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<row+col-1<<" ";
        }
        cout<<endl;
    }
}