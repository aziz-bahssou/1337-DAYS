#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}


void ft_print_comb2(void){
    int i = 0;
    int j;
    while (i < 99){
        j = i + 1;
        while (j <= 99){

            ft_putchar((i /10) + '0');
            ft_putchar((i % 10) + '0');

            write(1, " ",1);

            ft_putchar((j / 10) + '0');
            ft_putchar((j % 10) + '0');

            if(i != 98){
                write(1, ", ",2);
            }
            j++;
        }
        i++;
    }
    
}

