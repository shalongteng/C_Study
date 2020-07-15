
#include <stdio.h>
#include <iostream>
using namespace std;
int prime(int  m)
{
    for(int i = 2;i<m;i++)
    {
        if(m%i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n =0;
    int result = prime(13);

    for(int i =2;i<= 100;i++)
    {
        if(prime(i)){
            n++;
            printf("%6d",i);
            if(n%10 == 0){
                printf("\n");
            }
        }
    }
}
