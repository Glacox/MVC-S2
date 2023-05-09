//affichage du tableau

void display(int* table, int size){
    for (int i = 0; i < size; ++i) {
        printf("\n");
        for (int p = 0; p < size; ++p) {
            printf(" %d", table[p + (size * i)]);
        }
    }
}