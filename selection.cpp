#include<iostream>
using namespace std;

void selection(int arr[]) {
    for(int i=0;i<10;i++) {
        int min=i;
        for(int j=i+1;j<10;j++) {
            if(arr[min]>arr[j]) {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    selection(arr);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    return 0;
}