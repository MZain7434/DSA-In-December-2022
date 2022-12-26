#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int a,int b){
    return (a>b) ? b : a;
}
int main() 
{
    int n;
    scanf("%d",&n);
    int len=2*n-1,min;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            min = (i>j) ? j:i;
            min = (min<len-i) ? min:len-i-1;
            min = (min<len-j-1) ? min:len-j-1;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}
