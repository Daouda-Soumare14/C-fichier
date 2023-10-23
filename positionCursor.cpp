#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fichier("ecrireDansFichier.txt");

    int position = fichier.tellp(); //On récupère la position

    cout << "Nous nous situons au " << position << "eme caractere du fichier." << endl;
}