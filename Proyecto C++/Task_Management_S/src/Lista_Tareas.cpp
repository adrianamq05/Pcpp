#include "Lista_Tareas.h"

Lista_Tareas::Lista_Tareas(): vector()
{

}

Lista_Tareas* Lista_Tareas::filtrar_Tareas(bool (*f)(Tarea)){
    Lista_Tareas* tareas = new Lista_Tareas();
    for(vector<Tarea>::iterator i = this->begin(); i!=this->end(); i++){
        if(f(*i))
            tareas->push_back(*i);
    }
    return tareas;
}
