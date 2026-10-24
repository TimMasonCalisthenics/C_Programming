#include <stdio.h>

int main(){
    int rows,col,i,j,v;
    printf("Enter Rows and Column matrix: ");
    scanf("%d %d",&rows,&col);

    int matrix[rows][col];
    //MAtrix input
    for(i = 0;i < rows;i++){
        for(j = 0;j < col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Enter V value: ");
    scanf("%d",&v);

    int countGreater = 0,sumLess = 0;

    printf("\nNumber greater than V:\n");
    for(i = 0; i< rows;i++){
        for(j = 0;j < col;j++){
            if(matrix[i][j] > v){
                printf("%d ",matrix[i][j]);
                countGreater++;
            }
            if(matrix[i][j] < v){
                sumLess += matrix[i][j];
            }
        }
    }
    // 2) แสดงจำนวนของตัวเลขที่มีค่าเกิน V
    printf("\n\nCount of numbers greater than V = %d", countGreater);

    // 3) แสดงผลรวมของจำนวนที่มีค่าน้อยกว่า V ทั้งหมด
    printf("\nSum of numbers less than V = %d\n", sumLess);

    return 0;
}