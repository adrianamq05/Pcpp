#ifndef PREMIUM_H
#define PREMIUM_H
#include <string>
#include "Lista_Tareas.h"
#include <vector>
#include "Usuario.h"
using namespace std;

class Premium : public Usuario
{
    public:
        Premium(string n, string p);

        ~Premium() = default;

        void addTarea(Tarea t) override;

};

#endif // PREMIUM_H
