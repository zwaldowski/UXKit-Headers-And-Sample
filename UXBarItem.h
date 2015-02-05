//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSImage, NSString;

@interface UXBarItem : NSObject
{
    BOOL _enabled;
    NSString *_title;
    NSString *_accessibilityLabel;
    NSImage *_image;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)init;

@end

