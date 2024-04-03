#ifndef TAREA_H
#define TAREA_H
#include <string>
#include <iostream>
using namespace std;

class Tarea
{
    private:
        string titulo;
        string descripcion;
        string fecha_vencimiento;
        int prioridad;
        unsigned int tarea_id;
        static unsigned int counter;


    public:
        Tarea();

        Tarea(const string& tit,const string& descp,const string& fv, int p);

        string getTitulo() const;

        string getDescripcion() const;

        string getFecha_Vencimiento() const;

        int getPrioridad();

        unsigned int getTarea_id();

        void mostrarInfo();

        friend bool operator < (const Tarea &t1, const Tarea &t2);

        ~Tarea() = default;
};

#endif // TAREA_H
