#include "Xtron.h"

Xtron xn;

int main()
{
    xn.init();

    int state = 0;

    while(1)
    {
        xn.io.ledRed.setDigitalValue(state);
        fiber_sleep(1000);
        state = !state;
    }
}
