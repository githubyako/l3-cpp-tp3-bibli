#include <iostream>
#include "bibliotheque.h"

int main(int argc, char **argv) {
    
    Livre book1(0,"Moby Dick","Melville",350);
    Livre book2(book1);
    cout << book2.calculercost() << "\n\n\n";
    
    
    Periodique per1("Picsou magasine", "staline", 55, 8);
    Periodique per2(per1);
    
      cout << per2.calculercost() << "\n\n\n";
    
    Video vid1(1, "Batman","Nolan",BluRay3D);
    Video vid2(vid1);
    
    cout << vid2.calculercost() << "\n\n";
    return 0;
}
