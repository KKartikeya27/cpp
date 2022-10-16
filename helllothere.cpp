#include<iostream>
using namespace std;
class Node
    {
        public:
        int data;
        Node* next;
        void Printchain()
            {
                cout<<data<<endl;
                next->Printchain();
            }

    };

Node* Head=0;
void Insert(int n)
    {
        Node* traverse = Head;
        while(traverse->next!=0)
            {
                traverse=traverse->next;
            }
        
        Node* temp= new Node;
        temp->data=n;
        temp->next=NULL;
        traverse->next=temp;

    }

int main()
    {
        // temp= new Node;
        // temp->data=4;
        // Head->next=temp;
        // Head->next->next=0;
        Node* temp= new Node;
        temp->data=2;
        Head=temp;
        temp->next=NULL;
        cout<<"User how many links do you want? : ";
        int nl,val;
        cin>>nl;
        for (int i = 0; i < nl; i++)
        {
            cin>>val;
            Insert(val);
            
        }
        Head->Printchain();
        


        return 0;

    }