#include "advanced_ops.h"

double mymod(double _a,double _b){
    double R =0;
    R= _a/_b;
    for(double i=0;R>1.00;i++){
        R= R-1.00;
    }
    return _a - _b*(_a/_b -R);
}