#include <stdio.h>

int main()
{
   for (int i = 1; i <= 4; i++)
   {
      for (int j = 0; j < i - 1; j++)
      {
         printf(" ");
         if (j == 1 && i == 4)
            printf(" ");
      }
      for (int j = 0; j < 2; j++)
      {
         if (j == 1 && i == 4)
            break;
         printf("%c ", 'A' + j);
      }
      for (int j = 4 - i; j > 0; j--)
      {
         printf("%c ", 'A' + j - 1);
      }
      printf("\n");
   }

   return 0;
}
