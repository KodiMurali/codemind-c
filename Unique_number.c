#include <stdio.h>

int main(){
    int x, i, digit;
    static int arr[10];
    scanf("%d", &x);
    while(x>0){
        digit = x%10;
        arr[digit]++;
        x=x/10;
    }
    for(i=0;i<10;i++){
        if(arr[i]>1){
            printf("Not Unique Number");
            break;
        }
    }
    if(i==10){
        printf("Unique Number");
    }
    return 0;
  
 } 