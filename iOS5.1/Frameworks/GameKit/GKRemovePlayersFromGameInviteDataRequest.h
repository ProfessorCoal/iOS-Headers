/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class NSArray;

@interface GKRemovePlayersFromGameInviteDataRequest : GKDataRequest
{
    NSArray *_players;
}

@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
- (id)request;
- (id)key;
- (void)dealloc;

@end

