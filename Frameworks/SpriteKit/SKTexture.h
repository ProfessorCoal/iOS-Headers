/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class CIFilter, NSArray, NSString, SKTextureCache;

@interface SKTexture : NSObject <NSCopying, NSCoding>
{
    BOOL _shouldGenerateMipmaps;
    BOOL _didGenerateMipmaps;
    BOOL _isPath;
    BOOL _isData;
    NSString *_imgName;
    NSArray *_searchPaths;
    struct CGRect _textRect;
    struct CGRect _textCoords;
    BOOL _disableAlpha;
    BOOL _isRotated;
    struct CGPoint _cropScale;
    struct CGPoint _cropOffset;
    int _alignment;
    int _rowLength;
    BOOL _isCompressed;
    int _compressedSize;
    unsigned int _compressedFormat;
    CIFilter *_filter;
    SKTexture *_originalTexture;
    int _filteringMode;
    int _wrapMode;
    unsigned int _textureTarget;
    NSString *_originalAtlasName;
    NSString *_subTextureName;
    SKTextureCache *_textureCache;
    unsigned int *_alphaMap;
    struct CGSize _alphaMapSize;
}

+ (id)_textureWithImageNamed:(id)arg1;
+ (void)preloadTextures;
+ (void)deleteUnusedTextures;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithCGImage:(struct CGImage *)arg1;
+ (id)textureWithRect:(struct CGRect)arg1 inTexture:(id)arg2;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect)arg2;
+ (id)textureWithImageNamed:(id)arg1;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize)arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize)arg2;
+ (id)textureWithImagePath:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1 size:(struct CGSize)arg2 bitsPerPixel:(unsigned int)arg3 hasAlpha:(BOOL)arg4;
+ (id)compressedTextureWithData:(id)arg1;
@property(readonly, nonatomic) struct CGSize alphaMapSize; // @synthesize alphaMapSize=_alphaMapSize;
@property(readonly, nonatomic) unsigned int *alphaMap; // @synthesize alphaMap=_alphaMap;
@property(copy, nonatomic) NSString *subTextureName; // @synthesize subTextureName=_subTextureName;
@property(copy, nonatomic) NSString *originalAtlasName; // @synthesize originalAtlasName=_originalAtlasName;
@property(nonatomic) unsigned int textureTarget; // @synthesize textureTarget=_textureTarget;
@property(nonatomic) struct CGPoint cropOffset; // @synthesize cropOffset=_cropOffset;
@property(nonatomic) BOOL isRotated; // @synthesize isRotated=_isRotated;
@property(nonatomic) struct CGPoint cropScale; // @synthesize cropScale=_cropScale;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)glTextureId;
- (void)preload;
- (void)unload;
@property(nonatomic) int filteringMode;
@property(nonatomic) int wrapMode;
@property(readonly, nonatomic) BOOL isRepeatable;
- (void)load;
@property(nonatomic) BOOL usesMipmaps;
- (id)description;
- (id)textureByApplyingCIFilter:(id)arg1;
- (struct CGSize)size;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (struct CGRect)textureRect;
@property(nonatomic) BOOL disableAlpha;
@property(readonly, nonatomic) BOOL useAlpha;
@property(readonly, nonatomic) BOOL hasAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImagePath:(id)arg1;
- (id)init;
- (id)initWithImageNamed:(id)arg1;
- (void)loadImageData;
- (void)preloadWithCompletionHandler:(id)arg1;
- (void)loadImageDataFromCGImage:(struct CGImage *)arg1 pointsSize:(struct CGSize)arg2;
- (BOOL)loadImageDataFromPVRTCData:(id)arg1;
- (void)commonInit;
- (BOOL)alphaTestX:(float)arg1 y:(float)arg2;
- (void)generateAlphaMapOfSize:(struct CGSize)arg1 fromImage:(struct CGImage *)arg2;
- (id)imgName;
- (void)setPixelSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *imageNameOrPath;

@end
