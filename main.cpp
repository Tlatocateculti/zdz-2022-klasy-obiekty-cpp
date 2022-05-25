#include "menu.h"



int main()
{
    Menu m;
    for(;;) {
        if(m.setMenu()) break;
    }

    return 0;

}
