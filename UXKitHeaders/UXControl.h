//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  7 2015 21:36:47).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXView.h>

@interface UXControl : UXView
{
    BOOL _highlighted;
    BOOL _selected;
    BOOL _enabled;
    BOOL _ignoresMultiClick;
    id _target;
    SEL _action;
}

@property(nonatomic) BOOL ignoresMultiClick; // @synthesize ignoresMultiClick=_ignoresMultiClick;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (BOOL)isFlipped;
- (BOOL)_locationInsideForEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

