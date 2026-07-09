
void    ft_rev_int_tab(int *tab, int size){
    int j = 0;
    int temp = 0;
    size--;

    while(j < size){
        temp = tab[size];
        tab[size] = tab[j];
        tab[j] = temp;
        size--;
        j++;
    }
}