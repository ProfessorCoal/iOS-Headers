//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSCHStyleSemanticTag : NSObject <NSCopying>
{
    int mType;
    unsigned int mIndex;
}

+ (id)styleSemanticTagWithType:(int)arg1 index:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int index; // @synthesize index=mIndex;
@property(readonly, nonatomic) int type; // @synthesize type=mType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 index:(unsigned int)arg2;

@end

