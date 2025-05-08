#include <iostream>
using namespace std;

int main(){
    float Sueldo;
    int Sueldo2, opciones;

    //Preguntar opciones

    cout << "Selecciona un servicio a utilizar " << endl;
    cout << "1- Seguro de vida" << endl;
    cout << "2- Seguro por muerte" << endl;
    cout << "3- Gastos funerarios" << endl;
    cout << "4- Seguro por invalidez" << endl;
    cin >> opciones;

    //Utilizar el switch para las diferentes opciones

    switch (opciones){
    case 1:
        cout << "Cuanto es su salario ";
        cin >> Sueldo;

    //Limitar el seguro de vida por el salario del cliente
    if (Sueldo <=910.00){
        cout << "Su monto de seguro es: $10,000" << endl;

    } else if (Sueldo >910 && Sueldo <=1255){
        cout << "Su monto de seguro es: $14,000" << endl;
        
    } else if (Sueldo >1255 && Sueldo <=1630){
        cout << "Su monto de seguro es: $18,000.00" << endl;
        
    } else if (Sueldo >1630){
        cout << "Su monto de seguro es: $22,000.00" << endl;
        
    }    
    break;
    
    // CASO 222222

    case 2:
        cout << "Cuanto es su salario ";
        cin >> Sueldo;

    //Limitar el seguro de vida por el salario del cliente
    if (Sueldo <=910.00){
        cout << "En caso de una muerte por cualquier motivo, la empresa le obtergara la cantidad de: $10,000" << endl;
    
    } else if (Sueldo >910 && Sueldo <=1255){
        cout << "En caso de una muerte por cualquier motivo, la empresa le obtergara la cantidad de: $14,000" << endl;
        
    } else if (Sueldo >1255 && Sueldo <=1630){
        cout << "En caso de una muerte por cualquier motivo, la empresa le obtergara la cantidad de: $18,000.00" << endl;
        
    } else if (Sueldo >1630){
        cout << "En caso de una muerte por cualquier motivo, la empresa le obtergara la cantidad de: $22,000.00" << endl;
    }
    break;

    //CASO 3333333333

    case 3:
    
    cout << "Cuanto es su salario" << endl;
    cin >> Sueldo2;
    
    if (Sueldo2 <=910.00){
        cout << "Su monto de seguro es: $10,000" << endl;
        cout << "En caso de gastos funerarios, la empresa le obtergara la cantidad de $" << 10000*0.15 << endl;
        
    } else if (Sueldo2 >910 && Sueldo2 <=1255){
        cout << "Su monto de seguro es: $14,000" << endl;
        cout << "En caso de gastos funerarios, la empresa le obtergara la cantidad de $" << 14000*0.15 << endl;
        cout << "Pero no se podria obtorgar porque el monto maximo es de $1750";

    } else if (Sueldo2 >1255 && Sueldo2 <=1630){
        cout << "Su monto de seguro es: $18,000.00" << endl;
        cout << "En caso de gastos funerarios, la empresa le obtergara la cantidad de $" << 18000*0.15 << endl;
        cout << "Pero no se podria obtorgar porque el monto maximo es de $1750";
    
    } else if (Sueldo2 >1630){
        cout << "Su monto de seguro es: $22,000.00" << endl;
        cout << "En caso de gastos funerarios, la empresa le obtergara la cantidad de $" << 22000*0.15 << endl;
        cout << "Pero no se podria obtorgar porque el monto maximo es de $1750";          
    }
    break;  

    // CASO 44444444444
    
    case 4:
    
    cout << "Cuanto es su salario" << endl;
    cin >> Sueldo2;
    
    if (Sueldo2 <=910.00){
        cout << "Su monto de seguro es: $10,000" << endl;
        cout << "En caso de una invalidez total o parcial ,la empresa le obtorgara el 50 por ciento que es: $" << 10000*0.50 << endl;
        cout << "Los siguientes 12 meses la empresa le dara lo restante " << 5000/12 << " Cada mes" << endl;

        
    } else if (Sueldo2 >910 && Sueldo2 <=1255){
        cout << "Su monto de seguro es: $14,000" << endl;
        cout << "En caso de una invalidez total o parcial ,la empresa le obtorgara el 50 por ciento que es: $" << 14000*0.50 << endl;
        cout << "Los siguientes 12 meses la empresa le dara lo restante " << 7000/12 << " Cada mes" << endl;


    } else if (Sueldo2 >1255 && Sueldo2 <=1630){
        cout << "Su monto de seguro es: $18,000.00" << endl;
        cout << "En caso de una invalidez total o parcial ,la empresa le obtorgara el 50 por ciento que es: $" << 18000*0.50 << endl;
        cout << "Los siguientes 12 meses la empresa le dara lo restante " << 9000/12 << " Cada mes" << endl;

    } else if (Sueldo2 >1630){
        cout << "Su monto de seguro es: $22,000.00" << endl;
        cout << "En caso de una invalidez total o parcial ,la empresa le obtorgara el 50 por ciento que es: $" << 22000*0.50 << endl;
        cout << "Los siguientes 12 meses la empresa le dara lo restante que es " << 11000/12 << " Cada mes" << endl;   
    }
    break;  

    default: 
        break;

    }
    
    return 0;
}