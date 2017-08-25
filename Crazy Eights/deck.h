// File Name: deck.h
//
// Author: Jill Seaman
//    Modified from a program written by Owen Astrachan and Roger Priebe
// Date: 7/3/2013
// Assignment Number: 1
// CS3358 Spring 2015
// Instructor: Jill Seaman
//
// This class respresents a deck of cards
// When a Deck is constructed, it contains 52 cards,
//  shuffled into a random order

#ifndef _DECK_H
#define _DECK_H

#include "card.h"

class Deck
{
  static const int SIZE = 52;

  public:

    Deck();            // pristine, shuffled deck (cards in random order)

    Card dealCard();   // get a card, after 52 are dealt, fail

    int size() const;  // # cards left in the deck

  private:

    Card cards[SIZE];  // ARRAY
    int index;         // current card to deal
};

#endif

