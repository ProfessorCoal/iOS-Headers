/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

@interface ODDShape : ODDLayoutObject
{
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (id)init;
- (void)dealloc;
- (int)type;
- (void)setType:(int)arg1;
- (int)presetType;
- (void)setPresetType:(int)arg1;
- (id)adjustments;
- (void)addAdjustment:(id)arg1;

@end

