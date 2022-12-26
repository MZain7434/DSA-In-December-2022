#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
void printPat(int n)
{
    for(int a=0;a<n;a++){
        for(int i=n;i>0;i--){
            for(int j=n-a;j>0;j--){
                cout<<i<<" ";
            }
        }
        cout<<"$";
    }
    
}