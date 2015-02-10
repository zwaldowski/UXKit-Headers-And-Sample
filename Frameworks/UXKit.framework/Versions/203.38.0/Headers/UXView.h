//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class UXViewController;

@interface UXView : NSView
{
    BOOL _blurEnabled;
    BOOL _exclusiveTouch;
    BOOL _userInteractionEnabled;
    BOOL _accessibilityChildrenHidden;
    NSVisualEffectView *__visualEffectsView;
    UXViewController *_viewControllerProxy;
    NSMutableArray *_internalTrackers;
}

+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 animations:(void(^)(void))arg6 completion:(void(^)(BOOL finished))arg7;
+ (void)animateWithDuration:(double)arg1 animations:(void(^)(void))arg2;
+ (void)animateWithDuration:(double)arg1 animations:(void(^)(void))arg2 completion:(void(^)(BOOL finished))arg3;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(void(^)(void))arg4 completion:(void(^)(BOOL finished))arg5;
+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5;
+ (long long)_contentModeForLayerContentsGravity:(id)arg1;
+ (Class)layerClass;
@property (nonatomic, strong) NSMutableArray *internalTrackers; // @synthesize internalTrackers=_internalTrackers;
@property (nonatomic, weak)  UXViewController *viewControllerProxy; // @synthesize viewControllerProxy=_viewControllerProxy;
@property (readonly) NSVisualEffectView *_visualEffectsView; // @synthesize _visualEffectsView=__visualEffectsView;
@property (nonatomic) BOOL accessibilityChildrenHidden; // @synthesize accessibilityChildrenHidden=_accessibilityChildrenHidden;
@property (nonatomic) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property (nonatomic, getter=isExclusiveTouch) BOOL exclusiveTouch; // @synthesize exclusiveTouch=_exclusiveTouch;
- (id)accessibilityChildren;
- (id)menuForEvent:(id)arg1;
- (id)snapshotViewFromRect:(CGRect)arg1;
- (id)snapshotView;
- (id)snapshotForRect:(CGRect)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
@property (nonatomic, readonly) CGPoint center;
@property (nonatomic, readonly) NSArray *eventTrackers;
- (void)removeEventTracker:(id)arg1;
- (void)addEventTracker:(id)arg1;
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
- (id)hitTest:(CGPoint)arg1;
@property (nonatomic) long long contentMode;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)addSubview:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)updateConstraintsForSubtreeIfNeeded;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)makeBackingLayer;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_disableBlur;
- (void)_enableBlur;
- (BOOL)blurEnabled;
- (void)setBlurEnabled:(BOOL)arg1;
- (id)_infoWithParents;
- (id)_infoForWindow;
- (id)_infoWithChildren;
- (id)recursiveDescription;
- (id)_superDescription;
- (id)description;
- (id)_autoresizingDescription;

@end

