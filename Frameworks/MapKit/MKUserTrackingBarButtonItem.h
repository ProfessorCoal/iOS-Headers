/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIBarButtonItem.h"

#import "MKUserTrackingButtonTarget-Protocol.h"

@class MKMapView, UIButton, UIImage, UINavigationBar, UIToolbar, UIView, _MKUserTrackingButtonController;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget>
{
    BOOL _hasCustomAssociatedView;
    UIButton *_customButton;
    _MKUserTrackingButtonController *_controller;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
    id <MKUserTrackingView> _userTrackingView;
    UIToolbar *_toolbar;
    UINavigationBar *_navigationBar;
    UIView *_associatedView;
}

+ (Class)_activityIndicatorClass;
@property(retain, nonatomic) UIView *_associatedView; // @synthesize _associatedView;
@property(retain, nonatomic) UINavigationBar *_navigationBar; // @synthesize _navigationBar;
@property(retain, nonatomic) UIToolbar *_toolbar; // @synthesize _toolbar;
- (void)_goToNextMode:(id)arg1;
@property(nonatomic, setter=_setState:) int _state;
- (void)_updateForState:(int)arg1;
- (BOOL)_isHighlightedForState:(int)arg1;
- (int)_styleForState:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(retain, nonatomic) MKMapView *mapView;
@property(retain, nonatomic, setter=_setUserTrackingView:) id <MKUserTrackingView> _userTrackingView; // @synthesize _userTrackingView;
- (void)_repositionViews;
- (BOOL)_isInMiniBar;
- (int)_activityIndicatorStyle;
- (id)_trackingFollowWithHeadingImage;
- (id)_trackingFollowImage;
- (id)_trackingNoneImage;
- (id)_trackingEmptyImage;
- (void)dealloc;
- (id)initWithWorldView:(id)arg1;
- (id)initWithWorldView:(id)arg1 forceSilverStyle:(BOOL)arg2;
- (id)initWithMapView:(id)arg1;
- (id)_initWithUserTrackingView:(id)arg1;

@end
