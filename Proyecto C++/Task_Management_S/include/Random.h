#ifndef RANDOM_H
#define RANDOM_H
#include <string>
#include "Lista_Tareas.h"
#include <vector>
#include"Usuario.h"
using namespace std;

class Random : public Usuario
{
    public:
        Random(string n, string p);

        ~Random() = default;

        void addTarea(Tarea t) override;

};

#endif // RANDOM_H
