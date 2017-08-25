// File Name: card.cpp
//
// Author: Brock Yarbrough
// Date: 02/08/2015
// Assignment Number: 1
// CS 3358 Spring 2015
// Instructor: Jill Seaman
//
// A representation of a playing card


#include "card.h"
#include<sstream>

//***********************************************************
// Card::Card: constructor that sets the default card to
//             Ace of spades
//
// returns: nothing void.
//***********************************************************
Card::Card()
{
	rank = 1;
	suit = spades;
}

//***********************************************************
// Card::Card(int r, Card::Suit s): constructor that creates
//                                  a card
// param-1 rank: rank of the card 1-13
// param-2 suit: suit of the card, ace spades hearts diamonds
//
// returns: nothing void
//***********************************************************
Card::Card(int r, Card::Suit s)
{
	rank = r;
	Card::suit = s;
}

//***********************************************************
// string Card::toString() const: turns card into string
// consisting of rank and suit eg. Jh
//
// returns: Card rank and suit as a string
//***********************************************************
string Card::toString() const
{
   string wholecard; // the card in complete string format
   string suitletter; // the suit in string format
   string suitrank;  // the rank in string format

   suitletter = suitString();
   suitrank = rankString();

   wholecard.append(suitrank);
   wholecard.append(suitletter);

   return wholecard;
}

//***********************************************************
// int Card::getRank() const: gets the rank of the card
//
// returns: returns the rank of the card
//***********************************************************
int Card::getRank() const
{
	return rank;
}

//***********************************************************
// Card::Suit Card::getSuit() const: gets the suit of the card
//
// returns: the suit of the card
//***********************************************************
Card::Suit Card::getSuit() const
{
	return Card::suit;
}

//***********************************************************
// string Card::suitString() const: changes suit to string
//
// returns: suit in string format
//***********************************************************
string Card::suitString() const
{
	string suitletter;

	if (suit == spades)
	{
		suitletter = "s";
	}
	else if (suit == hearts)
	{
		suitletter = "h";
	}
	else if (suit == diamonds)
	{
		suitletter = "d";
	}
	else
	{
		suitletter = "c";
	}

	return suitletter;
}

//***********************************************************
// rankString:  returns a card rank as "A", "2", ..."J", "Q", "K"
// r: a rank (1-13)
// returns the rank of the parameter as a string.
//***********************************************************
string Card::rankString() const
{
	string suitrank;
    stringstream convert;

    if (rank == 1)
    {
    	suitrank = "A";
    }
    else if (rank == 11)
    {
    	suitrank = "J";
    }
    else if (rank == 12)
    {
    	suitrank = "Q";
    }
    else if (rank == 13)
    {
    	suitrank = "K";
    }
    else
    {
 	    convert << rank;
   	    suitrank = convert.str();

    }


	return suitrank;
}

//***********************************************************
// bool Card::operator==(const Card &rhs) const: compares cards
//
// returns: if both cards rank and suit are the same.
//***********************************************************
bool Card::operator==(const Card &rhs) const
{
	return suit == rhs.suit && rank == rhs.rank;
}

