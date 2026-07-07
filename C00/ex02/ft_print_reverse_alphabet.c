#include <unistd.h>
                        
void ft_print_alphabet(){
    char c = 'z';
    while (c >= 'a'){
        write(1,&c,1);
        c--;
    }
    
}

