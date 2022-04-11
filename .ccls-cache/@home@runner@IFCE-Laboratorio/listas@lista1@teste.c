include <stdio.h>
int main() {
    int a, b, aux;
    scanf ("%d", &a);
    scanf ( "%d", &b);
    printf("%d%\n", a, b);
    aux = a;
   a = b;
    b = aux;
    printf("%4d%4d\n", a, b);
    return 0;
  }