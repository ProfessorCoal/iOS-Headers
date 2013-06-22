/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccount;

@interface SUScriptFacebookSession : SUScriptObject
{
    SUScriptAppleAccount *_account;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) unsigned int likeStatusFlagMe;
@property(readonly) unsigned int likeStatusFlagGlobalCount;
@property(readonly) unsigned int likeStatusFlagFriends;
@property(readonly) unsigned int likeStatusFlagFriendCount;
@property(readonly) id hasAccounts;
- (id)_className;
- (void)unlikeURL:(id)arg1 completionFunction:(id)arg2;
- (void)likeURL:(id)arg1 completionFunction:(id)arg2;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3;
- (void)dealloc;
- (id)initWithAppleAccount:(id)arg1;

@end
