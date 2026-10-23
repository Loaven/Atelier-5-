#include <stdlib.h>

#define HEIGHT  90
#define WIDTH 120

void display_grille(int grille[HEIGHT][WIDTH]) {
for (int i=0; i< HEIGHT; i++) {
    for (int j=0; j< WIDTH; j++) {
       if (grille[i][j] == 1) {
        printf("X");
       } else {
        printf(".");
       }
    }
    printf("\n");
}
int main (void) {

int grille[HEIGHT][WIDTH];

for (int i=0; i< HEIGHT* WIDTH; i++) {
        grille[i/WIDTH][i%WIDTH] = 0;
    }
}
//stable
grille[10][20] = 1;
grille[10][21] = 1;
grille[11][20] = 1;
grille[11][21] = 1;

//oscillateur
grille[20][30] = 1;
grille[20][31] = 1;
grille[20][32] = 1;
    
//Vaisseau
int v_y = 30; int v_x = 40;
grille[v_y][v_x+1] = 1;
grille[v_y+1][v_x+2] = 1;
grille[v_y+2][v_x] = 1;
grille[v_y+2][v_x+1] = 1;
grille[v_y+2][v_x+2] = 1;

display_grille(grille);
return 0;
}