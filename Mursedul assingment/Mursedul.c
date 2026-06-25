#include<stdio.h>
#include "Mursedul.h"

int main(){
    int n;
    printf("The number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    }
     max(arr, n);
     min(arr, n);

     printf("-----\n");
     isOdd(arr, n);

     printf("-----\n");
     isEven(arr, n);

     printf("-----\n");
     isPrime(arr, n);
     printf("-----\n");


     return 0;

}
