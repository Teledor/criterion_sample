int sub(int a, int b)
{
  return a - b;
}

int divide(int a, int b)
{
  if (b == 0)
    return 0;
  return a / b;
}

int add(int a, int b)
{
  return a + b;
}

/*int main(int argc, char **argv) {
  if (argc == 2)
    printf("%d\n", add(atoi(argv[1]), atoi(argv[2])));
  return 0;
}*/
