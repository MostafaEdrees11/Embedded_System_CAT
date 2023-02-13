/*
 * Author: Mostafa Edrees
 * Date: 13/02/2023
 * Required: Write a C code that defines 3 int variables x, y and z and 3 pointers to int px, py and pz.
             Set x, y, z to three distinct values. Set px, py and pz to the addresses of x, y, z respectively.
             Can you expect the output before you run the program ... ?
             a- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.
             b- Print the message: Swapping pointers.
             c- Execute the swap code: pz = px; px = py; py = pz;
             d- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.
 */
#include <stdio.h>

int main()
{
    /* define 3 int variables */
    int x, y, z;

    /* define 3 pointers to int */
    int *px, *py, *pz;

    /* initialize x , y and z */
    x = 10;
    y = 20;
    z = 30;

    /* Set px, py and pz to the addresses of x, y, z */
    px = &x;
    py = &y;
    pz = &z;

    /* a- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz. */
    printf("x = %d, y = %d, z = %d\n",x ,y ,z); //10 20 30
    printf("px = %p, py = %p, pz = %p\n",px ,py ,pz); //address of x,y,z
    printf("*px = %d, *py = %d, *pz = %d\n",*px ,*py ,*pz); //10 20 30

    /* b- Print the message: Swapping pointers. */
    printf("\nSwapping pointers.\n");

    /* c- Execute the swap code: pz = px; px = py; py = pz; */
    /* swap x , y by using z */
    pz = px;
    px = py;
    py = pz;

    /* d- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz. */
    printf("x = %d, y = %d, z = %d\n",x ,y ,z); //10 20 30
    printf("px = %p, py = %p, pz = %p\n",px ,py ,pz); //address of y,x,x
    printf("*px = %d, *py = %d, *pz = %d\n",*px ,*py ,*pz); //20 10 10

    return 0;
}
