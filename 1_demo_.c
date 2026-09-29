#include <stdio.h>
// calculate the time diffrence 
int main(){
    int hour1, hour2, minute1, minute2;
//obtain the first time point
    printf("Enter the first time(hour minute): ");
    scanf("%d %d", &hour1, &minute1);
//obtain the second time point
    printf("Enter the second time(hour minute): ");
    scanf("%d %d", &hour2, &minute2);
//unify it as minutes
    int value_1 = hour1 * 60 + minute1;
    int value_2 = hour2 * 60 + minute1;
//calculate the hours and minutes respectively
    int res_hour = (value_2 - value_1) / 60; 
    int res_minute = (value_2 - value_1) % 60;

    printf("The time diffrence is: %d : %d ", res_hour,res_minute);
    
    return 0;
}