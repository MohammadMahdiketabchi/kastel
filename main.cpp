#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace  std;

struct kalekado
{
    int pointofcart[30] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,15};
}kalekado;

struct gorbegor
{
    int pointofcart[30] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,15};
}gorbegor;

struct kohnepich
{
    int pointofcart[30] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,15};
}kohnepich;

struct player1
{
    int numofcart[3];
    string namofcart[3];
    int namayeshgah[6];
    string nameofcart[6];
}player1;

struct player2
{
    int numofcart[3];
    string namofcart[3];
    int namayeshgah[6];
    string nameofcart[6];
}player2;



int main()
{
    cout << kalekado.pointofcart[1];

    return 0;
}
