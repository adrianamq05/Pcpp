#include "Premium.h"

Premium::Premium(string n, string p) : Usuario(n,p)
{

}

 void Premium::addTarea(Tarea t){
    if(lt.size() == 5){
        cout << "YOU CAN NOT ADD ANYMORE TASKS \n";
        return;
    }
    lt.push_back(t);
    cout << "THE TASK WAS ADDED CORRECTLY \n";
}

