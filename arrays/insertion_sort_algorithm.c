#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //insertion sort
    
    for(int i=1;i<n;i++){
         int key = arr[i];
        int j=i;
        while(j>0&&arr[j-1]>key){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=key;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
//i/p:5 4 3 2 1
//o/p:1 2 3 4 5
