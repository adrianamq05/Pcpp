#include <iostream>
#include <string>
#include <vector>
#include "Tarea.h"
#include "Lista_Tareas.h"
#include "Usuario.h"
#include "Premium.h"
#include "Random.h"
#include <map>
using namespace std;

map<string,Usuario *> M;

void intro(){
    cout << "****************************************************" << '\n';
    cout << "****   WELCOME TO THE TASKS MANAGEMENT SYSTEM   ****" << '\n';
    cout << "****               BY ADRIANA                   ****" << '\n';
    cout << "****************************************************" << '\n';

}

void user(){
    cout << "ENTER THE AMOUNT OF USERS: " << '\n';
}

void menu(){
    cout << "************" << '\n';
    cout << "*** MENU ***" << '\n';
    cout << "************" << '\n';
    cout << "PRESS: \n";
    cout << "1. ADD TASK \n";
    cout << "2. DELETE TASK \n";
    cout << "3. FILTER TASK BY PRIORITY \n";
    cout << "4. SHOW ALL TASKS \n";
    cout << "0. EXIT \n";
}

bool check(string *s){
    cout << "ENTER NAME AND PASSWORD OF USER \n";
    string n,p;
    cin >> n >> p;
    if(M.find(n) != M.end()){
        hash<string> hasher;
        size_t pass;
        pass = hasher(p);
        if(pass == M[n]->getPassword())
            *s = n;
            return true;
    }
    return false;
}

int main()
{
    intro();

    user();

    int a;
    cin >> a;
    Usuario* u;
    for(int i=0; i < a; i++){
        system("cls");
        intro();
        cout << "ENTER 0 IF USER IS RANDOM OR ENTER 1 IF USER IS PREMIUM \n";
        bool b;
        cin >> b;
        cout << "ENTER USER NAME AND PASSWORD IN THAT ORDER \n";
        if(b){
            string n,p;
            cin >> n >> p;
            u = new Premium(n,p);
            M[n] = u;

        }
        else{
            string n,p;
            cin >> n >> p;
            u = new Random(n,p);
            M[n] = u;
        }
        system("cls");
    }

   int x;
    do{
        system("cls");
        menu();
        cin >> x;
        string e;
        if(check(&e)){
            if(x == 1){
                cout << "ENTER THE TITLE OF THE TASK YOU WANT TO ADD \n";
                string titulo;
                cin >> titulo;
                cout << "ENTER THE DESCRIPTION OF THE TASK YOU WANT TO ADD \n";
                string descripcion;
                cin >> descripcion;
                cout << "ENTER THE EXPIRE DATE OF THE TASK YOU WANT TO ADD \n";
                string fecha_vencimiento;
                cin >> fecha_vencimiento;
                cout << "ENTER THE PRIORITY OF THE TASK YOU WANT TO ADD \n";
                int prioridad;
                cin >> prioridad;
                Tarea t(titulo,descripcion,fecha_vencimiento,prioridad);
                u->addTarea(t);
                system("pause > null");
            }else if(x == 2){
                u->showInf(0);
                cout << "ENTER THE ID OF THE TASK YOU WANT TO DELETE \n";
                unsigned int j;
                cin >> j;
                u->eliminarTarea(j);
                cout << "THE TASK WAS DELETED CORRECTLY \n";
                system("pause > null");
            }else if(x == 3){
                cout << "ENTER THE PRIORITY YOU WANT TO FILTER YOUR TASKS BY \n";
                int d; cin >> d;
                Lista_Tareas* y = u->filter(d);
                for(int i =0; i < y->size(); i++){
                    (*y)[i].mostrarInfo();
                }
                break;
            }else if(x == 4){
                cout << "THESE ARE ALL YOUR TASKS: \n";
                u->showInf(0);
                system("pause > null");
            }else if(x == 0){
                cout << "YOU GOT OUT OF THE SYSTEM \n";
                system("pause > null");
                return 0;
            }else{
                cout << "WRONG NUMBER, TRY AGAIN \n";
                menu();
            }
        }


    }while(x != 0);



    return 0;
}
