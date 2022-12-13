#include <iostream>
using namespace std;
class node{
        public:
            int data;
            node *next;
    };
 class SLL{
            node *first,*last,*temp,*temp1;
    public:
        SLL(){
            first=last=temp=NULL;
        }
        void add_to_tail();
        void add_to_head();
        void add_in_bet(); 
        void delete_head();
        void delete_tail();
        void delete_in_bet();
        node* search();
        void concat();
        void display();
    };
    void SLL::add_to_head()
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
    void SLL::add_to_tail()
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
    
    void SLL::add_in_bet()
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
    void SLL:: delete_head(){
        if(first==NULL){
             cout<<"Error"<<endl;
        }
        else if(first == last){
        delete first;
        last=NULL;
        }
        else{
        temp=first;
        first=temp->next;
        delete temp;
        }
    }
    void SLL:: delete_tail(){
        if(first==NULL){
             cout<<"Error"<<endl;
        }
        else if(first == last){
            delete first;
            last=NULL;
        }
        else{
            temp=first;
            while(temp->next!=last){
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;
            last=temp;
        }
    }
    void SLL::delete_in_bet(){
        int key;
            cout<<"Enter the data which u want to delete :";
            cin>>key;
            temp1=first;
            temp=first->next;
            while(temp->data!=key){
                temp=temp->next;
                temp1=temp1->next;
            }
            temp1->next=temp->next;
            delete temp;
        }
  node* SLL::search(){
        int key;
        cout<<"ENter the element to search in the list";
        cin>>key;
        temp=first;
        while(temp!=NULL){
            if (temp->data == key)
            {
                cout<<"element found at index: ";
                return temp ;
            }
            
            temp=temp->next;
        }
        cout<<"Element not found ";
        return 0 ;

    }    
    void SLL::display(){
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
    SLL *ob=new SLL();
    while(true){
        cout<<"\n1. add to head";
        cout<<"\n2. add to tail";
        cout<<"\n3. add in between";
        cout<<"\n4. delete head";
        cout<<"\n5. delete last";
        cout<<"\n6. delete from between";
        cout<<"\n7. display";
        cout<<"\n8.search";
        cout<<"\n9.concatenation";
        cout<<"\n10. exit\n";
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
            ob->delete_head();
            break;
            case 5:
            ob->delete_tail();
            break;
            case 6:
            ob->delete_in_bet();
            break;
            case 7:
            ob->display();
            break;
            case 8:
            cout<<ob->search();
            break;
            case 9:
            ob->concat();
            break;
            case 10:
            return 0;
            
        }
    }
    
}
