#include "myops.h"

double mymod(double _a,double _b){
    double _result = _a/_b;
    for(double i = 0;_result>1.00;i++){
        _result = _result -1.00;    
    }
    _result = _a - _b*(_a/_b - _result);
    return _result;
}