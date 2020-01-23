#include<iostream>
using namespace std;

int partition(int arr[],int l,int u) {
    int p=arr[l];
    int less[100]={0},more[100]={0},i=0,j=0;
    for(int k=l+1;k<=u;k++) {
        if(arr[k]<=p) {
            less[i]=arr[k];
            i++;
        }
        else {
            more[j]=arr[k];
            j++;
        }
    }
    for(int k=0;k<i;k++)
        arr[k]=less[k];
    arr[i]=p;
    for(int k=0;k<j;k++)
        arr[k+i+1]=more[k];
    return i;
}

void quicksort(int arr[],int l,int u) {
    if(l<u) {
        int m=partition(arr,l,u);
        quicksort(arr,l,m-1);
        quicksort(arr,m+1,u);
    }
}

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    quicksort(arr,0,9);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    return 0;
}