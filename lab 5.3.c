#include <stdio.h>
int main()
{
   
   const int rowCount = 3, colCount = 4;
int a[rowCount][colCount];
for (int i = 0; i < rowCount; i++)
for (int j = 0; j < colCount; j++) {
printf("a[%d][%d]=", i, j);
scanf("%d", &a[i][j]); }

for (int i = 0; i < rowCount; i++){ //введення a[0]
for (int j = 0; j < colCount; j++){
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("\n");

int b[3][4]={{a[0][2],a[0][3],a[0][0],a[0][1]},{a[1][2],a[1][3],a[1][0],a[1][1]},{a[2][2],a[2][3],a[2][0],a[2][1]}};
for (int i = 0; i < rowCount; i++){ //введення a[0]
for (int j = 0; j < colCount; j++){
printf("%d\t", b[i][j]);
}
printf("\n");
}
}
