#include "Tarea.h"
unsigned int Tarea::counter = 0;


Tarea::Tarea(const string& tit,const string& descp,const string& fv, int p) : titulo(tit), descripcion(descp), fecha_vencimiento(fv), prioridad(p) {
    tarea_id = ++counter;
}

Tarea::Tarea()
{

}

string Tarea::getTitulo() const{
    return titulo;
}

string Tarea::getDescripcion() const {
    return descripcion;
}

string Tarea::getFecha_Vencimiento() const {
    return fecha_vencimiento;
}

int Tarea::getPrioridad(){
    return prioridad;
}

unsigned int Tarea::getTarea_id(){
    return tarea_id;
}

void Tarea::mostrarInfo() {
    cout << "ID: " << tarea_id << '\n';
    cout << "Titulo: " << titulo << '\n';
    cout << "Descripcion: " << descripcion << '\n';
    cout << "Fecha de Vencimiento: " << fecha_vencimiento << '\n';
    cout << "Prioridad: " << prioridad << '\n';
}

bool operator < (const Tarea &t1, const Tarea &t2){
    return t1.fecha_vencimiento < t2.fecha_vencimiento;
}
