//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@interface UXViewAnimationContext : NSObject
{
    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
}

@property (nonatomic) double velocity; // @synthesize velocity=_velocity;
@property (nonatomic) double damping; // @synthesize damping=_damping;
@property (nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property (nonatomic) double mass; // @synthesize mass=_mass;
- (void)generateSpringPropertiesForDuration:(double)arg1 damping:(double)arg2 velocity:(double)arg3;

@end

