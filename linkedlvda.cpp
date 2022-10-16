#include<iostream>
using namespace std;
struct linkedIn{
    int data;
    linkedIn* pnext;
};
int main()
    {
        linkedIn* A;
        A=new linkedIn;
        A->data=6;
        // A->pnext=new linkedIn;
        // A->pnext->data=5;
        // A->pnext->pnext=new linkedIn;
        // A->pnext->pnext->data=1;
        // A->pnext->pnext->pnext=new linkedIn;
        // A->pnext->pnext->pnext->data=3;
        // A->pnext->pnext->pnext->pnext=0;
        linkedIn* temp;
        temp->data=5;
        A->pnext=temp;
        temp->pnext=NULL;


    
        return 0;
    }