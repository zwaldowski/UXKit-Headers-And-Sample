//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@import  AppKit;
#import <UXKit/UXNavigationDestination-Protocol.h>

@protocol UXSourceList <NSObject>
@property(readonly) double maxSourceListWidth;
@property(readonly) double minSourceListWidth;
@property BOOL collapsed;
- (void)updateSelection;
- (void)selectNavigationDestination:(id <UXNavigationDestination>)arg1;
@end

