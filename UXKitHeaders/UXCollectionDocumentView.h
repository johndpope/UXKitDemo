//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  7 2015 21:36:47).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class UXCollectionView;

@interface UXCollectionDocumentView : NSView
{
    UXCollectionView *_collectionView;
}

@property(nonatomic) __weak UXCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)acceptsFirstResponder;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)_invalidateFocus;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (id)initWithFrame:(struct CGRect)arg1;

@end

