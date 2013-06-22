/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;

@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    int _alarmIdentifier;
    NSString *_customString;
    BOOL _customSelected;
    int _selectedItem;
    id <CalendarEventAlarmTableDelegate> _alarmTableDelegate;
    id <EKStyleProvider> _styleProvider;
    BOOL _useAllDayAlarms;
}

@property(nonatomic) BOOL useAllDayAlarms; // @synthesize useAllDayAlarms=_useAllDayAlarms;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) id <CalendarEventAlarmTableDelegate> alarmTableDelegate; // @synthesize alarmTableDelegate=_alarmTableDelegate;
- (int)presetIdentifierAtIndex:(int)arg1;
- (int)countOfPresets;
- (int)intervalForPresetIdentifier:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setCustomSelected:(BOOL)arg1;
- (BOOL)customSelected;
- (void)setCustomString:(id)arg1;
- (int)presetIdentifier;
- (void)setPresetIdentifier:(int)arg1;
- (void)_selectRow:(int)arg1;
- (int)_presetIdentifierForRow:(int)arg1;
- (int)_rowForPresetIdentifier:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
