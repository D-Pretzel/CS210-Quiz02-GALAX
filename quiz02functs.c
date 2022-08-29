/** quiz02functs.c
* ===========================================================
*    Name: David Petzold
* Section: T6
* Purpose: Quiz 2
* ===========================================================
*/

double calculateFStop(int Dn, int Df){
    double i;

    i = (double) (2 * Dn * Df) / (double) (Dn + Df);

    return i;
}
