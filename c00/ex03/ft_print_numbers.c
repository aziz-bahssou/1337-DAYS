#include <unistd.h>

void ft_print_numbers(){
    int i = 0;
    while (i <= 9){
        write(1,&i,1);
    }
}
int main(){
    ft_print_numbers();
}