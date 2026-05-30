#include <stdio.h>
#include <stdbool.h>

bool palindrome(int x){
    if(x<0||x%10==0&&x!=0) return false;
    int rev=0;
    while(x>rev){
        rev=rev*10+(x%10);
        x/=10;
    }
        return x==rev||x==rev/10;
}
int main(){
    if (palindrome(-121)){
        printf("true");
    }
    else printf("false");
}
