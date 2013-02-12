/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {
    CoreDAVMultiStatusItem *_multiStatus;
    NSSet *_propertiesToFind;
}

@property(retain) CoreDAVMultiStatusItem * multiStatus;
@property(retain) NSSet * propertiesToFind;

- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)getTotalFailureError;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;
- (id)multiStatus;
- (id)parseHints;
- (id)propertiesToFind;
- (void)setMultiStatus:(id)arg1;
- (void)setPropertiesToFind:(id)arg1;
- (id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2;
- (void)updateMultiStatusFromResponse;

@end