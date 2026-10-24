#include <stdio.h>
#include <string.h>

typedef struct{
    char face[3];
    char suit[10];
    int score;
}Card;

int getFaceValue(char f[]){
    if(strcmp(f, "A") == 0) return 1;
    if(strcmp(f, "J") == 0) return 11;
    if(strcmp(f, "Q") == 0) return 12;
    if(strcmp(f, "K") == 0) return 13;
    int val;
    sscanf(f,"%d",&val);
    return val;
}

int getSuitValue(char s[]){
    if (strcmp(s, "Club") == 0) return 1;
    if (strcmp(s, "Diamond") == 0) return 2;
    if (strcmp(s, "Heart") == 0) return 3;
    if (strcmp(s, "Spade") == 0) return 4;
    return 0;
}
int main()
{
    int n,totalSum = 0;
    scanf("%d",&n);
    Card deck[52];
    for(int i = 0;i < n;i++){
        scanf("%s %s",deck[i].face,deck[i].suit);
        int fVal = getFaceValue(deck[i].face);
        int sVal = getSuitValue(deck[i].suit);

        deck[i].score = (fVal * 10) + sVal;
        totalSum += fVal;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (deck[j].score > deck[j + 1].score) {
                Card temp = deck[j];
                deck[j] = deck[j + 1];
                deck[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Deck:\n");
    for (int i = 0; i < n; i++) {
        printf("%s of %s\n", deck[i].face, deck[i].suit);
    }
    printf("Total Value: %d\n", totalSum);
    return 0;
}