/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECTypesInternal : NSObject {
    NSArray *deckControlConstants;
    NSArray *deckControlStrings;
    NSArray *deckInfoConstants;
    NSArray *deckInfoStrings;
    NSArray *deviceTypesConstants;
    NSArray *deviceTypesStrings;
    NSArray *playModeConstants;
    NSArray *playModeStrings;
    NSArray *requestTypeConstants;
    NSArray *requestTypeStrings;
    NSArray *systemAudioModeStatusConstants;
    NSArray *systemAudioModeStatusStrings;
}

+ (id)defaultTypes;

- (void)dealloc;
- (unsigned int)deckControlModeForString:(id)arg1;
- (unsigned int)deckInfoForString:(id)arg1;
- (unsigned int)deviceTypeForString:(id)arg1;
- (id)init;
- (unsigned int)playModeForString:(id)arg1;
- (unsigned int)requestTypeForString:(id)arg1;
- (id)stringForDeckControlMode:(unsigned int)arg1;
- (id)stringForDeckInfo:(unsigned int)arg1;
- (id)stringForDeviceType:(unsigned int)arg1;
- (id)stringForPlayMode:(unsigned int)arg1;
- (id)stringForRequestType:(unsigned int)arg1;
- (id)stringForSystemAudioStatus:(unsigned int)arg1;
- (unsigned int)systemAudioStatusForString:(id)arg1;

@end