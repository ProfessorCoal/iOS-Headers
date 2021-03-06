//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AssociatedApplicationIdentifier : SQLiteEntity
{
}

+ (id)_propertySettersForAssociatedApplicationIdentifier;
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;
+ (id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;
+ (id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPass:(id)arg2;
+ (id)_predicateForPass:(id)arg1;
+ (id)_predicateForPassPID:(long long)arg1;
+ (id)_associatedApplicationIdentifiersInDatabase:(id)arg1 matchingPredicate:(id)arg2;
+ (void)insertAssociatedApplicationIdentifiers:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databaseTable;
- (id)initWithApplicationIdentifier:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;

@end

