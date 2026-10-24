#include <stdio.h>

int main() {
    int hour, minute;

    scanf("%d:%d", &hour, &minute);

    int total_minutes = (hour * 60) + minute;
    
    int start_time = 430; 
    int end_time = 570;

    if (total_minutes >= start_time && total_minutes <= end_time) {
        printf("Y");
    } else {
        printf("N");
    }

    return 0;
}