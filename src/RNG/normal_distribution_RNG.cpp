#include "../../include/RNG/normal_distribution_RNG.h"


void initRNG(){
    bmt = new BoxMullerTransform();
    initiated = true;
}

double getRNG() {
    if(!initiated){
        initRNG();
    }
    return bmt->next();
}