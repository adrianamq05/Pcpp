#include "Usuario.h"
#include <vector>
#include <functional>

int p;

Usuario::Usuario(string n, string p) : nombre(n)
{
        hash<string> hasher;
        password = hasher(p);
        lt = Lista_Tareas();
}

size_t Usuario::getPassword(){
    return password;
}

string Usuario::getNombre(){
    return nombre;
}

bool Usuario::eliminarTarea(unsigned int tarea_id){
    int i = 0;
    for(auto t : lt){
        if(t.getTarea_id() == tarea_id){
            lt.erase(lt.begin()+i);
            return 1;
        }
        i++;
    }
    return 0;
}

void Usuario::showInf(int i){
    if(i==lt.size())
        return;
    lt[i].mostrarInfo();
    showInf(++i);
}

bool f(Tarea t){
    if(p == t.getPrioridad())
        return 1;
    return 0;
};

Lista_Tareas* Usuario::filter(int prioridad){
    p = prioridad;
    Lista_Tareas *ltt;
    ltt = lt.filtrar_Tareas(f);
    return ltt;
}

void Usuario::mostrar(){
    cout << "Nombre: " << nombre << '\n';
    cout << "Password: " << password << '\n';
}
