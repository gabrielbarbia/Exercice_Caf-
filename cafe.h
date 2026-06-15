using namespace std;
#ifndef CAFE_H
#define CAFE_H
#include <string>

class cafe
{
    private :
        string nom;
        string couleur;
    
    public :
        cafe();
        ~cafe();
        void couler(void); 
};

#endif