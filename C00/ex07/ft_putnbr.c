#include <unistd.h>

void ft_putnbr(int n){
    long nb = n;
    if(nb < 0){
        write(1, "-",1);
        nb = -nb;
    }
    if (nb >= 10){
        ft_putnbr(nb / 10);
    }
    char print_it = (nb % 10) + '0';
    write(1,&print_it,1);
}