#include <math.h>
#include <stdio.h>
//ФАКТОРІАЛ
/*int factorial(int n) {
    if (n==0 || n ==1) {
        return 1;
    }
    return n*factorial(n-1);
}
int main(void) {
        int n =5;
        int result=factorial(n);
        printf("Factorial is %d",result);

}

//ЧИСЛА ФІБАНАЧІ
int fibanachi(int n) {
    if (n == 1)
        return 0;
    if (n== 2)
        return 1;
    if (n > 2)
        return fibanachi(n-1)+fibanachi(n-2);
}

int main(void) {
    int n = 0 ,x;
    scanf_s("%d", &n);
    x=fibanachi(n);
    printf("%d",x);
}
*/
//ЗНАХОДЖЕННЯ ПЛОЩІ ТРИКУТНИКА ЗА КООРДИНАТАМИ ЙОГО ВЕРШИН
/* double calculating(double *x, double *y,double *z) {
    double i; // х координата вектора
    double j; // у координата вектора
    double k; // z координата вектора
    double result; // результат
    double firstvector[3]={x[1] - x [0], y[1] - y [0], z[1] - z[0]}; // перший утворений вектор з заданих точок
    double secondvector[3] = {x[2] - x [0], y[2] - y[0],z[2] - z[0]}; // другий утворений вектор
    i=(firstvector[1]*secondvector[2]) - (secondvector[1]*firstvector[2]); // мінор
    printf("%f \n",i);
    j= (firstvector[2]*secondvector[0]) - (firstvector[0] * secondvector[2]); //мінор
    printf("%f \n",j);
    k= (firstvector[0] * secondvector[1]) - (firstvector[1] * secondvector[0]); //мінор
    printf("%f \n",k);

    result=(double)0.5*sqrt(pow(i,2)+pow(j,2)+pow(k,2)); // результат
    return result;

}
int main(void) {
    int i;
    double RESULT=0; // результат
    double iksi[3];
    double igriki[3];
    double zeti[3];



    for(i=0; i < sizeof(iksi)/ sizeof(iksi[0]); i++) { // заповнення масивів
        printf("SO here is %d x \n",i+1);
        scanf_s("%lf",&iksi[i]);
    }



    for(i=0; i < sizeof(iksi)/ sizeof(iksi[0]); i++) {
        printf("SO here is %d y\n",i+1);
        scanf_s("%lf",&igriki[i]);
    }


    for(i=0; i < sizeof(iksi) / sizeof(iksi[0]); i++) {
        printf("SO here is %d z \n",i+1);
        scanf_s("%lf",&zeti[i]);
    }


    RESULT = calculating(iksi, igriki, zeti); //результат
    printf("Result is %f",RESULT);

}
 */