// In user/testnumvpnumpp.c
#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    printf(1, "Number of virtual pages: %d\n", numvp());
    //printf(1, "Number of physical pages: %d\n", numpp());
    exit();
}
