/***************************************************************************
 *                                                                         *
 *   Copyright (C) 2017 by Anav Mehta                                      *
 *                                                                         *
 *   http://3dwaffles.blogspot.com/2018/01/matchstick-game.html                                        *
 *                                                                         *
 ***************************************************************************/

#include <iostream>
using namespace std;


int drawmatches(int n)
{
    for(int i=0;i<n;i++) {
        cout << " | ";
    }
    cout << endl;
}
int main()
{
   int n;
   int pick;
   cout << "Computer is player 0 and starts first. Human is player 1" << endl;
   n = -1;
   while(n <= 0) {
        cout << "Enter the number of matches to be played" << endl;
        cin >> n;
   }

   int player = 0; //player 0 is computer



   while(n != 0)
   {
        cout << "Number of matches " << n;
        drawmatches(n);
        if(player == 0) {
            if((n % 4) != 0 ){
                pick = n % 4;
            }
            else {
                pick = 3; //doesnt matter computer will lose
            }
            cout << "Computer picked " << pick << endl;
        } else {
            cout << "Number of matches remaining=" << n << " player=" << player <<" to play (0=computer, 1=human) pick up the number of matches (1 or 2 or 3)" << endl;
            cin >> pick;
            if(pick != 1  && pick != 2 && pick != 3) {continue;}
        }


        n = n - pick;
        if(n == 0) {
            cout << "Player=" << player << " (0=computer, 1=human) won!";
            break;
        }
        player = 1 - player;


   }

}
