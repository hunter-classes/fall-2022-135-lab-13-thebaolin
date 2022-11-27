#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//Test Cases are given as lab examples

TEST_CASE("TASK A") {

  CHECK_EQ(printRange(-1, 5), "-1 0 1 2 3 4 5");
  CHECK_EQ(printRange(2, 0), "");
  CHECK_EQ(printRange(5, 5), "5");

}

TEST_CASE("TASK B") {

  CHECK_EQ(sumRange(1, 2), 3);
  CHECK_EQ(sumRange(-2, 10), 52);
  CHECK_EQ(sumRange(-5, -5), -5);
  CHECK_EQ(sumRange(5, 4), 0);
}

TEST_CASE("task c") {
  int size = 10;
  int *arr = new int[size];
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  CHECK_EQ(sumArray(arr, size), 43);
  CHECK_EQ(sumArray(arr, 5), 34);
  CHECK_EQ(sumArray(arr, 0), 0);

}

TEST_CASE("task d") {

  CHECK(isAlphanumeric("ABCD"));
  CHECK(isAlphanumeric("Abcd1234xyz"));
  CHECK_FALSE(isAlphanumeric("KLMN 8-7-6"));

}

TEST_CASE("task e") {

  CHECK(nestedParens("((()))"));
  CHECK(nestedParens("()"));
  CHECK(nestedParens(""));
  CHECK_FALSE(nestedParens("((("));
  CHECK_FALSE(nestedParens("(()"));
  CHECK_FALSE(nestedParens(")("));
  CHECK_FALSE(nestedParens("a(b)c"));

}