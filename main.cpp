#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace  std;

struct kalekado
{
    int s = 30;
   int *pointofcart = new int[s];
   kalekado()
   {
       pointofcart[0] = 1;
       pointofcart[1] = 1;
       pointofcart[2] = 2;
       pointofcart[3] = 2;
       pointofcart[4] = 3;
       pointofcart[5] = 3;
       pointofcart[6] = 4;
       pointofcart[7] = 4;
       pointofcart[8] = 5;
       pointofcart[9] = 5;
       pointofcart[10] = 6;
       pointofcart[11] = 6;
       pointofcart[12] = 7;
       pointofcart[13] = 7;
       pointofcart[14] = 8;
       pointofcart[15] = 8;
       pointofcart[16] = 9;
       pointofcart[17] = 9;
       pointofcart[18] = 10;
       pointofcart[19] = 10;
       pointofcart[20] = 11;
       pointofcart[21] = 11;
       pointofcart[22] = 12;
       pointofcart[23] = 12;
       pointofcart[24] = 13;
       pointofcart[25] = 13;
       pointofcart[26] = 14;
       pointofcart[27] = 14;
       pointofcart[28] = 15;
       pointofcart[29] = 15;


   }
   void deletenum(int n)
   {
       --s;
       for(int i=0; i<s; i++)
         {
             if(i==n)
             {
                 for(int j=i; j<s; j++)
                     pointofcart[j]=pointofcart[j+1];
             }

         }

   }

}kalekado;

struct gorbegor
{
    int s = 30;
   int *pointofcart = new int[s];
   gorbegor()
   {
       pointofcart[0] = 1;
       pointofcart[1] = 1;
       pointofcart[2] = 2;
       pointofcart[3] = 2;
       pointofcart[4] = 3;
       pointofcart[5] = 3;
       pointofcart[6] = 4;
       pointofcart[7] = 4;
       pointofcart[8] = 5;
       pointofcart[9] = 5;
       pointofcart[10] = 6;
       pointofcart[11] = 6;
       pointofcart[12] = 7;
       pointofcart[13] = 7;
       pointofcart[14] = 8;
       pointofcart[15] = 8;
       pointofcart[16] = 9;
       pointofcart[17] = 9;
       pointofcart[18] = 10;
       pointofcart[19] = 10;
       pointofcart[20] = 11;
       pointofcart[21] = 11;
       pointofcart[22] = 12;
       pointofcart[23] = 12;
       pointofcart[24] = 13;
       pointofcart[25] = 13;
       pointofcart[26] = 14;
       pointofcart[27] = 14;
       pointofcart[28] = 15;
       pointofcart[29] = 15;


   }
   void deletenum(int n)
   {
       --s;
       for(int i=0; i<s; i++)
         {
             if(i==n)
             {
                 for(int j=i; j<s; j++)
                     pointofcart[j]=pointofcart[j+1];
             }

         }

   }
}gorbegor;

struct kohnepich
{
    int s = 30;
   int *pointofcart = new int[s];
   kohnepich()
   {
       pointofcart[0] = 1;
       pointofcart[1] = 1;
       pointofcart[2] = 2;
       pointofcart[3] = 2;
       pointofcart[4] = 3;
       pointofcart[5] = 3;
       pointofcart[6] = 4;
       pointofcart[7] = 4;
       pointofcart[8] = 5;
       pointofcart[9] = 5;
       pointofcart[10] = 6;
       pointofcart[11] = 6;
       pointofcart[12] = 7;
       pointofcart[13] = 7;
       pointofcart[14] = 8;
       pointofcart[15] = 8;
       pointofcart[16] = 9;
       pointofcart[17] = 9;
       pointofcart[18] = 10;
       pointofcart[19] = 10;
       pointofcart[20] = 11;
       pointofcart[21] = 11;
       pointofcart[22] = 12;
       pointofcart[23] = 12;
       pointofcart[24] = 13;
       pointofcart[25] = 13;
       pointofcart[26] = 14;
       pointofcart[27] = 14;
       pointofcart[28] = 15;
       pointofcart[29] = 15;


   }
   void deletenum(int n)
   {
       --s;
       for(int i=0; i<s; i++)
         {
             if(i==n)
             {
                 for(int j=i; j<s; j++)
                     pointofcart[j]=pointofcart[j+1];
             }

         }

   }
}kohnepich;

struct player1
{
    int numofcart[3];
    string namofcart[3];
    int namayeshgah[6];
    string nameofcartn[6];
}player1;

struct player2
{
    int numofcart[3];
    string namofcart[3];
    int namayeshgah[6];
    string nameofcartn[6];
}player2;

void giving_cart_first()
{
    int a[3];

    a[0] = (rand() % 3) + 1;
    a[1] = (rand() % 3) + 1;
    a[2] = (rand() % 3) + 1;
    for(int i=0; i<3; i++)
    {
        switch (a[i])
        {
        int n;
        case 1 :
            player1.namofcart[i] = "kalekado";
             n = rand() % 30;
            player1.numofcart[i] = kalekado.pointofcart[n];
            kalekado.deletenum(n);
            break;
        case 2 :
            player1.namofcart[i] = "gorbegor";
             n = rand() % 30;
            player1.numofcart[i] = gorbegor.pointofcart[n];
            gorbegor.deletenum(n);
            break;
        case 3 :
            player1.namofcart[i] = "kohnepich";
             n = rand() % 30;
            player1.numofcart[i] = kohnepich.pointofcart[n];
            kohnepich.deletenum(n);
            break;

        }
    }
}

int main()
{


    return 0;
}
