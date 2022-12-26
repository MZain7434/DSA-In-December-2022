#include<bits/stdc++.h>
using namespace std;
int BubbleSort(int arr[], int n){
    int count=0;
    bool swapped=true;
    while(swapped!=false){
        swapped=false;
        count=count+1;
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                swapped=true;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<BubbleSort(arr,n)<<endl;
    return 0;
}