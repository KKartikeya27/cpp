#include<iostream>
#include<string>
void swap(int *p)
{
    int temp=p[1];
    p[1]=p[0];
    p[0]=temp;
}
#define N 20
int main()
{
    int mainarr[N]={9,2,6,8,4,1,7,12,14,65,68,4,1,2,33,67,91,95,22,19};
    int key=0;
    for(int j=0;j<N-1;j++)
        {
            for (int i=0;i<N-1-j;i++)
                {
                    if (mainarr[i]>mainarr[i+1])//swap}
                        {
                            swap(&mainarr[i]);
                        }
                }
        }
    for (int j = 0; j < N; j++)
    {
        std::cout<<mainarr[j]<<",";
    }
    
    return 0;
}
