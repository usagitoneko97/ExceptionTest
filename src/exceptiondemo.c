#include <stdio.h>
#include "exceptiondemo.h"
#include "CException.h"
#include "CExceptionConfig.h"
/*
find the area fo a circle given the raduis in meter.
Note that the radius cannot be negative.
"The radius cannot be zerooooooooo"
*/
#define DIVIDED_BY_ZERO 1
#define DIVIDED_IS_NEG 2
#define RADIUS_IS_NEG 3

/*void validateNumber(float v){
  if(v == 0)
    Throw (DIVIDED_BY_ZERO);
  else if(v <0.00)
    Throw(DIVIDED_IS_NEG);
}

float divide(float v1, float v2){
  CEXCEPTION_T ex;
  Try{
    validateNumber(v2);
  }Catch(ex){
    printf("something is wrong here\n" );
    Throw(ex);
  }
  printf("%f seems to be a good divider\n", v2);
  return v1/v2;
}

void tryException(float v1, float v2){
  CEXCEPTION_T ex;
  Try{
    //try something...
    float val = divide(v1, v2);
    printf ("%f divided by %f is %f \n", v1, v2, val);
  } Catch (ex){
    //resolve problem
    if (ex == DIVIDED_BY_ZERO)
      printf("cannot divide by zero\n");
    else if(ex == DIVIDED_IS_NEG)
      printf("cannot divide by a negative number\n");
  }
}
*/
void validateRadius(float radius){
  if (radius <0.000){
    //Throw (RADIUS_IS_NEG);
    //should:
    Throw(createException("Radius cannot be negative", RADIUS_IS_NEG));
  }
}

float getArea (float radius){
  CEXCEPTION_T ex;
  float result;
  Try{
    validateRadius (radius);
    result = ((radius*radius) * 3.14159);
    printf("Result is : %f\n", result);
    return result;
  } Catch (ex){
    dumpException(ex);
  }

}
