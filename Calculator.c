#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  /* creating variable*/
  float valueOne;
  float valueTwo;
  char operator;
  float answer;

  printf("welcome to my Calculator:\n");
  printf("use / for Division AND use * for Multiplication\n\n");
  printf("Enter your Calculation\n");
  /* teking input values*/
  scanf("%f %c %f", &valueOne, &operator, & valueTwo);
  /* checking opreator */
  switch (operator) {
  case '/':
    answer = valueOne / valueTwo;
    break;
  case '*':
    answer = valueOne * valueTwo;
    break;
  case '+':
    answer = valueOne + valueTwo;
    break;
  case '-':
    answer = valueOne - valueTwo;
    break;
  case '^':
    answer = pow(valueOne, valueTwo);
    break;
  case ' ':
    answer = sqrt(valueTwo);
    break;
  default:
    goto fail;
  }
  printf("%.9g%c%.9g =  %.6g\n\n", valueOne, operator, valueTwo, answer);
  goto exit;
fail:
  printf("Fail.\n");
exit:
  return 0;
}
