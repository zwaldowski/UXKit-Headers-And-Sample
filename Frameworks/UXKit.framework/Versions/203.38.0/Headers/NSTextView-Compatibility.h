//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class NSString;

@interface NSTextView (Compatibility) <UITextInputTraits>
- (struct NSEdgeInsets)__textContainerInset;
- (void)__setTextContainerInset:(struct NSEdgeInsets)arg1;
@property(nonatomic) unsigned long long textAlignment;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *text;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) NSUInteger hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@end

