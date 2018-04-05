
#include <iostream>

using namespace std;

int main()
{
    int a;
   int admin(int);
   int usuario(int);
   int reportes(int);
   cout<<"             menu           "<<endl;
   cout<<"1)Administración            "<<endl;
   cout<<"2)Usuario                   "<<endl;
   cout<<"3)Reportes                  "<<endl;
   cout<<"4)Salir                     "<<endl;
    cin>>a;
    if(a==1){
        int admin(a);
    }
    if(a==2){
        int usuario(a);
    }
    if(a==3){
        int reportes(a);
    }
    if(a==4){
        cout<<"se va a cerrar";
        return 0;
    }
    return 0;
}
