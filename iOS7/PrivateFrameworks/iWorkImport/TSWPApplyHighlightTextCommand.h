/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSKAnnotationAuthor, TSWPSelection, TSWPStorage;

// Not exported
@interface TSWPApplyHighlightTextCommand : TSWPTextBaseCommand
{
    TSWPStorage *_storage;
    TSWPSelection *_selection;
    TSKAnnotationAuthor *_author;
    struct TSWPStorageTransaction *_undoRedoTransaction;
    _Bool _remove;
    _Bool _showComment;
}

+ (id)highlightByHighlightingRange:(struct _NSRange)arg1 storage:(id)arg2 context:(id)arg3 author:(id)arg4 outRange:(struct _NSRange *)arg5 outMergedHighlights:(id)arg6;
- (void)p_invalidateSelection:(id)arg1;
- (void)redo;
- (void)undo;
- (void)undoRedo:(_Bool)arg1;
- (void)commit;
- (_Bool)process;
- (_Bool)shouldRunSynchronously;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ApplyHighlightTextCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ApplyHighlightTextCommandArchive *)arg1 archiver:(id)arg2;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 removeHighlightSelection:(id)arg2;
- (id)initWithStorage:(id)arg1 addTextCommentSelection:(id)arg2 showComment:(_Bool)arg3 author:(id)arg4;
- (id)p_commonInit:(id)arg1 selection:(id)arg2 author:(id)arg3 remove:(_Bool)arg4 showComment:(_Bool)arg5;

@end

