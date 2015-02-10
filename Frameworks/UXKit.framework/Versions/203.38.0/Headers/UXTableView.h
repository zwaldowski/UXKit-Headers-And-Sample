//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXCollectionView.h>
#import <UXKit/UXTableView.h>
#import <UXKit/UXCollectionViewDataSource-Protocol.h>

@interface UXTableView : UXCollectionView

+ (unsigned long long)collectionViewScrollPositionFromScrollPosition:(long long)arg1;
+ (Class)documentClass;
@property (nonatomic, setter=_setFloatingHeadersDisabled:) BOOL _floatingHeadersDisabled; // @synthesize _floatingHeadersDisabled=__floatingHeadersDisabled;
@property (nonatomic) NSEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property (nonatomic, copy) NSColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property (nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property (nonatomic, weak)  id <UXTableViewDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property (nonatomic, weak)  id <UXTableViewDataSource> tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property (nonatomic) double alpha;
- (void)_checkForAccessoryViewsInScrollerAreas;
- (void)collectionView:(id)arg1 layout:(id)arg2 supplementaryViewDidEndFloatingAtIndexPath:(id)arg3 kind:(id)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 supplementaryViewDidBeginFloatingAtIndexPath:(id)arg3 kind:(id)arg4;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)deleteWordBackward:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)menuForEvent:(id)arg1;
- (void)_menuDidEndTracking:(id)arg1;
- (void)_menuDidBeginTracking:(id)arg1;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3;
- (id)indexPathForSelectedRow;
- (id)indexPathForClickedRow;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (id)indexPathsForVisibleRows;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)dequeueReusableHeaderFooterViewWithReuseIdentifier:(id)arg1 forSection:(long long)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (id)cellForRowAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (BOOL)overdrawEnabled;
- (void)setOverdrawEnabled:(BOOL)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)setNeedsDisplay:(BOOL)arg1;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

@end

