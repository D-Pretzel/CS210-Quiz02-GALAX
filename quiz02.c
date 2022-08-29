/** quiz02.c
* ===========================================================
*    Name: David Petzold
* Section: T6
* Purpose: Quiz 2
* ===========================================================
*/

#include <stdio.h>
#include "quiz02functs.h"

int main(void) {
    int Dn, Df;

    printf("Enter near distance: ");
    scanf("%i", &Dn);

    printf("Enter far distance: ");
    scanf("%i", &Df);

    printf("F-Stop is %.3lf\n", calculateFStop(Dn, Df));

    return 0;
}