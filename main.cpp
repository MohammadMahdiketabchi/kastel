#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace  std;
int cupl ;

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
    int namayeshgah[6] = {0,0,0,0,0,0};
    string nameofcartn[6] = {"","","","","",""};
}player1;

struct player2
{
    int numofcart[3];
    string namofcart[3];
    int namayeshgah[6] = {0,0,0,0,0,0};
    string nameofcartn[6] = {"","","","","",""};
}player2;

void giving_cart_first_p1()
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
void giving_cart_first_p2()
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
            player2.namofcart[i] = "kalekado";
             n = rand() % 30;
            player2.numofcart[i] = kalekado.pointofcart[n];
            kalekado.deletenum(n);
            break;
        case 2 :
            player2.namofcart[i] = "gorbegor";
             n = rand() % 30;
            player2.numofcart[i] = gorbegor.pointofcart[n];
            gorbegor.deletenum(n);
            break;
        case 3 :
            player2.namofcart[i] = "kohnepich";
             n = rand() % 30;
            player2.numofcart[i] = kohnepich.pointofcart[n];
            kohnepich.deletenum(n);
            break;

        }
    }
}
void showcartp1()
{
    cout<<"your 3 cart is " << player1.numofcart[0] <<" " << player1.namofcart[0] << player1.numofcart[1] <<" " << player1.namofcart[1] << player1.numofcart[2] <<" " << player1.namofcart[2] <<endl ;
    cout<<"your display room is " << player1.namayeshgah[0] << " " << player1.nameofcartn[0] << player1.namayeshgah[1] << " " << player1.nameofcartn[1];
    cout<< player1.namayeshgah[2] << " " << player1.nameofcartn[2] <<player1.namayeshgah[3] << " " << player1.nameofcartn[3] << player1.namayeshgah[4] << " " << player1.nameofcartn[4] << player1.namayeshgah[5] << " " << player1.nameofcartn[5]<<endl;
    cout<<"rival display room is " << player2.namayeshgah[0] << " " << player2.nameofcartn[0] << player2.namayeshgah[1] << " " << player2.nameofcartn[1];
    cout<< player2.namayeshgah[2] << " " << player2.nameofcartn[2] <<player2.namayeshgah[3] << " " << player2.nameofcartn[3] << player2.namayeshgah[4] << " " << player2.nameofcartn[4] << player2.namayeshgah[5] << " " << player2.nameofcartn[5]<<endl;
}

void showcartp2()
{
    cout<<"your 3 cart is " << player2.numofcart[0] <<" " << player2.namofcart[0] << player2.numofcart[1] <<" " << player2.namofcart[1] << player2.numofcart[2] <<" " << player2.namofcart[2] <<endl ;
    cout<<"your display room is " << player2.namayeshgah[0] << " " << player2.nameofcartn[0] << player2.namayeshgah[1] << " " << player2.nameofcartn[1];
    cout<< player2.namayeshgah[2] << " " << player2.nameofcartn[2] <<player2.namayeshgah[3] << " " << player2.nameofcartn[3] << player2.namayeshgah[4] << " " << player2.nameofcartn[4] << player2.namayeshgah[5] << " " << player2.nameofcartn[5]<<endl;
    cout<<"rival display room is " << player1.namayeshgah[0] << " " << player1.nameofcartn[0] << player1.namayeshgah[1] << " " << player1.nameofcartn[1];
    cout<< player1.namayeshgah[2] << " " << player1.nameofcartn[2] <<player1.namayeshgah[3] << " " << player1.nameofcartn[3] << player1.namayeshgah[4] << " " << player1.nameofcartn[4] << player1.namayeshgah[5] << " " << player1.nameofcartn[5]<<endl;
}
void play()
{
    bool p = true;
    giving_cart_first_p1();
    giving_cart_first_p2();
    cupl=1;
     int i=0,j=0;
    int wc,yr;
    while(p)
    {
    if(cupl==1)
        showcartp1();
    else
        showcartp2();

    cout << "you are player "<<cupl <<"which is your choice  1, 2, 3" <<endl;
    cin >>wc;
    cout << "in your display room or rival, 1 for you , and 2 for rival " << endl;
    cin >>yr;
    if( yr == 1)
    {
        int no;
        cout << "(1) for new display room (2) for old "<<endl;
        cin>>no;
        if(cupl==1)
        {
            if(no == 1)
            {
                player1.namayeshgah[i] = player1.numofcart[wc];
                player1.nameofcartn[i] = player1.namofcart[wc];
            }
        }
    }
    }

}

int main()
{


    return 0;
}
