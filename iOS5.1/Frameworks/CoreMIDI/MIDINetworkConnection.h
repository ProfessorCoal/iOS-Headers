/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject
{
    struct _MIDINetworkConnectionImpl *_impl;
}

+ (id)connectionWithHost:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, retain, nonatomic) MIDINetworkHost *host;

@end

