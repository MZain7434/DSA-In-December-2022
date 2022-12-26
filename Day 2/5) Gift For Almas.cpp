#include <bits/stdc++.h>
using namespace std;

#define N 500
// Function for do transpose of matrix

void transpose(int arr[N][N],int n){
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            swap(arr[i][j], arr[j][i]);
}
// elements of column one by one for finding left rotation of matrix by 90 degree

void reverseColumns(int arr[N][N],int n){
    for (int i = 0; i < n; i++)
        for (int j = 0, k = n - 1; j < k; j++, k--)
            swap(arr[j][i], arr[k][i]);
}
//print array

void printArr(int arr[N][N],int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rotate90Clockwise(int a[N][N],int n){
// Traverse each cycle
    for (int i = 0; i < n / 2; i++){
        for (int j = i; j < n - i - 1; j++)
        {
            // Swap elements of each cycle
            // in clockwise direction
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}

int main(){
    int n;cin>>n;
    int arr[N][N];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    string s;cin>>s;
    int count=0;
    for (auto i : s){
        if (i == 'R') count++;
        else count--;
    }
    if(count>0)
    {
        while(count--)
        rotate90Clockwise(arr,n);
    }
    else{
        while(count++){
            transpose(arr,n);
            reverseColumns(arr,n);
        }
    }
    printArr(arr,n);
    return 0;
}