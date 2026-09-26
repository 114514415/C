#include <stdio.h>
int main(){
    int hour1, hour2, minute1, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int value_1 = hour1 * 60 + minute1;
    int value_2 = hour2 * 60 + minute1;
    
    int res_hour = (value_2 - value_1) / 60; 
    int res_minute = (value_2 - value_1) % 60;

    printf("The time diffrence is: %d : %d ", res_hour,res_minute);
    
    return 0;
}