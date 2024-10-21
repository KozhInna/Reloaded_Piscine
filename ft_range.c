#include<stdlib.h>

int *ft_range(int min, int max) {
   int   dif;
   int   *arr_pnt;
   int   i;

   dif = max - min;
   if (dif <= 0) {
      return NULL;
   }
   arr_pnt = malloc(sizeof(int) * dif);
   if (arr_pnt == NULL) {
      return NULL;
   }
   i = 0;
   while (min < max) {
      arr_pnt[i++] = min++;
   }
   return arr_pnt;
}

/* #include<stdio.h>

   int main(void) {
   int min = -1;
   int max = 16;
   int i = 0;
   int *arr_pnt = ft_range(min, max);
   if (arr_pnt != NULL) {
      while (i < (max - min)) {
      printf("%d ", arr_pnt[i]);
      i++;
   }
   free(arr_pnt);
   }
   
} */