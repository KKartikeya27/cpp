#include<iostream>
#include<cstdlib>
using namespace std;
using namespace std::chrono;
#define M 100

int main()
    {
        int key;
        bool toinsert=false;
        int rando[M];
        for (int i = 0; i < M; i++)
        {
            rando[i]=rand()%1000;
            cout<<rando[i]<<",";
        }
        cout<<"\n**********************SORTED*************************\n";
        auto start = high_resolution_clock::now();
        for (int i =1 ; i < M; i++)
        {
            key=rando[i];
            int j=i-1;
            while(key<rando[j]&&j>=-1)
                {
                    rando[j+1]=rando[j];
                    j--;
                }
            rando[j+1]=key;
        }
        
    for (int k = 0; k < M; k++)
        {
            cout<<rando[k]<<",";
        }

        return 0;
    }

//moral is to use while loop when traversing back in an array