//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  7 2015 21:36:47).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <UXKit/UXKitAppearance-Protocol.h>

@class NSColor, NSString;

@interface NSView (UXKitAppearance) <UXKitAppearance>
- (void)tintColorDidChange;
@property(nonatomic) long long tintAdjustmentMode;
@property(retain, nonatomic) NSColor *tintColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

