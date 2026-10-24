#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int z1, int x2, int y2, int z2){
    long diff_x = x2 - x1;
    long diff_y = y2 - y1;
    long diff_z = z2 - z1;

    double sum_sq = pow(diff_x,2) + pow(diff_y,2) + pow(diff_z,2);

    float result = (float)sqrt(sum_sq);

    return result;
}
int main(){
    int x1,y1,z1,x2,y2,z2;
    scanf("%d %d %d",&x1,&y1,&z1);
    scanf("%d %d %d",&x2,&y2,&z2);

    float d = distance(x1,y1,z1,x2,y2,z2);

    printf("Distance: %.2f\n",d);

    return 0;
}