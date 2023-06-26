#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[]={15,16,6,8,5};               //DECLARING AND INITIALIZING ARRAY
    for(int j=0;j<5;j++)                   //SORTING IN ASCENDING ORDER
    {
        int count = 0;
        for(int i=0;i<4-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                count++;
            }
        }
        if(count==0)
           break;
    }
    cout<<"Sorted array is :\n";
    for(int i=0;i<5;i++)                   //PRINTING SORTED ARRAY
       cout<<arr[i]<<" ";
    getch();
    return 0;
}