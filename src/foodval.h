#ifndef FOODVAL_H
#define FOODVAL_H

class FoodVal{
    public:
        static FoodVal* instance();

        void NewFoodVal();
        void UpdateFoodVal();
        int GetFoodVal();
        
    private:
        int _foodval;

};

#endif