// File Name: crazy_eights.cpp
//
// Author: Brock Yarbrough
// Date: 02/08/2015
// Assignment Number: 1
// CS 3358 Spring 2015
// Instructor: Jill Seaman
//
// driver that simulates the playing of the game

#include"player.h"
#include"deck.h"

void checkCards(Player &, Card &, bool &);

Deck d; // deck to be used throughout game.

int main()
{
   Player p1("Superman");  // 1st player in the game
   Player p2("Batman");    // 2nd player in the game
   const int NUMBER_OF_CARDS = 7; // number of cards to be dealt
   bool gameover = false;  // the game keeps going until true


   for (int i = 0; i < NUMBER_OF_CARDS; ++i)
   {
	   p1.addCard(d.dealCard());
	   p2.addCard(d.dealCard());
   }

   Card discard = d.dealCard();  // card on top of the discard pile

   cout << p1.getName() << " has:" << p1.showHand() << endl;
   cout << p2.getName() << " has:" << p2.showHand() << endl;
   cout << "The discard pile contains: " << discard.toString() << endl;

   while (!gameover)
   {
      checkCards(p1,discard,gameover);
      checkCards(p2,discard,gameover);
   }


   return 0;
}

//***********************************************************
// void checkCards(Player &p, Card &c, bool &go): checks if
// the player has a playable card in their hand. if not the
// player draws until a playable card is drawn
// param-1 Player p, the player whose turn it is
// param-2 Card c, the card on top of the discard pile
// param-3 bool go, says if the game is over
// returns: nothing, void
//***********************************************************
void checkCards(Player &p, Card &c, bool &go)
{

if (go == false)
{
   bool hascard = false; // if player has a playable card
   Card drawncard;  // card drawn from deck
   while (!hascard)
   {
	if (p.hasCardWithRank(c.getRank(), c) || p.hasCardWithSuit(c.getSuit(),c))
		{
		     p.removeCardFromHand(c);
		     cout << p.getName() << " plays a " << c.toString() << endl;
		     hascard = true;
		}
	else if (d.size() == 0)
	{
		go = true;
		hascard=true;
		cout << "Its a Draw!!" << endl;
	}
	else
	{
	  drawncard = d.dealCard();
	  p.addCard(drawncard);
	  cout << p.getName() << " draws " << drawncard.toString() << endl;
	}
   }

   if (p.getHandSize() == 0)
   {
	   go = true;
	   cout << p.getName() << " wins!!" << endl;
   }
}

}
