#include<iostream>
using namespace std;

void insertion(int arr[]) {
    for(int i=1;i<10;i++) {
        for(int j=i;j>0;j--) {
            if(arr[j]<arr[j-1]) {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    insertion(arr);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    return 0;
}