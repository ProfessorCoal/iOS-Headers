/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject
{
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)init;
- (void)dealloc;
- (BOOL)isEscher;
- (void)setIsEscher:(BOOL)arg1;
- (void)setAdjustValue:(long)arg1 atIndex:(unsigned int)arg2;
- (long)adjustValueAtIndex:(unsigned int)arg1;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)arg1;
- (id)adjustValues;

@end
