using namespace std;
#include "cafe.h"
#include <string>
#include <iostream>

cafe::cafe()
{
    nom = "machine_1";
    couleur = "rouge";
}

cafe::~cafe()
{
}

void cafe::couler(void)
{
    cout <<"Je coule" <<endl;
}