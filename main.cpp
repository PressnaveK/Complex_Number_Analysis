#include "Complex.h"
int main(){
    Complex *num;
    num = new Complex [6];
    assign(num[0],"Num_1");
    assign(num[1],"Num_2");
    num[2] = num[0] + num[1];
    num[3] = num[0] - num[1];
    num[4] = num[0] * num[1];
    num[5] = num[0] / num[1];

    printComplex(num[0],"Num_1");
    printComplex(num[1],"Num_2");
    printComplex(num[2],"Num_1 + Num_2");
    printComplex(num[3],"Num_1 - Num_2");
    printComplex(num[4],"Num_1 * Num_2");
    printComplex(num[5],"Num_1 / Num_2");
    conjucate(num[0],"Num_1");
    


    return 0;
}