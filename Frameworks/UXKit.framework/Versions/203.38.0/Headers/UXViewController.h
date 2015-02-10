//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXLayoutSupport-Protocol.h>

@class UXNavigationController, UXNavigationItem, UXSourceController, UXTabBarItem, UXView;

@interface UXViewController : NSViewController

+ (Class)viewClass;
@property (nonatomic, strong) UXView *presentedViewControllerContainerView; // @synthesize presentedViewControllerContainerView=_presentedViewControllerContainerView;
@property (nonatomic) BOOL automaticallyAdjustsScrollViewInsets; // @synthesize automaticallyAdjustsScrollViewInsets=_automaticallyAdjustsScrollViewInsets;
@property (nonatomic) unsigned long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property (nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property (nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (id)menuForEvent:(id)arg1;
- (id)bottomLayoutGuide;
- (id)topLayoutGuide;
- (void)_setupLayoutGuidesForView:(id)arg1;
- (void)didUpdateLayoutGuides;
- (void)invalidateIntrinsicLayoutInsets;
- (NSEdgeInsets)intrinsicLayoutInsets;
- (CGSize)preferredContentSizeCappedToSize:(CGSize)arg1;
@property CGSize preferredContentSize;
- (BOOL)_requiresWindowForTransitionPreparation;
- (id)_ancestorViewControllerOfClass:(Class)arg1;
- (void)_animateView:(id)arg1 fromFrame:(CGRect)arg2 toFrame:(CGRect)arg3;
- (id)transitionCoordinator;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(void(^)(void))arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(BOOL))arg3;
@property (nonatomic, readonly) UXViewController *presentedViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)removeFromParentViewController;
- (void)removeChildViewControllerAtIndex:(long long)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewDidLiveResize;
- (void)viewWillLiveResize;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewUpdateLayer;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)_sendViewDidLoad;
- (void)loadView;
- (CGRect)_defaultInitialFrame;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;
@property (nonatomic, readonly) NSResponder *preferredFirstResponder;
@property (copy) NSString *title;
- (void)setView:(id)arg1;
@property (nonatomic, readonly) UXView *uxView;
- (void)_loadViewIfNotLoaded;
- (void)_setupResponderChainIfNecessary;
- (void)_prepareForAnimationInContext:(id)arg1 completion:(void(^)(void))arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
@property (nonatomic) BOOL hidesBottomBarWhenPushed;
- (long long)preferredToolbarPosition;
- (id)toolbarViewController;
- (void)setToolbarViewController:(id)arg1;
- (id)toolbarItems;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)setToolbarItems:(id)arg1;
- (id)accessoryBarItems;
- (void)setAccessoryBarItems:(id)arg1;
- (id)accessoryViewController;
- (void)setAccessoryViewController:(id)arg1;
@property (nonatomic, readonly) UXNavigationItem *navigationItem;
@property (nonatomic, readonly) UXNavigationController *navigationController;
- (id)tabBarController;
- (id)tabBarItem;
- (id)popoverController;
- (void)updateViewConstraints;
- (void)prepareForTransitionWithContext:(id)arg1 completion:(void(^)(void))arg2;
@property (nonatomic, readonly) long long interfaceOrientation;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property (nonatomic) BOOL hidesSourceListWhenPushed;
- (BOOL)isTransitory;
- (void)setTransitory:(BOOL)arg1;
- (void)viewControllersForNavigationDestination:(id)arg1 completion:(void(^)(id unknown, NSArray *viewControllers))arg2;
- (void)willEncodeNavigationDestination:(id)arg1;
- (id)navigationDestination;
- (id)navigationIdentifier;
@property (nonatomic, readonly) UXSourceController *sourceController;

@end

