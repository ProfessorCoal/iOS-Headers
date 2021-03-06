//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLExpandableView;

@protocol PLExpandableViewDelegate <NSObject>

@optional
- (void)expandableView:(PLExpandableView *)arg1 expansionFractionChanged:(float)arg2;
- (void)expandableViewDidCancelCollapsing:(PLExpandableView *)arg1;
- (void)expandableView:(PLExpandableView *)arg1 willCancelCollapsingWithDuration:(double)arg2;
- (void)expandableViewDidCompleteCollapsing:(PLExpandableView *)arg1;
- (void)expandableView:(PLExpandableView *)arg1 willCompleteCollapsingWithDuration:(double)arg2;
- (void)expandableViewDidBeginCollapsing:(PLExpandableView *)arg1;
- (void)expandableViewDidCancelExpanding:(PLExpandableView *)arg1;
- (void)expandableView:(PLExpandableView *)arg1 willCancelExpandingWithDuration:(double)arg2;
- (void)expandableViewDidCompleteExpanding:(PLExpandableView *)arg1;
- (void)expandableView:(PLExpandableView *)arg1 willCompleteExpandingWithDuration:(double)arg2;
- (void)expandableViewWillBeginExpanding:(PLExpandableView *)arg1;
@end

