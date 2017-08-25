// File Name: player.cpp
//
// Author: Brock Yarbrough
// Date: 02/08/2015
// Assignment Number: 1
// CS 3358 Spring 2015
// Instructor: Jill Seaman
//
// A representation of a player in the game

#include"Player.h"
#include<iomanip>

//***********************************************************
// Player::Player(): constructor that creates a player
// default name "no name" is given
// returns: nothing void
//***********************************************************
Player::Player()
{
	name = "no name";
}

//***********************************************************
// string Player::showHand() const: shows the players cards
//
// returns: all the cards in the players hand
//***********************************************************
string Player::showHand() const
{
	string currenthand;  // the players hand

  for (int i = 0; i < hand.size(); ++i)
  {
	  currenthand.append("   ");
	  currenthand.append(hand[i].toString());
  }

  return currenthand;
}

//***********************************************************
// int Player::getHandSize() const: gets how manny cards the
// player has in their hand
//
// returns: the number of cards the player has
//***********************************************************
int Player::getHandSize() const
{
	return hand.size();
}

//***********************************************************
// void Player::addCard(Card c): adds a card to the players hand
//
// param-1 Card c, the card the player is adding to their hand.
// returns: nothing, void
//***********************************************************
void Player::addCard(Card c)
{
  hand.push_back(c);
}

//***********************************************************
// bool Player::removeCardFromHand(Card c): removes a card from
// the players hand
// param-1 Card c, the card to be removed from the players hand
// returns: if the card has been removed
//***********************************************************
bool Player::removeCardFromHand(Card c)
{
	bool cardremoved = false;  // if the card has been removed

	for (int i = 0; i < hand.size(); ++i)
	{
		if (hand[i] == c)
		{
          if (i == hand.size()-1)
          {
        	  hand.pop_back();
        	  break;
        	  cardremoved = true;
          }
          else
          {
        	  Card temp = hand[i];
        	  hand[i] = hand[hand.size()-1];
        	  hand[hand.size()-1] = temp;
        	  hand.pop_back();
        	  break;
        	  cardremoved = true;
          }
		}
	}

	return cardremoved;
}

//***********************************************************
// bool Player::hasCardWithRank(int r, Card &c1): checks if
// the player has a card with the rank passed to it
// param-1 rank r, the rank being compared to the players hand
// param-2 Card c1, the card whose rank being passed
// returns: if the player has the rank
//***********************************************************
bool Player::hasCardWithRank(int r, Card &c1)
{
  bool hasrank = false;   // if the player has the rank

  for (int i = 0; i < hand.size(); ++i)
  {
	  if (hand[i].getRank() == r)
	  {
		  hasrank = true;
		  c1 = hand[i];
	  }
  }

  if (hasrank == false)
  {
     for (int i = 0; i < hand.size(); ++i)
       {
  	    if (hand[i].getRank() == 8)
  	      {
  		    hasrank = true;
  		    c1 = hand[i];
  	      }
       }
  }

  return hasrank;
}

//***********************************************************
// bool Player::hasCardWithSuit(Card::Suit s, Card &c1):
// checks if the player has a card with the suit passed
// param-1 Suit s, the suit being compared to the players hand
// param-2 Card c1, the card with the suit being passed
// returns: if the player has a card with the suit
//***********************************************************
bool Player::hasCardWithSuit(Card::Suit s, Card &c1)
{
	bool hassuit = false;  // if the player has the suit

	  for (int i = 0; i < hand.size(); ++i)
	  {
		  if (hand[i].getSuit() == s)
		  {
			  hassuit = true;
			  c1 = hand[i];
		  }
	  }

	  return hassuit;
}
