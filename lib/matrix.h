#include <fstream>

#ifndef MATRIX_H
#define MATRIX_H
namespace numerical{
  class matrix
  {
    public:
      //creates a new nXm matrix
      matrix(size_t n, size_t m);
      //creates a new nXm matrix and initializes all values with defaultValue
      matrix(size_t n, size_t m, double defaultValue);
      //deconstructor
      ~matrix();

      //returns the number of rows/columns
      size_t get_n();
      size_t get_m();

      //returns the value in row n, column m
      double get_value(size_t n, size_t m);
      //sets the value in row n, column m
      void set_value(size_t n, size_t m, double value);

      void multiply_row(size_t target_m, double scalar);
      void multiply_column(size_t target_n, double scalar);
      void swap_rows(size_t target_m, size_t sourcem);
      void replace_row(size_t target_m, double* source);
      void swap_column(size_t target_n, size_t sourcen);
      void replace_column(size_t target_n, double* source);
      void print_to_stream(std::ostream& stream) const;
    private:
      double** data;
      size_t n;
      size_t m;
  };
}
#endif
