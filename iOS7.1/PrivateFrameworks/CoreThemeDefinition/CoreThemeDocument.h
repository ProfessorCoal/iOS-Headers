//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDPersistentDocument.h>

@class NSManagedObjectModel, NSMutableDictionary, NSString, NSURL, TDHistorian, TDThreadMOCOrganizer;

@interface CoreThemeDocument : TDPersistentDocument
{
    NSMutableDictionary *constantArrayControllers;
    NSMutableDictionary *cachedConstantArrays;
    int cachedMaxIdentifierInUse;
    TDHistorian *m_historian;
    TDThreadMOCOrganizer *m_mocOrganizer;
    NSManagedObjectModel *m_managedObjectModel;
    NSString *pathToRepresentedDocument;
    NSString *_relativePathToProductionData;
    NSString *_targetPlatform;
    BOOL m_didMigrate;
    int _updateVersionMetadataState;
    id <TDAssetManagementDelegate> _assetManagementDelegate;
}

+ (id)defaultThemeBitSourceURLForDocumentURL:(id)arg1;
+ (void)doneWithColorConversion;
+ (int)shouldConvertColorsFromColorSpaceWithIdentifier:(unsigned int)arg1 toIdentifier:(unsigned int)arg2 error:(id *)arg3;
+ (unsigned int)standardColorSpaceID;
+ (void)closeMigrationProgress;
+ (void)presentMigrationProgress;
+ (id)dataModelNameForVersion:(int)arg1;
+ (int)dataModelVersion;
+ (int)targetPlatformForMOC:(id)arg1;
+ (int)defaultTargetPlatform;
+ (int)platformForPersistentString:(id)arg1;
+ (id)persistentStringForPlatform:(int)arg1;
+ (id)_imageAssetURLsByCopyingFileURLs:(id)arg1 toManagedLocationAtURL:(id)arg2 error:(id *)arg3;
+ (id)migrateDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
+ (int)dataModelVersionFromMetadata:(id)arg1;
+ (id)createConfiguredDocumentAtURL:(id)arg1 error:(id *)arg2;
+ (void)_addThemeDocument:(id)arg1;
+ (id)_sharedDocumentList;
@property(nonatomic) id <TDAssetManagementDelegate> assetManagementDelegate; // @synthesize assetManagementDelegate=_assetManagementDelegate;
@property(copy) NSString *pathToRepresentedDocument; // @synthesize pathToRepresentedDocument;
- (void)addThemeBitSourceAtPath:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1 createProductions:(BOOL)arg2;
@property(readonly, nonatomic) NSURL *themeBitSourceURL;
- (void)_configureAfterFirstSave;
- (void)_synchronousSave;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)checkCompatibilityOfDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id *)arg5;
- (id)updatedVersionsMetadataFromMetadata:(id)arg1;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (void)importCursorsFromURL:(id)arg1 getUnusedImportedCursors:(id *)arg2 getUnupdatedCursors:(id *)arg3;
- (void)exportCursorsToURL:(id)arg1;
- (void)importColorsFromURL:(id)arg1 valuesOnly:(BOOL)arg2 getUnusedColorNames:(id *)arg3;
- (void)exportColorsToURL:(id)arg1;
- (id)namedEffectProductions;
- (id)namedArtworkProductions;
- (id)schemaPartDefinitionWithElementID:(int)arg1 partID:(int)arg2;
- (id)schemaDefinitionWithElementID:(int)arg1;
- (BOOL)customizeSchemaPartDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id *)arg4;
- (BOOL)customizeSchemaEffectDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id *)arg3;
- (BOOL)customizeSchemaElementDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id *)arg4;
- (void)removeCustomizationForSchemaDefinition:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (BOOL)customizationExistsForSchemaDefinition:(id)arg1;
- (id)_customizedSchemaDefinitionsForEntity:(id)arg1;
- (id)customizedSchemaEffectDefinitions;
- (id)customizedSchemaElementDefinitions;
- (BOOL)usesCUISystemThemeRenditionKey;
- (int)renditionKeySpecAttributeCount;
- (int)renditionKeySemantics;
- (const struct _renditionkeyfmt *)renditionKeyFormat;
- (void)convertColorsFromColorSpaceWithIdentifier:(unsigned int)arg1 toIdentifier:(unsigned int)arg2;
- (unsigned int)colorSpaceID;
- (BOOL)didMigrate;
- (void)primeArrayControllers;
- (void)resetThemeConstants;
- (void)buildModel;
- (int)targetPlatform;
- (void)setTargetPlatform:(int)arg1;
- (void)setArtworkFormat:(id)arg1;
- (id)artworkFormat;
- (unsigned int)checksum;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (unsigned int)countOfRenditionsMatchingRenditionKeySpecs:(id)arg1;
- (unsigned int)countOfRenditionsMatchingRenditionKeySpec:(id)arg1;
- (id)renditionsMatchingRenditionKeySpec:(id)arg1;
- (BOOL)isCustomLook;
- (void)setRelativePathToProductionData:(id)arg1;
- (id)relativePathToProductionData;
- (id)rootPathForProductionData;
- (id)pathToAsset:(id)arg1;
- (void)setMetadatum:(id)arg1 forKey:(id)arg2;
- (id)metadatumForKey:(id)arg1;
- (id)_addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5 sortedCustomInfos:(id *)arg6;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2;
- (id)addAssetsAtFileURLs:(id)arg1;
- (id)assetAtFileURL:(id)arg1;
- (id)assetAtPath:(id)arg1;
- (id)createAssetWithName:(id)arg1 fileType:(id)arg2 scaleFactor:(unsigned int)arg3 inCategory:(id)arg4 forThemeBitSource:(id)arg5;
- (id)createAssetWithName:(id)arg1 scaleFactor:(unsigned int)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4;
- (id)createAssetWithName:(id)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3;
- (id)createElementProductionWithAsset:(id)arg1;
- (id)_genericPartDefinition;
- (void)deleteNamedAssets:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importNamedAssetsWithImportInfos:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importNamedAssetsWithImportInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importNamedAssetsFromFileURLs:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createNamedArtworkProductionsForAssets:(id)arg1 customInfos:(id)arg2 error:(id *)arg3;
- (id)namedArtworkProductionWithName:(id)arg1;
- (id)_createNamedElementWithIdentifier:(int)arg1;
- (id)_createNamedElementWithNextAvailableIdentifier;
- (id)_namedImagePartDefinition;
- (id)_createPhotoshopElementProductionWithAsset:(id)arg1;
- (id)createNamedEffectProductionWithName:(id)arg1 isText:(BOOL)arg2;
- (id)_namedImageEffectPartDefinition;
- (id)_namedTextEffectPartDefinition;
- (id)namedEffectProductionWithName:(id)arg1;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1 withNameIdentifier:(id)arg2;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1;
- (void)_normalizeRenditionKeySpec:(id)arg1 forSchemaRendition:(id)arg2;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id *)arg5;
- (BOOL)createPSDReferenceArtworkForRenditionGroup:(id)arg1 atDestination:(id)arg2 error:(id *)arg3;
- (BOOL)shouldGeneratePSDAssetFromArtFile:(id)arg1;
- (id)handCraftedAssetURLForFileName:(id)arg1;
- (id)_themeBitSourceForReferencedFilesAtURLs:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)_themeBitSource:(id *)arg1;
- (id)createReferencePNGForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 atLocation:(id)arg3 error:(id *)arg4;
- (id)defaultPathComponentsForPartDefinition:(id)arg1;
- (id)defaultBaseFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)defaultPNGFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)folderNameFromRenditionKey:(id)arg1 forPartDefinition:(id)arg2;
- (id)minimalDisplayNameForThemeConstant:(id)arg1;
- (void)deleteProductions:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (void)deleteProduction:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (void)deleteObject:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (id)newObjectForEntity:(id)arg1;
- (unsigned int)countForEntity:(id)arg1 withPredicate:(id)arg2;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 error:(id *)arg3;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2;
- (id)mappingForPhotoshopLayerIndex:(int)arg1 themeDrawingLayerIdentifier:(int)arg2;
- (id)artworkDraftTypeWithIdentifier:(int)arg1;
- (id)zeroCodeArtworkInfoWithIdentifier:(int)arg1;
- (id)psdImageRefForAsset:(id)arg1;
- (id)constantWithName:(id)arg1 forIdentifier:(int)arg2;
- (id)iterationTypeWithIdentifier:(int)arg1;
- (id)renditionSubtypeWithIdentifier:(unsigned int)arg1;
- (id)renditionTypeWithIdentifier:(int)arg1;
- (id)effectComponentWithType:(unsigned int)arg1 inRendition:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)effectParameterValueWithType:(unsigned int)arg1 inComponent:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)effectParameterTypeWithIdentifier:(unsigned int)arg1;
- (id)effectTypeWithIdentifier:(unsigned int)arg1;
- (id)schemaCategoryWithIdentifier:(int)arg1;
- (id)lookWithIdentifier:(int)arg1;
- (id)idiomWithIdentifier:(int)arg1;
- (id)drawingLayerWithIdentifier:(int)arg1;
- (id)valueWithIdentifier:(int)arg1;
- (id)presentationStateWithIdentifier:(int)arg1;
- (id)stateWithIdentifier:(int)arg1;
- (id)directionWithIdentifier:(int)arg1;
- (id)sizeWithIdentifier:(int)arg1;
- (id)partWithIdentifier:(int)arg1;
- (id)elementWithIdentifier:(int)arg1;
- (id)themeConstant:(id)arg1 withIdentifier:(int)arg2;
- (id)_cachedConstantsForEntity:(id)arg1;
- (void)recacheThemeConstant:(id)arg1;
- (id)historian;
- (id)mocOrganizer;
- (id)managedObjectModel;
- (id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id *)arg1;
- (id)updateToSchemaVersion4AndReturnAlertString:(id *)arg1;
- (id)updateToSchemaVersion3AndReturnAlertString:(id *)arg1;
- (id)migrateFromWindowFormat14ToWindowFormat15:(id *)arg1;
- (void)checkVersionsAndUpdateIfNecessary;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 targetPlatform:(int)arg2 error:(id *)arg3;
- (id)init;
- (void)_getFilename:(id *)arg1 scaleFactor:(unsigned int *)arg2 category:(id *)arg3 bitSource:(id *)arg4 forFileURL:(id)arg5;
- (id)_predicateForRenditionKeySpec:(id)arg1;
- (void)changedObjectsNotification:(id)arg1;

@end

