//
//  main.cpp
//  Exercice_2
//
//  Created by Alexandre Leuthreau on 18/11/2021.
//

#include <iostream>

using namespace std;

//Afficher état d'un produit entre 2 nombres réels
int main() {
    
    double a, b;
    
    cout<<"Entrez une valeur pour A = "<<endl;
    cin>>a;
    cout<<"Entrez une valeur pour B = "<<endl;
    cin>>b;
    
    if ((a > 0 && b < 0) || (a < 0 && b > 0))
    {
        cout<<"Le produit est négatif";
    }
    else if (a > 0 && b > 0)
    {
        cout<<"Le produit est positif";
    }
    else if((a == 0 && b > 0) || (a == 0 && b < 0) || (a > 0 && b == 0) || (a < 0 && b == 0) || ( a == 0 && b == 0))
    {
        cout<<"Le résultat est nul";
    }
    else
    {
        cout<<"Error";
    }
    return 0;
}
