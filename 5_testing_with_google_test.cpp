#include <gtest/gtest.h>
#include "fizzbuzz.hpp"

TEST(FizzBuzzTest, BasicAssertions)
{
  EXPECT_EQ(fizzbuzz(1), "1");
  EXPECT_EQ(fizzbuzz(2), "2");
  EXPECT_EQ(fizzbuzz(3), "fizz");
  EXPECT_EQ(fizzbuzz(4), "4");
  EXPECT_EQ(fizzbuzz(5), "buzz");
  EXPECT_EQ(fizzbuzz(6), "fizz");
}
