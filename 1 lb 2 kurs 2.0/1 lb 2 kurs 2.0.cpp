#include <iostream>
#include <windows.h>

void createmass();
void printmass();
void sumup();
void sumleft();


int main()
{ 

    setlocale(LC_ALL, "Rus");
    int x, y, n, m;
    int app[10][10];
    int sum = 0;
    int schetchik = 0;
    printf(" ..Введите координаты точек, с которых будет рассчет.. \nx= ");
    scanf_s("%d", &x);
    printf_s("y= ");
    scanf_s("%d", &y);
    while (true) {
        printf("Введите N, M: ");
        scanf_s("%d %d", &n, &m);
        if ((n < x) || (m < y)) {
            printf("введите координаты больше самой точки! \n");
            continue;
        }
        else {
            break;
        }
        
    }
    n++;
    m++;
    printf("Введите размер матрицы NxM:\n");
    for (int i = 1; i < n; i ++) {
        for (int j = 1; j < m; j ++) {
            scanf_s("%d", &app[i][j]);
            if ((i == x) && (j == y)) {
                sum =  app[i][j];
            }
            
        }
        printf("----------- \n");
    }
    
    
    
    
    schetchik++;
    printf("\n %d) %d \n", schetchik , sum);
    for (int i = x; i ==x; x++) { // оно пройдет один раз и закроется
        for (int j = y - 1; j > 0; j--) { // складываем все последующие левее ячеки массива до 0
            sum = sum + app[x][j];
            schetchik++;
            printf(" %d) .%d. \n", schetchik, sum);
        }
        break;
    }

    for (int j = y; j == y; j++) { // оно пройдет один раз и закроется
        for (int i = x-1; i >0; i--) { // складываем все последующие выше ячеки массива до 0
            sum = sum + app[i][y];
            schetchik++;
            printf(" %d) .%d. \n", schetchik, sum);
        }
        break;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if ((i == x) && (j == y)) {
                app[i][j] = 0;
            }
            printf_s("%d ", app[i][j]); // вывод массива
            
        }
        printf_s("\n");
    }
    schetchik++;
    printf("\n Ответ: %d \n",  sum);
   
}
void createmass() {

}
void printmass() {

}
void sumup() {

}
void sumleft() {

}
// за кометить строку ctrl +k  and ctrl +c  
// обратное действие ctrl + k  and ctrl + U

//for (int i = 1; i < n; i++) {             // создание массива но нельзя эта использовать
//    for (int j = 1; j < m; j++) {
//        app[i][j] = rand() % 10;
//        if (i == x) {
//            if (j == y) {
//                sum = app[i][j];
//            }
//        }
//    }
//}