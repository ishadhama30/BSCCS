#include <iostream>
using namespace std;
class node{
        public:
            int data;
            node *next;
            node *prev;
    };
    class doublyLL{
            node *first,*last,*temp,*temp1;
    public:
        doublyLL(){
            first=last=temp=NULL;
        }
        void add_to_tail();
        void add_to_head();
        void add_in_bet();
        void display();
    };
    void doublyLL::add_to_head()
    {
        int x;
        temp=new node;
        cout<<"Enter the data of this node : ";
        cin>>x;
        temp->data=x;
        temp->next=NULL;
        temp->prev=NULL;
        if(first==NULL){
            first=last=temp;
        }
        else{
            first->prev=temp;
            temp->next=first;
            first=temp;
        }
    }
    void doublyLL::add_to_tail()
    {
        int x;
        temp=new node;
        cout<<"Enter the data of this node : ";
        cin>>x;
        temp->data=x;
        temp->next=NULL;
        temp->prev=NULL;
        if(first==NULL){
            first=last=temp;
        }
        else{
            last->next=temp;
            temp->prev=last;
            last=temp;
        }
    }
    void doublyLL::display()
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
    doublyLL *ob=new doublyLL();
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
            // case 3:
            // ob->add_in_bet();
            // break;
            case 4:
            ob->display();
            break;
            case 5:
            return 0;
        }
    }
}
