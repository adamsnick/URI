#include <stdio.h>

int main ()
{

  int num, i, a, i2 = 0, i3 = 0, i4 = 0, i5 = 0;

  scanf ("%d", &num);

  for (i = 0; i < num; i++)

    {
      scanf ("%d", &a);
      if (a % 2 == 0)
	i2++;
      if (a % 3 == 0)
	i3++;
      if (a % 4 == 0)
	i4++;
      if (a % 5 == 0)
	i5++;
    }

  printf ("%d Multiplo(s) de 2\n", i2);
  printf ("%d Multiplo(s) de 3\n", i3);
  printf ("%d Multiplo(s) de 4\n", i4);
  printf ("%d Multiplo(s) de 5\n", i5);

  return 0;

}
