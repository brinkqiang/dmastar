
#include "dmastar.h"

int main( int argc, char* argv[] ) {

    Idmastar* module = dmastarGetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
