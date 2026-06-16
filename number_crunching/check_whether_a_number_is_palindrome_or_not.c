
#include <stdio.h>

int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==temp){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

    return 0;
}
