/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPBitmapStore, NSSet;

@interface UIKeyboardCache : NSObject
{
    CPBitmapStore *_store;
    NSSet *_layouts;
    BOOL _isCommitting;
}

+ (BOOL)enabled;
+ (id)sharedInstance;
- (void)updateCacheForInputModes:(id)arg1;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (struct CGImage *)renderBlock:(id)arg1 forView:(void)arg2 withKey:(id)arg3 fromLayout:(id)arg4;
- (void)displayView:(id)arg1 imageWidth:(float)arg2 withKey:(id)arg3 fromLayout:(id)arg4;
- (void)displayView:(id)arg1 withKey:(id)arg2 fromLayout:(id)arg3;
- (void)cacheView:(id)arg1 forKey:(id)arg2 fromLayout:(id)arg3;
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (void)commitTransaction;
- (void)dealloc;
- (id)init;

@end

