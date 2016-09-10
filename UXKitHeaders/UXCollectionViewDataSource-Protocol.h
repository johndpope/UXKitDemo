//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  7 2015 21:36:47).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@import Cocoa;

#import "NSIndexPath-UXCollectionViewAdditions.h"

@class NSIndexPath, NSString, UXCollectionReusableView, UXCollectionView, UXCollectionViewCell;

@protocol UXCollectionViewDataSource <NSObject>
- (UXCollectionViewCell *)collectionView:(UXCollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath;
- (long long)collectionView:(UXCollectionView *)collectionView numberOfItemsInSection:(NSInteger)section;

@optional
- (UXCollectionReusableView *)collectionView:(UXCollectionView *)collectionView viewForSupplementaryElementOfKind:(NSString *)kind atIndexPath:(NSIndexPath *)indexPath;
- (NSInteger)numberOfSectionsInCollectionView:(UXCollectionView *)collectionView;
@end

