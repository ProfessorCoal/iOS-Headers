/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArray.h"

@class NSData;

@interface _PFEncodedArray : NSArray
{
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

- (const id *)_values;
- (void)_replaceObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)mutableCopy;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)copy;
- (id)description;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (id)init;

@end
