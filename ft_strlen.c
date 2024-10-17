int ft_strlen(char *str) {
   unsigned long   i;

   i = 0;
   while (str[i] != '\0') {
      i++;
   }
   return i;
}