/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TSDThumbnailConsumer <NSObject>
- (void)updateThumbnail:(id)arg1 identifier:(id)arg2 continueThumbnailing:(_Bool)arg3;
- (id)nextThumbnailIdentifier;

@optional
- (_Bool)shouldCallCommit;
- (void)commitThumbnail:(id)arg1 identifier:(id)arg2;
@end

