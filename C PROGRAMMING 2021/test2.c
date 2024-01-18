#include <stdio.h>

int main() {

int x[] = {5, 10, 3, 8, 12};
int a, b, c, d;

 a = ++x[1] <= 10 && x[4] > 10;
 b = x[0]-- < 5 || x[2] < 4;
 c = x[0] <= 5 || x[2] > 4;
 d = x[1]++ > 10 && x[4] > 10;

printf("%d %d %d %d", a, b, c, d);

return 0;
}