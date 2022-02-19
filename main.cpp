#include <iostream>

int main()
{
    std::cout << "hello world" << std::endl;
    std::cout << "il m\'a demander: \"comment vas-tu?\"" << std::endl;
    /*
    \n permet d'aller à la ligne
    \t fait une tabulation 
    */
   std::cout << "\t il fait beau... non ?" << std::endl; //test tabulation == ok !

   // Variable en C++:
   int reponse {42};
   std::cout << "La reponse universelle est " << reponse << std::endl;
   char lettre {'A'};
   std::cout << "La premiere lettre de l'alphabet est: " << lettre << std::endl;
   std::string phrase {"Bonjour et bienvenue dans ce cours de C++ ! "};
   std::cout << "Que fait on ici ?" << phrase << std::endl;
   // Autre syntaxe ancienne: type identificateur = valeur;
   int variable = 42;
   std::cout << "Test de variable: " << variable << std::endl;
   // Pour les constantes, l'utilisation de nom de variable en majuscule est un des standard!
   double const PI = 3.141592657;
   std::cout << "ADN ? dans..... -> " << PI << std::endl;
   // test erreur:
   // PI = 4;
   // renvoi: "main.cpp:27:7: error: assignment of read-only variable ‘PI’"

   // Manipulons les variables:
   int chiffreUn = 2;
   int chiffreDeux = 1;
   char lettreUne = 'S';
   std::string phraseTest = "Bienvenue dans l'hymalaya!";
   std::cout << "Tentons les manipulations: " << std::endl;
   int resultat = chiffreUn * (chiffreUn * chiffreDeux);
   if (resultat > 20) {
       std::cout << "Hey, il faut un " << lettreUne <<  "au pluriel" << std::endl;
   } else {
       std::cout << phraseTest << std::endl;
   }
   // les raccourcis += -= 
   int chiffre = 4;
   chiffre +=2;
   std::cout << "Le chiffre de départ vaut 4. +2 donne " << chiffre << std::endl;
   chiffre -=4;
   std::cout << "La nouvelle valeur vaut...2 (6-4)..." << chiffre << std::endl;
   chiffre *=3;
   std::cout << "Là, c'est plus du re 6..." << chiffre << std::endl;
   chiffre++;
   std::cout << "+1 avec le ++ comme dans c++..." << chiffre << std::endl;

   // il existe une méthode pour eviter de definir le type de variable (int, double, char...) -> auto
   auto entier = 546;
   std::cout << "on test auto... " << entier << std::endl;

   // Cas du std::string avec auto:

    // Écrivez cette ligne une seule fois.
    using namespace std::literals;

    // Puis vous pouvez déclarer autant de chaînes de caractères que vous voulez.
    auto chaine { "Du texte."s };
    auto autre_chaine { "Texte alternatif."s };
    auto encore_une_chaine { "Allez, un dernier pour la route."s };

    /*
    Si nous sommes obligés de rajouter le s en fin de littéral, c’est parce que nous avons affaire ici à un héritage du C. Sans celui-ci, le compilateur déduit que notre littéral est une chaîne de caractères comme en C et non comme étant une std::string. Nous en reparlerons au moment voulu, mais retenez que ce s est très important dès que vous utilisez auto.
    */

   // Les entrées en C++:
   std::cout << " Quel est ton âge ?" << std::endl;
   int age = 0;
   std::cin >> age;
   std::cout << "tu as " << age << " ans.\n";
   std::cout << "Comment tu tou pelle ?" << std::endl;
   std::string prenom = "";
   std::cin >> prenom;
   std::cout << "tu t'appelle "  << prenom << " et tu as " << age << " ans.\n" << std::endl;

   // chapitre suivant: bool et conditions
    return 0;
}