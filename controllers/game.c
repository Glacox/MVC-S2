#include "./models/map.c"
#include "./views/display.c"


int main(){
    int size = 9;
    int doubleSize = size * size;


    int* grid = (int*)malloc(sizeof(int) * doubleSize+1);
    grid = playground(grid, size);
    display(grid, size);
}