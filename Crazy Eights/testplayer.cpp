/*#include"player.h"
#include"deck.h"

int main()
{
   Player p1("Carl");
   Player p2("John");
   Deck d;
   int numberofcards = 7;

   for (int i = 0; i < numberofcards; ++i)
   {
	   p1.addCard(d.dealCard());
	   p2.addCard(d.dealCard());
   }

   cout << endl << "The cards have been dealt!" << endl << endl;
   cout << p1.getName() << " has:" << p1.showHand() << endl;
   cout << p2.getName() << " has:" << p2.showHand() << endl;

Card top = d.dealCard();
cout << endl << "The top card is " << top.toString() << endl;
if (p1.hasCardWithRank(top.getRank(), top) || p1.hasCardWithSuit(top.getSuit(),top))
	{
	     p1.removeCardFromHand(top);
	     cout << endl << p1.getName() << " Plays: " << top.toString() << endl;
	}
else if (p2.hasCardWithRank(top.getRank(), top) || p2.hasCardWithSuit(top.getSuit(),top))
		{
		     p2.removeCardFromHand(top);
		     cout << endl << p2.getName() << " Plays: " << top.toString() << endl;
		}

   cout << endl << p1.getName() << " has:" << p1.showHand() << endl;
   cout << p2.getName() << " has:" << p2.showHand() << endl;

   top = d.dealCard();

   cout << top.toString();
	return 0;
}*/




