#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int candidate = n + 1;   // input ke baad ka number se start

    while (1) {
        int isPrime = 1;    // assume prime

        for (int i = 2; i * i <= candidate; i++) {
            if (candidate % i == 0) {
                isPrime = 0;   // factor mil gaya
                break;
            }
        }

        if (isPrime) {
            printf("Next prime after %d is %d\n", n, candidate);
            break;   // prime mil gaya → loop khatam
        }

        candidate++;   // warna next number check karo
    }

    return 0;
}