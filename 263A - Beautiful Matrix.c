#include <stdio.h>
#include <math.h>

#define ROW_SIZE 5
#define COLUMN_SIZE 5

int main() {
    int matrix[ROW_SIZE][COLUMN_SIZE];
    int total_moves = 0;
    int target_row = 2; 
    int target_col = 2; 
    int whereIsOne[2];

    for(int i = 0; i<ROW_SIZE; i++){
        for(int j = 0; j<COLUMN_SIZE; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 1) {
                *whereIsOne = i;
                *(whereIsOne + 1) = j;
                break;
            }
        }
    }
    total_moves = abs(whereIsOne[0] - target_row) + abs(whereIsOne[1] - target_col);
    printf("%d\n", total_moves);
}