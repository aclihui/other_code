#include<iostream>
using namespace std;
int main()
{
    int total=0;
    int days =0;
    //only write the core code
    for(int i = 0; i <2; i++) 
    {
        switch (i)
        {
            case 1:
                days=31;
                total+=days;
                break;
        
            case 0:
            days=30;
            total+=days;
                break;
        }
        // total+=days;
    }
    cout<<total;


    return 0;
}