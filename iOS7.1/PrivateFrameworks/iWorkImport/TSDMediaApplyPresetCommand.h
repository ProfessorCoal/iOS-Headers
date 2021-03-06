//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDStyledInfoSetStyleCommand.h>

@class NSObject<TSSPreset>;

__attribute__((visibility("hidden")))
@interface TSDMediaApplyPresetCommand : TSDStyledInfoSetStyleCommand
{
    NSObject<TSSPreset> *mPreset;
}

@property(readonly, nonatomic) NSObject<TSSPreset> *preset; // @synthesize preset=mPreset;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)computeStyle;
- (void)dealloc;
- (id)initWithMediaInfo:(id)arg1 presetKind:(id)arg2 index:(unsigned int)arg3;
- (id)initWithMediaInfo:(id)arg1 preset:(id)arg2;

@end

