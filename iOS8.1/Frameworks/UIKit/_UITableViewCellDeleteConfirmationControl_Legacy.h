//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellDeleteConfirmationControl_Legacy : UIControl
{
    NSString *_title;
}

+ (id)_highlightedBackgroundImage;
+ (id)_backgroundImage;
+ (struct CGSize)defaultSizeForTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

