#pragma once

// Cards - foundation for card game
// Card definition - playing card

#ifndef CARD_H
#define CARD_H

	class Card
	{
	public:
		enum rank { ACE, TWO, Three, Four, Five, SIX, SEVEN, Eight, NINE, TEN, JACK, QUEEN, KING };
		enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };

		Card(rank r = ACE, suit s = SPADES);
		//returns rank
		rank GetRank() const;
		//returns suit
		suit GetSuit() const;
		//displays card
		void Display() const;

	protected:
		rank m_Rank;	//rank
		suit m_Suit;	//suit
	};

#endif

