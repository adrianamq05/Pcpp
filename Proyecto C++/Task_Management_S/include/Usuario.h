#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "Lista_Tareas.h"
using namespace std;

class Usuario
{
    protected:
        string nombre;
        size_t password;
        Lista_Tareas lt;

    public:
        Usuario(string n, string p);

        ~Usuario()= default;

        size_t getPassword();

        string getNombre();

        virtual void addTarea(Tarea t) = 0;

        bool eliminarTarea(unsigned int tarea_id);

        void showInf(int i);

        Lista_Tareas* filter(int prioridad);

        void mostrar();

};

#endif // USUARIO_H
