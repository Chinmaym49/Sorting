#include<iostream>
using namespace std;

void maxheapify(int arr[]) {
    for(int i=1;i<=arr[0];i++) {
        for(int j=2*i;j<=arr[0];j++) {
            if(arr[j]>arr[i]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void sort(int heap[],int arr[]) {
    int n=heap[0]-1;
    for(int i=heap[0];i>0;i--) {
        arr[n]=heap[1];
        heap[1]=heap[heap[0]];
        n--;
        heap[0]--;
        maxheapify(heap);
    }
}

int main() {
    int heap[]={10,6,2,5,4,1,8,7,3,9,0};
    maxheapify(heap);
    int n=heap[0];
    int sorted_heap[100];
    sort(heap,sorted_heap);
    for(int i=0;i<n;i++)
        cout<<sorted_heap[i]<<" ";
    return 0;
}