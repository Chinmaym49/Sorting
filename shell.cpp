#include<iostream>
using namespace std;

void shell(int arr[]) {
    int d=10;
    while(int(d/=2)) {
        for(int c=0;c<d;c++) {
            for(int j=c+d;j<10;j+=d) {
                for(int k=j;k>0;k-=d) {
                    if(arr[k]<arr[k-d]) {
                        int temp=arr[k];
                        arr[k]=arr[k-d];
                        arr[k-d]=temp;
                    }
                }
            }
        }
    }
}

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    shell(arr);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    return 0;
}