// File Name: card.h
//
// Author: Jill Seaman
//    Modified from a program written by Owen Astrachan and Roger Priebe
// Date: 7/3/2013
// Assignment Number: 1
// CS3358 Spring 2015
// Instructor: Jill Seaman
//
// This class represents a playing card, i.e., "ace of spades"
// A Card is constructed from a rank (int in range 1..13)
// and a suit (Card::spades, Card::hearts, Card::diamonds, Card::clubs)
//
// Note that the Ace is represented by 1 and the King by 13

#ifndef _CARD_H
#define _CARD_H


#include <iostream>
#include <string>
using namespace std;

class Card
{
  public:

    enum Suit {spades, hearts, diamonds, clubs};

    Card();                     // default: ace of spades

    Card(int, Suit);

    string toString()   const;  // return string version: Ac 4h Js
    int   getRank()     const;  // return rank, 1..13
    Suit  getSuit()     const;  // return suit


    bool operator == (const Card &rhs) const;

  private:

    int rank;
    Suit suit;

    string suitString()  const;  // return "s", "h",...
    string rankString()  const;  // return "A", "2", ..."Q"

};

#endif
