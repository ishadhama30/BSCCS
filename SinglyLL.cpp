-// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
    class node{
        public:
            int data;
            node *next;
    };
    class SinglyLL{
            node *first,*last,*temp,*temp1;
    public:
        SinglyLL(){
            first=last=temp=NULL;
        }
        void add_to_tail();
        void add_to_head();
        void add_in_bet();
        void display();
    };
    void SinglyLL::add_to_head()
    {
        int x;
        temp=new node;
        cout<<"Enter the data of this node : ";
        cin>>x;
        temp->data=x;
        temp->next=NULL;
        if(first==NULL){
            first=last=temp;
        }
        else{
            temp->next=first;
            first=temp;
        }
    }
    void SinglyLL::add_to_tail()
    {
        int x;
        temp=new node;
        cout<<"Enter the data of this node : ";
        cin>>x;
        temp->data=x;
        temp->next=NULL;
        if(first==NULL){
            first=last=temp;
        }
        else{
            last->next=temp;
            last=temp;
        }
    }
    
    void SinglyLL::add_in_bet()
    {
        int x;
        int key;
        temp1=first;
        temp=new node;
        cout<<"Enter the data of this node : ";
        cin>>x;
        temp->data=x;
        temp->next=NULL;
        cout<<"Enter the data of the node which is before the inserting node :  ";
        cin>>key;
        if(first==NULL){
            first=last=temp;
        }
        else{
        while(temp1->data!=key){
            temp1=temp1->next;
        }
        
            temp->next=temp1->next;
            temp1->next=temp;
        }
    }
    
    void SinglyLL::display()
    {
        temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data;
            cout<<"-->";
            temp=temp->next;
        }
    }

int main(){
    int n;
    char ch;
    SinglyLL *ob=new SinglyLL();
    while(true){
        cout<<"\n1. add to head";
        cout<<"\n2. add to tail";
        cout<<"\n3. add in between";
        cout<<"\n4. display";
        cout<<"\n5. exit\n";
        cout<<"Enter your choice : ";
        cin>>n;
        switch(n){
            case 1:
            ob->add_to_head();
            break;
            case 2:
            ob->add_to_tail();
            break;
            case 3:
            ob->add_in_bet();
            break;
            case 4:
            ob->display();
            break;
            case 5:
            return 0;
        }
    }
}
