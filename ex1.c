/******************
Name: Maytal Hashai
ID: 209853274
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
Print the bit in this position. */
  int num1, position1;
  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &position1);
  // res saves the bit that is in position1
  int res = (num1 >> position1) & 1;
  printf("The bit in position %d of number %d is: %d\n\n", position1, num1, res);

  printf("Set bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int num2, position2;
  printf("Please enter a number:\n");
  scanf("%d", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &position2);
  // if the num2 in position2 is 0 bitOn changes it to 1. if the gaven num2 in position2 is 1 it just stays on
  int bitOn = ((num2 >> position2) | 1) << position2;
  bitOn = num2 | bitOn;
  //
  int bitOff = (~(1 << position2)) & num2;
  printf("Number with bit %d set to 1: %d\n", position2, bitOn);
  printf("Number with bit %d set to 0: %d\n\n", position2, bitOff);


  printf("Toggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int num3, position3;
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  printf("Please enter a position:\n");
  scanf("%d", &position3);
  int toggle = (1 << position3) ^ num3;
  printf("Number with bit %d toggled: %d\n\n", position3, toggle);

 printf("Even - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int num4;
  printf("Please enter a number:\n");
  scanf("%d", &num4);
  int OddRoEven = (~(num4 & 1) & 1);
  printf("%d\n\n", OddRoEven);

  printf("3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num5, num6;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num5);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num6);
  int sum = num5 + num6;
  printf("The sum in hexadecimal: %X\n", sum);
  int bit3 = (sum >> 3) & 1;
  int bit5 = (sum >> 5) & 1;
  int bit7 = (sum >> 7) & 1;
  int bit11 = (sum >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);
  printf("Bye!\n");
  
  return 0;
}
