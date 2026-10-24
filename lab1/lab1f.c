#include <stdio.h>

int main(){

    float distance_km, food_ton, temp_c;
    printf("Enter distance(KM): ");
    scanf("%f",&distance_km);

    printf("Enter food ton: ");
    scanf("%f",&food_ton);

    printf("Enter temp(c): ");
    scanf("%f",&temp_c);

    long long distance_m = distance_km * 1000;
    long long food_g = food_ton * 1000000;
    int temp_f = (temp_c * 9 / 5) + 32; 


    printf("+--------------------------------+-----------------------+-----------------------+\n");
    printf("|      Conversion                |        Input          |         Output        |\n");
    printf("+--------------------------------+-----------------------+-----------------------+\n");
    printf("|KM to Meters                    | %6.2f km             |%11lld m          |\n",distance_km,distance_m);
    printf("|Ton to grams                    | %6.2f t              |%11lld g          |\n",food_ton,food_g);
    printf("|Celcius to Fahrenheit           | %6.2f C              |%11d F          |\n",temp_c,temp_f);
    printf("+--------------------------------+-----------------------+-----------------------+\n");
    return 0;
}