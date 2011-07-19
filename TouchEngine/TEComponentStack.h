//
//  TEComponentStack.h
//  TouchEngine
//
//  Created by geminileft on 7/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef TECOMPONENTSTACK
#define TECOMPONENTSTACK

#include "TEComponent.h"

#define CARD_OFFSET 40

class PlayingCard;

enum StackType {
    FreeCell
    , AceCell
    , TableCell
    , Card
};

typedef enum StackType StackType;

class TEComponentStack : public TEComponent {

public:
	bool isEvaluateReady;
	virtual int getStackOffset(bool isFirst) = 0;
	bool doesAccept(TEComponentStack* stack);

private:
	StackType mStackType;
	PlayingCard* mCard;
	TEComponentStack* mChildStack;
	TEComponentStack* mParentStack;
	bool mTopStack;	
};	

#endif