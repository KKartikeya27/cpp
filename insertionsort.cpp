#include<iostream>
using namespace std;
#define N 10

int main()
    {
        int key;
        bool hasmoved=false,notplaced=true;
        int mainarrr[N]={12,46,1,72,31,55,14,7,89,21};   //{12,46,1,72,31}
        for (int i = 1; i < N; i++)
        {
            key=mainarrr[i];
            for (int j = i-1; j>=0; j--)
            {  
                if(key<mainarrr[j])
                    {
                    mainarrr[j+1]=mainarrr[j];
                    hasmoved=true;
                    }
                else
                    {
                        mainarrr[j+1]=key;
                        notplaced=false;
                        break;
                    }
            }
        }
        if (hasmoved&&notplaced)
        {
            mainarrr[0]=key;
        }
        
        for (int k = 0; k < N; k++)
        {
            cout<<mainarrr[k]<<",";
        }
        
        
    }