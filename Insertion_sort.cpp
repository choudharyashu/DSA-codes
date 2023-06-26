#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j;
    int arr[]={5,4,10,1,6,2};
    for(i=1;i<6;i++)
    {
        int temp= arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
                arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted array is:\n";
    for(i=0;i<6;i++)
       cout<<arr[i]<<" ";
    getch();
    return 0;
}