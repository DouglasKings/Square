#include <stdio.h>
#include <stdlib.h>


int main(){
   
    int Side;
    int Perimeter;
    int Area;

    printf("Enter the side length of a square: \n");
    scanf("%d", &Side); // Use & to pass the address of Side

    Perimeter = Side + Side + Side + Side;
    Area = Side * Side;

    printf("The side length of a square is: %d cm\n", Side);
    printf("The perimeter of a square is: %d cm\n", Perimeter);
    printf("The area of a square is: %d cm^2\n", Area);

    return 0;
}