#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[]={3,5,1,9,2};       //DECLARING AND INITIALIZING ARRAY
    for(int j=0;j<4;j++)         //SORTING IN ASCENDING ORDER
    {
        int min =j;
        for(int i=j+1;i<5;i++)
        {   
            if(arr[i]<arr[min])
            {
                min=i;
            }
        }
        if(min!=j)
            swap(arr[j],arr[min]);
    }
    cout<<"sorted array is:\n";
    for(int i=0;i<5;i++)           //PRINTING SORTED ARRAY
        cout<<arr[i]<<" ";
    getch();
    return 0;
}