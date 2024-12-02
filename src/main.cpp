//==============================================================================
///
/// @file
/// @brief Программа для робота Карела и стартовая функция
///
//==============================================================================


#include "karel.h"


//==============================================================================
/// Программа для робота Карела
///
void KarelProgram() {
/// @todo Добавить программу для Карела
int sum=0;
    for(int i=0; i<=50; i++){
    if(BeepersPresent()){
        PickBeeper();
    }else if (FrontIsClear()){
        Move();
    } else{
        sum++;
        if(sum%2!=0){
            TurnLeft();
            if(FrontIsClear()){
            Move();
            TurnLeft();
            }

        }else{
            TurnLeft();
            if(FrontIsClear()){
            TurnLeft();
            TurnLeft();
            }
            if(FrontIsClear()){
            Move();
            TurnLeft();
            TurnLeft();
            TurnLeft();
            }
        }
    }

   }
}


//==============================================================================
/// Стартовая функция
///
int main() {
    LoadWorld("worlds/CB_02.w");
    KarelProgram();
    Finish();
    return 0;
}
