#ifndef LISTA_TAREAS_H
#define LISTA_TAREAS_H
#include <vector>
#include "Tarea.h"
using namespace std;

class Lista_Tareas : public vector<Tarea>
{
    private:
        vector<Tarea> tareas;

    public:
        Lista_Tareas();

        ~Lista_Tareas() = default;

        Lista_Tareas* filtrar_Tareas(bool (*f) (Tarea));

};

#endif // LISTA_TAREAS_H
