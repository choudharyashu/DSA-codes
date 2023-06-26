#include <iostream>
#include <conio.h>
using namespace std;
int partition(int arr[],int left, int right, int pivot)          //PARTITION OF ELEMENTS
{
    while(left<=right)
    {
        while (arr[left]<pivot)
        {
            left++;
        }
        while(arr[right]>pivot)
        {
            right--;
        }
        if(left<=right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    return left;
}
void sort(int arr[], int left, int right)                 //QUICK SORTING 
{
    if(left>=right)
        return;
    int pivot = arr[(left+right)/2];
    int index = partition(arr,left,right,pivot);
    sort(arr,left,index-1);
    sort(arr,index,right);
}
int main()
{
    int arr[] = {10,15,1,2,9,16,11};           //DECLARING AND INITIALIZING ARRAY
    sort(arr,0,6);
    for(int  i=0;i<7;i++)
       cout<<arr[i]<<" ";
    
    getch();
    return 0;
}