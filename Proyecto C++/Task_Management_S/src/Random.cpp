#include "Random.h"

Random::Random(string n, string p) : Usuario(n,p)
{

}

 void Random::addTarea(Tarea t){
    if(lt.size() == 3){
        cout << "YOU CAN NOT ADD ANYMORE TASKS \n";
        return;
    }
    lt.push_back(t);
    cout << "THE TASK WAS ADDED CORRECTLY \n";
 }
