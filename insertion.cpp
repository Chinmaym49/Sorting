#include<iostream>
using namespace std;

void insertion(int arr[]) {
    for(int i=1;i<10;i++) {
        int x=arr[i];
        for(int j=i-1;j>0;j--) {
            if(x<arr[j]) 
                arr[j+1]=arr[j];
            else {
                arr[j+1]=x;
                break;
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
