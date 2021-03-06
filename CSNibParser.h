//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  2 2019 07:17:21).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#ifndef NIBUNLOCKER_CSNIBPARSER_H
#define NIBUNLOCKER_CSNIBPARSER_H

#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSMapTable.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSString.h>

#ifndef VISIBILITY_HIDDEN
#define VISIBILITY_HIDDEN __attribute__((visibility("hidden")))
#endif /* __attribute__((visibility("hidden"))) */

VISIBILITY_HIDDEN
@interface CSNibParser : NSObject
{
    NSDictionary *ivar_root;
    NSArray *ivar_objs;
    unsigned long long ivar_idCount;
    NSString *ivar_mdID;
    NSString *ivar_rootID;
    NSString *ivar_ownerID;
    NSString *ivar_appID;
    NSString *ivar_firstResponderID;
    NSMapTable *ivar_idTable;
    NSMapTable *ivar_elementTable;
    NSMutableArray *ivar_placeholders;
    NSMutableDictionary *ivar_properties;
}

+ (id)nibParserWithData:(id)arg1 error:(id *)arg2;
- (id)xibDataWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (void)addLocalizationsToElement:(id)arg1;
- (void)addUnlocalizedPropertiesToElement:(id)arg1;
- (void)addFlattenedPropertiesToElement:(id)arg1;
- (void)addObjectRecordsToElement:(id)arg1;
- (void)addAccessibilityAttributesToConnectionRecords:(id)arg1;
- (void)addConnectionRecordsToElement:(id)arg1;
- (void)addObjectsToDataNode:(id)arg1;
- (void)resolvePlaceholders;
- (void)addRootObjectsToDataNode:(id)arg1;
- (void)addMetadataToDataNode:(id)arg1;
- (void)addPluginDependenciesToDataNode:(id)arg1;
- (void)addEncodedWithXMLCoderToElement:(id)arg1;
- (id)addObjectRecordWithOid:(long long)arg1 objectElement:(id)arg2 childrenElement:(id)arg3 parentID:(id)arg4 name:(id)arg5 toElement:(id)arg6;
- (id)addObjectRecordWithOid:(long long)arg1 refID:(id)arg2 childrenRefID:(id)arg3 parentID:(id)arg4 name:(id)arg5 toElement:(id)arg6;
- (id)addObjectRecordForObject:(id)arg1 withParent:(id)arg2 toElement:(id)arg3;
- (id)addObjectWithClassName:(id)arg1 key:(id)arg2 id:(id)arg3 toElement:(id)arg4;
- (id)newObjectWithClassName:(id)arg1 key:(id)arg2 id:(id)arg3;
- (id)addObjectWithDescription:(id)arg1 key:(id)arg2 id:(id)arg3 toElement:(id)arg4 requireObject:(BOOL)arg5 attemptToResolve:(BOOL)arg6;
- (id)addObjectWithDescription:(id)arg1 key:(id)arg2 id:(id)arg3 toElement:(id)arg4 requireObject:(BOOL)arg5;
- (id)newObjectWithDescription:(id)arg1 key:(id)arg2 id:(id)arg3 requireObject:(BOOL)arg4;
- (id)addReferenceWithKey:(id)arg1 id:(id)arg2 toElement:(id)arg3;
- (id)newReferenceWithKey:(id)arg1 id:(id)arg2;
- (void)setObject:(id)arg1 forElement:(id)arg2;
- (id)objectForElement:(id)arg1;
- (void)setID:(id)arg1 forObject:(id)arg2;
- (id)idForObject:(id)arg1;
- (id)newID;
- (void)setFirstResponderID:(id)arg1;
- (id)firstResponderID;
- (void)setApplicationID:(id)arg1;
- (id)applicationID;
- (void)setOwnerID:(id)arg1;
- (id)ownerID;
- (void)setRootID:(id)arg1;
- (id)rootID;
- (void)setMetadataID:(id)arg1;
- (id)metadataID;
- (void)setIBAttribute:(id)arg1 forKey:(id)arg2 inObject:(id)arg3;
- (id)ibAttributesForObject:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2 inObject:(id)arg3;
- (id)propertyForKey:(id)arg1 inObject:(id)arg2;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)descriptionForObject:(id)arg1;
- (id)classHierarchyForObject:(id)arg1;
- (id)classNameForObject:(id)arg1;
- (id)childrenOfObject:(id)arg1;
- (id)parentOfObject:(id)arg1;
- (id)objectForKey:(id)arg1 inObject:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 inObject:(id)arg2;
- (id)translateString:(id)arg1;
- (id)translateObject:(id)arg1;
- (id)nameForObject:(id)arg1;
- (long long)oidForAccessibilityConnector:(id)arg1;
- (long long)oidForObject:(id)arg1;
- (id)frameworkName;
- (id)classes;
- (id)connections;
- (id)topLevelObjects;
- (id)nameValues;
- (id)nameKeys;
- (id)accessibilityOidsValues;
- (id)accessibilityOidsKeys;
- (id)accessibilityConnectors;
- (id)oidsValues;
- (id)oidsKeys;
- (id)objectValues;
- (id)objectKeys;
- (id)rootObject;
- (id)nibDictionary;
@end

#endif /* NIBUNLOCKER_CSNIBPARSER_H */
