/*Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)*/
#include <stdio.h>
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int a = 5, b = 8, c = 2, d = 3;
    int left_max = max(a, b);
    int right_max = max(c, d);
    int final_max = max(left_max, right_max);
    printf("Maximum number is: %d", final_max);
}