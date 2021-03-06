#include "matrix.h"

#ifndef SQUAREMATRIX_H
#define SQUAREMATRIX_H
namespace numerical
{
  class square_matrix :  public matrix
  {
    public:
      //creates a nXn matrix
      square_matrix(int n) : matrix(n,n) {}
        //creates a nXn matrix and initializes all values with defaultValue
      square_matrix(int n, double defaultValue) : matrix(n,n, defaultValue) {};

      double determinant();
  };
}
#endif
