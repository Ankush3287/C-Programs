#include<stdio.h>
int secondLargest(int arr[], int n){
    int res=-1,largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1||arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[5];
    int n=5;
    for(int i=0;i<5;i++){
        scanf("%d ",&arr[i]);
    }
    int res=secondLargest( arr, n);
    if(res!=-1)
        printf("%d",arr[res]);
    else
        printf("-1");
    return 0;
}