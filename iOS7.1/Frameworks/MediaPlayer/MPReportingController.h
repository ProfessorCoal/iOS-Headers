//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MPReportingController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_childReportingControllers;
    MPReportingController *_parentReportingController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MPReportingController *parentReportingController;
- (void)_recordReportingEvents:(id)arg1;
- (void)removeChildReportingController:(id)arg1;
- (void)recordReportingEvents:(id)arg1;
- (void)flushImmediately;
- (void)addChildReportingController:(id)arg1;
@property(readonly, nonatomic) NSArray *childReportingControllers;
- (id)init;

@end

