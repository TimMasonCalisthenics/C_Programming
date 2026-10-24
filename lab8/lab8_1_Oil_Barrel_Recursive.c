#include <stdio.h>

double barrelUsed(int n,double usage){
    if(n == 0){
        return usage;
    }else{
        return 0.90 * barrelUsed(n - 1,usage);
    }
}

int main(){
    double usage = 25.0;
    int start_year = 2557;
    int end_year = 2580;

    int n = end_year - start_year;
    
    double remaining_oil = barrelUsed(n,usage);

    printf("In %d Thailand preserve fuel %.2f million barrel\n", start_year, usage);
    printf("On year %d (%d Years later) decrease 10%%\n", end_year, n);
    printf("Thailand will have %.4f million barrel remaining\n", remaining_oil);
    return 0;
}