/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GMMTileStore : NSObject
{
    struct TileStore *_tileStore;
}

- (void)evict;
- (BOOL)selectData:(char **)arg1 length:(unsigned int *)arg2 forTilePath:(const CDStruct_1ea8d665 *)arg3;
- (BOOL)hasDataForTilePath:(const CDStruct_1ea8d665 *)arg1;
- (void)insertData:(const char *)arg1 length:(unsigned long)arg2 forTilePath:(const CDStruct_1ea8d665 *)arg3;
- (void)endWrites;
- (void)beginWrites;
- (void)openDatabase:(BOOL)arg1;
@property(nonatomic) int tileEdition; // @dynamic tileEdition;
- (id)initWithPath:(id)arg1;

@end

