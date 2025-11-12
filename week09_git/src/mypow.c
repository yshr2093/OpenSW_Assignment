#include "myops.h"

double mypow(double _a,double _b){
    double _result =1;
    for(double i= 0;i<_b;i++){
        _result = _result*_a;
    }
    return _result;
}