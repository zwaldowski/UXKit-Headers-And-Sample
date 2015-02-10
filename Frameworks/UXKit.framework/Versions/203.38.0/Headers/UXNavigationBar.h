//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXBar.h>
#import <UXKit/UXNavigationControllerDelegate-Protocol.h>

@class UXNavigationItem;

@interface UXNavigationBar : UXBar

+ (id)_itemKeyPathsToObserve;
@property (nonatomic) BOOL recalculatingWindowKeyViewLoop; // @synthesize recalculatingWindowKeyViewLoop=_recalculatingWindowKeyViewLoop;
@property (nonatomic, strong) UXNavigationItem *transitioningItem; // @synthesize transitioningItem=_transitioningItem;
@property (nonatomic) long long currentOperation; // @synthesize currentOperation=_currentOperation;
@property (nonatomic) double centerYOffset; // @synthesize centerYOffset=_centerYOffset;
@property (nonatomic) double rightInteritemSpacing; // @synthesize rightInteritemSpacing=_rightInteritemSpacing;
@property (nonatomic) double leftInteritemSpacing; // @synthesize leftInteritemSpacing=_leftInteritemSpacing;
@property (nonatomic, getter=isDetached) BOOL detached; // @synthesize detached=_detached;
@property (nonatomic) BOOL enableAlernateTitle; // @synthesize enableAlernateTitle=_enableAlernateTitle;
@property (nonatomic, strong) NSView *alternateTitleView; // @synthesize alternateTitleView=_alternateTitleView;
@property (nonatomic, strong) NSImage *backIndicatorImage; // @synthesize backIndicatorImage=_backIndicatorImage;
@property (nonatomic, copy) NSArray *items; // @synthesize items=_items;
@property (nonatomic, weak)  NSView *titleCenteringTrackedView; // @synthesize titleCenteringTrackedView=_titleCenteringTrackedView;
@property (nonatomic) NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property (nonatomic, weak)  id <UXNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setNeedsRecalcuateWindowKeyViewLoop;
- (void)recalculateKeyViewLoop;
- (void)beginInteractivePop;
- (void)beginInteractivePushToItem:(id)arg1;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
@property (nonatomic, readonly) UXNavigationItem *backItem;
@property (nonatomic, readonly) UXNavigationItem *topItem;
- (void)mouseDown:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)layout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)barPosition;
- (id)initWithFrame:(CGRect)arg1;

@end

