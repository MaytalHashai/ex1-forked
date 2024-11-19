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
  // res saves the number 0 or 1 that is in position1 according to the given num1.
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
  /* bitOn - if the given num2 in position2 is 0 it will turn on the bit - 1, if the num2 in
  position2 is 1  it won't change and stay 1. */
  int bitOn = ((num2 >> position2) | 1) << position2;
  bitOn = num2 | bitOn;
  // originalN - will keep the original value of num2.
  int originalN = (~(1 << position2)) & num2;
  printf("Number with bit %d set to 1: %d\n", position2, bitOn);
  printf("Number with bit %d set to 0: %d\n\n", position2, originalN);


  printf("Toggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int num3, position3;
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  printf("Please enter a position:\n");
  scanf("%d", &position3);
  /* toggle changes the bit in position3. if in position3 the
  bit of a given num3 is 0 - changes to 1, and if the bit is 1 - changes to 0. */
  int toggle = (1 << position3) ^ num3;
  printf("Number with bit %d toggled: %d\n\n", position3, toggle);

 printf("Even - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int num4;
  printf("Please enter a number:\n");
  scanf("%d", &num4);
  /* OddRoEven saves the value 1 or 0 according to the given num4.
  if num4 is odd OddRoEven = 0, and if num4 is even OddRoEven = 1. */
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
  // sum saves the value of num5 + num6.
  int sum = num5 + num6;
  printf("The sum in hexadecimal: %X\n", sum);
  // bit3, bit5, bit7, bit11 this values saves the number 0 or 1 that is in thies specific bits.
  int bit3 = (sum >> 3) & 1;
  int bit5 = (sum >> 5) & 1;
  int bit7 = (sum >> 7) & 1;
  int bit11 = (sum >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);
  printf("Bye!\n");
  
  return 0;
}
