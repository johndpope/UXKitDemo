//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  7 2015 21:36:47).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@import Cocoa;

@class NSArray, NSMutableArray, NSVisualEffectView, UXViewController;

@interface UXView : NSView

+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 animations:(void (^)())animations completion:(void (^)(BOOL completed))completion;
+ (void)animateWithDuration:(double)arg1 animations:(void (^)())animations;
+ (void)animateWithDuration:(double)arg1 animations:(void (^)())animations completion:(void (^)(BOOL completed))completion;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(void (^)())animations completion:(void (^)(BOOL completed))completion;
+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5;
+ (long long)_contentModeForLayerContentsGravity:(id)arg1;
@property(retain, nonatomic) NSMutableArray *internalTrackers; // @synthesize internalTrackers=_internalTrackers;
@property(nonatomic) __weak UXViewController *viewControllerProxy; // @synthesize viewControllerProxy=_viewControllerProxy;
@property(readonly) NSVisualEffectView *_visualEffectsView; // @synthesize _visualEffectsView=__visualEffectsView;
@property(nonatomic) BOOL accessibilityChildrenHidden; // @synthesize accessibilityChildrenHidden=_accessibilityChildrenHidden;
@property(nonatomic) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic, getter=isExclusiveTouch) BOOL exclusiveTouch; // @synthesize exclusiveTouch=_exclusiveTouch;
- (id)accessibilityChildren;
- (id)menuForEvent:(id)arg1;
- (id)snapshotViewFromRect:(struct CGRect)arg1;
- (id)snapshotView;
- (id)snapshotForRect:(struct CGRect)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, nonatomic) NSArray *eventTrackers;
- (void)removeEventTracker:(id)arg1;
- (void)addEventTracker:(id)arg1;
- (BOOL)isInResponderChainOf:(id)arg1;
- (void)_applyTintColorIfNotUXView:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)canBecomeKeyView;
- (id)hitTest:(struct CGPoint)arg1;
@property(nonatomic) long long contentMode;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)updateConstraintsForSubtreeIfNeeded;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (BOOL)blurEnabled;
- (void)setBlurEnabled:(BOOL)arg1;

@end
