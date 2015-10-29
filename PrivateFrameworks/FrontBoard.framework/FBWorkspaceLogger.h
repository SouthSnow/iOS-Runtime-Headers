/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceLogger : FBFileLogger {
    unsigned int _overrideDestinations;
    BOOL _useOverrideDestinations;
}

- (void)_configureOverrideDestinationForString:(id)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setLevel:(int)arg1;
- (id)init;
- (int)level;
- (unsigned int)logDestinations;
- (id)logPrefixForCategory:(id)arg1 destination:(unsigned int)arg2;
- (int)maxLogCount;
- (int)maxLogSize;
- (id)name;
- (void)reloadFromDefaults;
- (void)willBeginLoggingToPath:(id)arg1;

@end