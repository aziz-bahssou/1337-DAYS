

void ft_ultimate_div_mod(int *a, int *b){
    int a2 = *a;
    int b2 = *b;

    *a = a2 / b2;
    *b = a2 % b2;
}