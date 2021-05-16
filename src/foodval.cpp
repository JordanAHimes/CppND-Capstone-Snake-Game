#include <foodval.h>
#include <iostream>


void FoodVal::UpdateFoodVal(){
    if (_foodval == 5){
      _foodval = 1;
    }else {_foodval++;}

    return;
}

void FoodVal::NewFoodVal(){
    int _foodval = rand() % 5+1;
}


int FoodVal::GetFoodVal(){
    return _foodval;
}

FoodVal* FoodVal::instance(){
    static FoodVal instance;
    return &instance;
}