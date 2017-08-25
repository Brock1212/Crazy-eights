// File Name: deck.cpp
//
// Author: Brock Yarbrough
// Date: 02/08/2015
// Assignment Number: 1
// CS 3358 Spring 2015
// Instructor: Jill Seaman
//
// The deck used during the game

#include"deck.h"
#include<cstdlib>
#include<ctime>
#include<cassert>

//***********************************************************
// Deck::Deck(): constructor that creates and shuffles a deck
// the deck is an array of cards
// returns: nothing, void
//***********************************************************
Deck::Deck()
{
   int numberofcards=0;        // number of cards that have been created
   int cardnumber;            // the rank of the card
   int numberofhearts = 0;    // number of hearts already created
   int numberofdiamonds = 0;  // number of diamonds already created
   int numberofspades = 0;    // number of spades already created
   int numberofclubs = 0;     //number of clubs already created

   srand(time(NULL));


   for (int i = 0; i < SIZE; i = numberofcards)
   {
	   for (int j = 0; j < 13; ++j)
	   {
           cardnumber = j+1;

	      if (numberofhearts < 13)
	      {
		      Card temp(cardnumber,Card::hearts);
		      cards[i] = temp;
		      ++numberofhearts;
		      ++numberofcards;
		      ++i;
	      }
	      else if (numberofdiamonds < 13)
	      {
	          Card temp(cardnumber,Card::diamonds);
	          cards[i] = temp;
	          ++numberofdiamonds;
	          ++numberofcards;
	          ++i;
	      }
	      else if (numberofspades < 13)
	      {
		      Card temp(cardnumber,Card::spades);
		      cards[i] = temp;
		      ++numberofspades;
		      ++numberofcards;
		      ++i;
	      }
	      else if (numberofclubs < 13)
	      {
		      Card temp(cardnumber,Card::clubs);
		      cards[i] = temp;
		      ++numberofclubs;
		      ++numberofcards;
		      ++i;
	      }
	   }
   }

   for (int i = 0; i < SIZE; ++i)
      {
       int j = rand() % SIZE;
       Card temp = cards[i];
       cards[i] = cards[j];
       cards[j] = temp;
      }

   index = 0;

}

//***********************************************************
// Card Deck::dealCard(): deals the top card in the deck.
// the top card is pointed to by the index
// returns: the top card in the deck
//***********************************************************
Card Deck::dealCard()
{
	assert (size() > 0);
	Card topcard;  // card on top of the deck

	for (int i = 0; i < SIZE; ++i)
	{
       if (i == index)
       {
         topcard = cards[i];
         break;
       }
	}

	++index;

	return topcard;
}

//***********************************************************
// int Deck::size() const: gets how many cards remain in the deck
//
// returns: the size of the deck
//***********************************************************
int Deck::size() const
{
   int cardsleft=52;  // cards left in the deck

   cardsleft = SIZE - index;

   return cardsleft;
}


