/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedAsset.h>

@interface PLManagedAsset (ThumbnailGeneration)
- (void)generateThumbnailsWithImageSource:(struct CGImageSource *)arg1 imageData:(id)arg2 updateExistingLargePreview:(_Bool)arg3 allowMediumPreview:(_Bool)arg4 outSmallThumbnail:(id *)arg5 outLargeThumbnail:(id *)arg6;
- (void)_computePreCropThumbnailSize:(struct CGSize *)arg1 andPostCropSize:(struct CGSize *)arg2 forOrientedOriginalSize:(struct CGSize)arg3 andCroppedSize:(struct CGSize)arg4 isLargeThumbnail:(_Bool)arg5;
@end

