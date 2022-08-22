//
// Created by namitd on 2/8/22.
//
/*
 * C program for Tower of Hanoi using Recursion
 */
#include <stdio.h>

void towers(int, char, char, char);

int main() {
    int num;

    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    system("pause");
}

void towers(int num, char A, char C, char B) {
    printf("\n %d,%c,%c,%c\n", num, A, C, B);
    if (num == 1) {
        printf("\n 1. Move disk 1 from  %c to  %c", A, C);
        return;
    }
    towers(num - 1, A, B, C);
    printf("\n 2. Move disk %d from %c to  %c", num, A, C);
    towers(num - 1, B, C, A);
}