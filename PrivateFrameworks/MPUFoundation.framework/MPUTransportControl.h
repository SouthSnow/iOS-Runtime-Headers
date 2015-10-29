/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTransportControl : NSObject <NSCopying> {
    BOOL _acceptsTapsWhenDisabled;
    BOOL _enabled;
    int _group;
    BOOL _highlighted;
    unsigned int _numberOfAvailableSlotsInContainer;
    BOOL _supportsLongPress;
    int _type;
}

@property (nonatomic) BOOL acceptsTapsWhenDisabled;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, readonly) int group;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) BOOL supportsLongPress;
@property (nonatomic, readonly) int type;

+ (void)_addTransportControl:(id)arg1 toTransportControlsArray:(id)arg2;
+ (id)_createTransportControlForType:(int)arg1 withMediaRemoteCommand:(struct _MRMediaRemoteCommandInfo { }*)arg2;
+ (id)_descriptionForTransportControlGroup:(int)arg1;
+ (id)_descriptionForTransportControlType:(int)arg1;
+ (int)_groupForTransportControlType:(int)arg1;
+ (BOOL)_hasUnderlyingCommandForTransportControlType:(int)arg1;
+ (BOOL)_transportControlAcceptsTapsWhenDisabledForType:(int)arg1;
+ (BOOL)_transportControlSupportsHighlightingForCommand:(unsigned int)arg1;
+ (int)_transportControlTypeForCommand:(unsigned int)arg1;
+ (id)_transportControlsForMediaRemoteCommands:(struct __CFArray { }*)arg1 withAllowedTransportControlTypes:(id)arg2 allowsDisabledControls:(BOOL)arg3;
+ (id)availableTransportControlsForMediaRemoteCommands:(struct __CFArray { }*)arg1 controlsCount:(unsigned int)arg2;
+ (id)transportControlWithType:(int)arg1 group:(int)arg2;
+ (id)transportControlsForControlTypes:(id)arg1 withMediaRemoteCommands:(struct __CFArray { }*)arg2;

- (int)_compare:(id)arg1 ordering:(int)arg2;
- (int)_priority;
- (BOOL)acceptsTapsWhenDisabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)group;
- (unsigned int)hash;
- (id)initWithType:(int)arg1 group:(int)arg2;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHighlighted;
- (void)setAcceptsTapsWhenDisabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSupportsLongPress:(BOOL)arg1;
- (BOOL)supportsLongPress;
- (int)type;

@end