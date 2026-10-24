#include <stdio.h>
#include <math.h>

struct vector3d{
    double x;
    double y;
    double z;
};

struct vector3d v[100];

double FindLength(struct vector3d v){
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

int main(){
    int n;
    struct vector3d v[100];

    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%lf %lf %lf",&v[i].x, &v[i].y, &v[i].z);
    }

    for(int i = 0;i < n;i++){
        printf("%.2lf\n", FindLength(v[i]));
    }
    return 0;
}