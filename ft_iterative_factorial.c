int ft_iterative_factorial(int nb) {
   int   i;
   int   res;

   i = 1;
   res = 1;
   if (nb < 0) return (0);
   if (nb == 0) return (res);
   while (i <= nb) {
      res *= i;
      i++;
   }
   return (res);
}