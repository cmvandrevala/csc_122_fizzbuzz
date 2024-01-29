#include <iostream>
#include <cassert>
#include "fizzbuzz.hpp"

int main()
{
  assert("fizzbuzz" == fizzbuzz(0));
  assert("1" == fizzbuzz(1));
  assert("2" == fizzbuzz(2));
  assert("fizz" == fizzbuzz(3));
  assert("4" == fizzbuzz(4));
  assert("buzz" == fizzbuzz(5));
  assert("fizz" == fizzbuzz(6));
  assert("7" == fizzbuzz(7));
  assert("14" == fizzbuzz(14));
  assert("fizzbuzz" == fizzbuzz(15));

  return 0;
}
