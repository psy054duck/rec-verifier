extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Mono1_1-1.c", 3, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
int main(void) {
  int x = 0;
  int y = 1;

  x = x + y;
  if (x > 0) {
    x = x - 1;
    y = y + 2*x;
  } else {
    y = y + x;
  }

  // while (x < 100000000) {
  //   if (x < 10000000) {
  //     x++;
  //     y++;
  //   } else {
  //     x += 2;
  //     y += 3;
  //   }
  // }

  // __VERIFIER_assert(x == 100000001) ;
}