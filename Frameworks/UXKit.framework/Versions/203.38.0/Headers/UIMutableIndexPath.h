//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@interface UIMutableIndexPath : NSIndexPath
{
    unsigned long long *_mutableIndexes;
    BOOL _locked;
}

+ (void)setIndex:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 forIndexPath:(id *)arg3;
- (id)retain;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)getIndexes:(unsigned long long *)arg1;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (id)initWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;

@end

