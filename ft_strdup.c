#include<stdlib.h>

char *ft_strdup(char *src) {
   int   i;
   int   j;
   char *newStr; 

   i = 0;
   while (src[i])
      i++;
   newStr = malloc((i + 1) * sizeof(char));
   if (newStr == NULL) {
      return NULL;
   }

   j = 0;
   while (j <= i) {
      newStr[j] = src[j];
      j++;
   }
   return newStr;
}
