/* 
 * manipFunctions.c
 * 
 * This source file defines all the functions used to bit manipulate
 *
 */

#include "manipFunctions.h"

int hasAOne(int num) {
  return num && 1;
}

int hasAZero(int num) {
  return ~num && 1;
}

int leastSigHasAOne(int num) {
    return (num & 0xff) && 1;
}

int negate(int num) {
  return (num ^ ~0) + 1;
}

int isNegativeInt(int num) {
  return !(( ~(num) & (1<<31)) | !num);
}

int isNegativeLong(long num) {
  return !(( ~(num) & (1<<31)) | !num);
}

int isNegativeChar(char num) {
  return !(( ~(num) & (1<<7)) | !num);
}
