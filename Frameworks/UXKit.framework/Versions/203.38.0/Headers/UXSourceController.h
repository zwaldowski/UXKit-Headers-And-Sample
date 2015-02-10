//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXViewController.h>
#import <UXKit/UXNavigationControllerDelegate-Protocol.h>
#import <UXKit/UXSourceList-Protocol.h>

@interface UXSourceController : UXViewController <UXNavigationControllerDelegate>

+ (Class)_defaultTransitionControllerClass;
+ (id)_autosaveDefaultsKeyForName:(id)arg1;
@property (readonly) NSOperationQueue *viewControllerOperations; // @synthesize viewControllerOperations=_viewControllerOperations;
@property (nonatomic, readonly) NSMapTable *transitionControllerClassByToViewControllerClass; // @synthesize transitionControllerClassByToViewControllerClass=_transitionControllerClassByToViewControllerClass;
@property (nonatomic, readonly) NSMapTable *navigationControllerByRootViewController; // @synthesize navigationControllerByRootViewController=_navigationControllerByRootViewController;
@property (nonatomic, readonly) NSSplitView *splitView; // @synthesize splitView=_splitView;
@property (nonatomic, readonly) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property (nonatomic, copy) NSString *sourceListAutosaveName; // @synthesize sourceListAutosaveName=_sourceListAutosaveName;
@property (nonatomic, strong) UXViewController<UXSourceList> *sourceListViewController; // @synthesize sourceListViewController=_sourceListViewController;
@property (nonatomic, strong) UXViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property (nonatomic, copy) NSArray *rootViewControllers; // @synthesize rootViewControllers=_rootViewControllers;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (nonatomic) long long preferredStyle; // @synthesize preferredStyle=_preferredStyle;
- (BOOL)navigationController:(id)arg1 shouldBeginInteractivePopFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2;
- (void)sourceSplitView:(id)arg1 didResizeMasterWidth:(double)arg2;
- (id)transitionCoordinator;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(void(^)(void))arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(void))arg3;
- (void)removeDestination:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(BOOL finished))arg3;
- (void)navigateToDestination:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(BOOL finished))arg3;
- (id)preferredFirstResponder;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)keyDown:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didChangeSelectedViewController;
- (void)willAddNavigationController:(id)arg1;
- (void)segmentChanged:(id)arg1;
@property (nonatomic) unsigned long long selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setSelectedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setRootViewControllers:(id)arg1 destination:(id)arg2 completion:(void(^)(BOOL finished))arg3;
@property (nonatomic, readonly) BOOL alternateTitleEnabled;
- (id)tabBarView;
- (void)unregisterTransitionControllerForTransitionToViewControllerClass:(Class)arg1;
- (void)registerTranistionControllerClass:(Class)arg1 forViewControllerClass:(Class)arg2;
- (void)registerTransitionControllerClass:(Class)arg1 forViewControllerClass:(Class)arg2;
- (id)destinationForNavigationIdentifier:(id)arg1 title:(id)arg2;
- (id)destinationForViewController:(id)arg1;
- (void)unregisterTransitoryViewController:(id)arg1;
- (void)registerTransitoryViewController:(id)arg1;
@property (nonatomic, readonly) id <UXNavigationDestination> currentNavigationDestination;
- (void)removeRootViewControllerAtIndex:(long long)arg1;
- (void)insertRootViewController:(id)arg1 atIndex:(long long)arg2;
- (void)addRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

