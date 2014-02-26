
int count_of_bits(int a) {
  int result = 1; // sign bit
  while (a) {
    a >>= 1;
    result = result + 1;
  }
  return result;
}
