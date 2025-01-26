// In user/testnumvpnumpp.c
#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    //printf(1, "Virtual pages: %d\n", numvp());
    printf(1, "Physical pages: %d\n", numpp());
    exit();
}
