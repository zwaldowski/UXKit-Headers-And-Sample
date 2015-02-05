//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



#import "UXNavigationDestination.h"

@class NSString, UXAuxiliaryNavigationStore;

@interface _UXNavigationDestination : NSObject <UXNavigationDestination>
{
    NSString *_destinationType;
    NSString *_destinationTitle;
    UXAuxiliaryNavigationStore *_auxiliaryNavigationStore;
}

+ (BOOL)supportsSecureCoding;
+ (id)destinationForNavigationIdentifier:(id)arg1 title:(id)arg2;
+ (id)destinationForViewController:(id)arg1;
@property(retain, nonatomic) UXAuxiliaryNavigationStore *auxiliaryNavigationStore; // @synthesize auxiliaryNavigationStore=_auxiliaryNavigationStore;
@property(retain, nonatomic) NSString *destinationTitle; // @synthesize destinationTitle=_destinationTitle;
@property(retain, nonatomic) NSString *destinationType; // @synthesize destinationType=_destinationType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

