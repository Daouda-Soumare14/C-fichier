#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main()
{
   ifstream fichier("ecrireDansFichier.txt");

   if(fichier)
   {
        //L'ouverture s'est bien passée, on peut donc lire

        string ligne; //Une variable pour stocker les lignes lues
        getline(fichier, ligne);
   }
   else
   {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
        //flux.close();  //pour referme le fichier avant la fermeture automatique

   } // l'orsqu'on sort du bloc, le fichier est ferme automatiquement

   return 0;
}