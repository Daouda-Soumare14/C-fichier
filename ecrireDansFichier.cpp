#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string const nomFichier("ecrireDansFichier.txt");

    ofstream monFlux(nomFichier.c_str(), ios::app); //Déclaration d'un flux permettant d'écrire dans un fichier.
    // ios::app veut dire q'on ajoute des infos a la fin du fichier (app = append qui signifie ajoute a la fin)

    if(monFlux)  //On teste si tout est OK
    {
        monFlux <<"Bonjour daouda soumare"<<endl;
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(36);
        monFlux << "J'ai " << age << " ans." << endl;
        monFlux <<"envie de dormir"<<endl;

    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}