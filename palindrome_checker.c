#include <stdio.h>
int main(){
    printf("enter the number:");
    int n;
    scanf("%d",&n);
    int reverse = 0;

    while(n>0){
        int digit = n%10;
        reverse = reverse*10+digit;
        n = n/10;
        if(reverse == n){
            printf("\nIT IS A PALINDROME");
            break;

        }else if(reverse!= n){
            printf("\nNOT A PLAINDROME");
            break;
            
        }
    }


}