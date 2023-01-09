#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter total no. of row :";
    cin>>n;
    int row=1;
    while(row<=n){
        //print 1st triangle
        int i=n;
        int count=1;
        while(i<=row){
            cout<<count;
            count=count+1;
            i=i+1;
        }
        //print star in 2nd triangle
        int j=1;
        while(j<row){
            cout<<"*";
            j=j+1;
        }
        row=row+1;
        cout<<endl;
    }
}