void ft_putchar(char c);

void swap_inputs (char **input1, char **input2) {
   char  *temp;

   temp = *input1;
   *input1 = *input2;
   *input2 = temp;
}

void sort(int num, char *input[]) {
   int   i;
   int   j;
   int   swap;

   swap = 1;
   while (swap) {
      swap = 0;
      i = 1;
      while (i < num - 1) {
         j = 0;
         while (input[i][j] != '\0' || input[i + 1][j] != '\0') {
            if (input[i][j] != input[i + 1][j]) {
               if(input[i][j] > input[i + 1][j]) {
                  swap_inputs(&input[i], &input[i+1]);
                  swap = 1;
               }
            break;
         }
         j++;
      }
         i++;
      }
   }
}


int   main(int argc, char *argv[]) {
   int   i;
   int   j;

   i = 1;
   sort(argc, argv);
   while (i < argc) {
      j = 0;
      while (argv[i][j]) {
         ft_putchar(argv[i][j]);
         j++;
      }
      ft_putchar('\n');
      i++;
   }
   return 0;
}