/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIDocumentInteractionControllerDelegate-Protocol.h"

@class EKAttachment, EKEventAttachmentCell;

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate>
{
    EKAttachment *_attachment;
    id _downloadID;
    EKEventAttachmentCell *_cell;
    id <EKEventAttachmentCellControllerDelegate> _delegate;
}

+ (id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2;
+ (BOOL)_attachmentIsViewable:(id)arg1;
@property(retain, nonatomic) EKAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly) EKEventAttachmentCell *cell; // @synthesize cell=_cell;
@property(nonatomic) id <EKEventAttachmentCellControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)cellSelected;
- (void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2;
- (void)_presentPreviewOnMainThreadWithInfo:(id)arg1;
- (id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2;
- (void)tearDown;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

@end

