#include <stdio.h>
void main ()
  {
  long long int x;
  long long int y;
  printf ("x:>");
  scanf ("%lli", &x);
  printf ("y:>");
  scanf ("%lli", &y);
  if ((x == 12345) && (y == 9876)
   || (x == 8785) && (y == 549876)
   || (x == 855445) && (y == 896)
     )
    printf ("OK");
  else
    printf ("ERROR");
  }
