//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  7 2015 21:36:47).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/NSObject-Protocol.h>
#import <UXKit/NSSecureCoding-Protocol.h>

@class NSString, UXAuxiliaryNavigationStore;

@protocol UXNavigationDestination <NSObject, NSSecureCoding>
@property(readonly, nonatomic) UXAuxiliaryNavigationStore *auxiliaryNavigationStore;
@property(readonly, nonatomic) NSString *destinationTitle;
@property(readonly, nonatomic) NSString *destinationType;
@end

