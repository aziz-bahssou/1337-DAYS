#include <unistd.h>

void print(char *arr, int n){
    int i = 0;
    while(i < n){
        write(1,&arr[i],1);
        i++;
    }
    if(arr[0] < (10 - n) + '0'){
        write(1, ", ",2);
    }
}

void ft_print_combn(int n){
	
    int i = 0;
    char arr[10];

    while (i < n){
        arr[i] = (i + '0');
        i++;
    }

    while (1){

        print(arr,n);
        i = n - 1;

        while (i >= 0 && arr[i] == ('9' - (n - 1 - i)))
            i--;

        if(i < 0)
            break;

        arr[i]++;

        while (++i < n)
            arr[i] = arr[i - 1] + 1;        
    }  
}
