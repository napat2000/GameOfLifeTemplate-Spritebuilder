//
//  Creature.h
//  GameOfLife
//
//  Created by Napat Boonsaeng on 7/1/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

@property (nonatomic, assign) BOOL isAlive;

@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end
