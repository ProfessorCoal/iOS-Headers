/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveTransformWithExtent : CIFilter
{
    CIImage *inputImage;
    CIVector *inputExtent;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

+ (id)customAttributes;
@property(copy, nonatomic) CIVector *inputBottomLeft; // @synthesize inputBottomLeft;
@property(copy, nonatomic) CIVector *inputBottomRight; // @synthesize inputBottomRight;
@property(copy, nonatomic) CIVector *inputTopRight; // @synthesize inputTopRight;
@property(copy, nonatomic) CIVector *inputTopLeft; // @synthesize inputTopLeft;
@property(copy, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (void)setDefaults;

@end

