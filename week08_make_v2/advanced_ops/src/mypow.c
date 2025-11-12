#include "advanced_ops.h"

double mypow(double _a,double _b){
    double R =1;
    for(double i=0;i<_b;i++){
        R=R*_a;
    }
    return R;
}