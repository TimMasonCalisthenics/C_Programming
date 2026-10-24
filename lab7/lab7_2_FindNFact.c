#include <stdio.h>

long int FindNFact(){
    long int nfact,n,i;
    printf("Enter Value of N: ");
    scanf("%ld",&n);

    printf("\nEnter Value of n: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++) {
        nfact = nfact * i;
    }

    return nfact;
}

int main(){
    long int result;

    result = FindNFact();

    printf("n! = %ld\n", result);
    return 0;
}