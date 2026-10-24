#include <stdio.h>

int main(){
    int rows,column;
    int i,j;

    printf("Enter M(Matrix Row): ");
    scanf("%d",&rows);
    printf("Enter N(Matrix column): ");
    scanf("%d",&column);

    int matrix[rows + 1][column + 1];
    for(i = 0; i < rows;i++){
        for(j = 0; j < column ;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    //ผลรวมแต่ลำ row ใส่ column N
    for(i = 0; i < rows;i++){
        matrix[i][column] = 0;
        for(j = 0;j < column;j++){
            matrix[i][column] += matrix[i][j];
        }
    }

    //ผลรวมแต่ละ Column ใส่ row N
    for(j = 0;j < column;j++){
        matrix[rows][j] = 0;
        for(i = 0; i < rows;i++){
             matrix[rows][j] += matrix[i][j];
        }
    }

    matrix[rows][column] = 0;
    for(i = 0;i < rows;i++){
        matrix[rows][column] += matrix[i][column];
    }

    //Matrix display
    for(i = 0; i <= rows;i++){
        for(j = 0; j <= column;j++){
            printf("%4d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}