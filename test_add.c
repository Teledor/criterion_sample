#include <criterion/criterion.h>

int add(int, int);
int sub(int, int);
int divide(int, int);

Test(add, add_two_number)
{
  cr_assert_eq(5, add(2, 3));
}

Test(add, adding_negative_number)
{
  cr_assert_eq(-10, add(-5, -5));
}

Test(sub, sub_two_number)
{
  cr_assert_eq(0, sub(5, 5));
}

Test(divide, divide_two_number)
{
  cr_assert_eq(5, divide(10, 2));
}

Test(divide, divide_by_zero)
{
  cr_assert_eq(0, divide(234, 0));
}
