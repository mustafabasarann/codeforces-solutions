#include <stdio.h>

int main(){
    int n,k,result=0;

    scanf("%d %d",&n,&k);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0)
            result++;
    }
    printf("%d\n",result);
    return 0;
}