//definition du tableau

int playground(int* table, int size){
    
    for (int i =0; i<size; ++i){
        *(table + i) = 0;
    }
    return table;
}