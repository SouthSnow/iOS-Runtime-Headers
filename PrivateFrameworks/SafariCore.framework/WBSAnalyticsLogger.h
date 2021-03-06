/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsLogger : NSObject {
    AWDServerConnection * _awdServer;
    NSMutableDictionary * _pageLoadStartTimes;
}

@property (nonatomic, readonly) AWDServerConnection *awdServer;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)awdServer;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (id)init;
- (void)pageLoadCompleted:(unsigned int)arg1;
- (void)pageLoadCompleted:(unsigned int)arg1 withConfigurationID:(unsigned int)arg2;
- (void)pageLoadStarted:(unsigned int)arg1;
- (void)pageLoadStarted:(unsigned int)arg1 withConfigurationID:(unsigned int)arg2;
- (BOOL)registerQueriableMetric:(unsigned long)arg1 callback:(id /* block */)arg2;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_enteredTwoUpUsingMethod:(int)arg1;
- (void)_sf_launchedOrResumedSafariWhileInPrivateBrowsing:(BOOL)arg1;
- (void)_sf_longTappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_longTappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_safariViewControllerDidDismissWithMethod:(int)arg1;
- (void)_sf_safariViewControllerDidPresentFromHostApp:(id)arg1;
- (void)_sf_tappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_tappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_twoFingerTappedLinkWithOutcome:(int)arg1;

@end
