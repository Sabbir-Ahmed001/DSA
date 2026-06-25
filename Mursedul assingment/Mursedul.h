void isOdd(int arr[], int n) {
    printf("\nOdd check of array elements:\n");

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            printf("%d is Odd\n", arr[i]);
        else
            printf("%d is Not Odd\n", arr[i]);
    }
}

void isEven(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d is Even\n", arr[i]);
        } else {
            printf("%d is Not Even\n", arr[i]);
        }
    }

}

void isPrime(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        int num = arr[i];
        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
            printf("%d is Prime\n", num);
        else
            printf("%d is Not Prime\n", num);
    }

}

//
void max(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
}
void min(int arr[], int n){
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum element is: %d\n", min);
}


