#pragma once
//Cards - foundation for card game
// Player definition - player in a card game

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "card.h"

using namespace std;

class Player
{
public:
	Player(const string& name = "");
	//return name
	const string& GetName() const;
	//displays name and all cards
	void Display() const;
	//adds a card
	void AddCard(const Card& aCard);
	//trasfer card to other player
	void TransferCard(Player& other);

protected:
	string m_Name;			//name
	vector<Card> m_Cards;	//cards
};

#endif

