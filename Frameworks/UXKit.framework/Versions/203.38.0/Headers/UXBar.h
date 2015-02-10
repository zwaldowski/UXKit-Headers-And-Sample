//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXView.h>
#import <UXKit/UXBarPositioning-Protocol.h>

@class _UXSinglePixelLine;

@interface UXBar : UXView <NSAccessibilityGroup, UXBarPositioning>
{
    _UXSinglePixelLine *_decorationLine;
    BOOL _isInteractiveTransitioning;
    NSColor *_barTintColor;
    double _interitemSpacing;
    double _height;
    UXView *_barItemsContainer;
    double _percent;
    UXView *_nextItemContainer;
}

@property (nonatomic, strong) UXView *nextItemContainer; // @synthesize nextItemContainer=_nextItemContainer;
@property (nonatomic) double percent; // @synthesize percent=_percent;
@property (nonatomic) BOOL isInteractiveTransitioning; // @synthesize isInteractiveTransitioning=_isInteractiveTransitioning;
@property (nonatomic, strong) UXView *barItemsContainer; // @synthesize barItemsContainer=_barItemsContainer;
@property (nonatomic) double height; // @synthesize height=_height;
@property (nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property (nonatomic, strong) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_updateBarPostion;
@property (nonatomic, readonly) long long barPosition;
- (CGSize)intrinsicContentSize;
- (void)_completeInteractiveTransition:(BOOL)arg1;
- (void)_finishInteractiveTransition:(BOOL)arg1 completion:(void(^)(BOOL finished))arg2;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_beginInteractiveTransitionToItemContainer:(id)arg1;
- (void)_animateTransitionFromContainer:(id)arg1 toContainer:(id)arg2 transition:(unsigned long long)arg3 duration:(double)arg4 fromValue:(double)arg5 toValue:(double)arg6 completion:(void(^)(BOOL finished))arg7;
- (void)_transitionToContainer:(id)arg1 transition:(unsigned long long)arg2 duration:(double)arg3;
@property (nonatomic, strong) NSColor *borderColor;
@property (nonatomic) BOOL bordered;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

