#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int u) {
    int i=l,j=m+1,k=0;
    int temp[100]={0};
    while(i<=m && j<=u) {
        if(arr[i]>arr[j]) {
            temp[k]=arr[j];
            j++;
            k++;
        }
        else {
            temp[k]=arr[i];
            i++;
            k++;
        }
    }
    while(i<=m) {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=u) {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=l;i<=u;i++)
        arr[i]=temp[i-l];
}

void mergesort(int arr[],int l,int u) {
    if(l<u) {
        int m=int((l+u)/2);
        mergesort(arr,l,m);
        mergesort(arr,m+1,u);
        merge(arr,l,m,u);
    }
}

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    mergesort(arr,0,9);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    return 0;
}