/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthServicesServer : HDSubserver <HDHealthServicesServerInterface> {
    <HKClientInterface> * _clientRemoteObjectProxy;
    HDIdentifierTable * _healthDeviceSessionServerIDs;
    NSMutableSet * _healthServiceClosedSessionClientIDs;
    NSMutableSet * _healthServiceClosedSessionServerIDs;
    NSMutableDictionary * _healthServiceDiscoveryClientIDs;
    HDIdentifierTable * _healthServiceDiscoveryServerIDs;
    HDHealthServiceManager * _healthServiceManager;
    NSMutableDictionary * _healthServiceSessionClientIDs;
    NSUUID * _subserverUUID;
}

@property (nonatomic, retain) <HKClientInterface> *clientRemoteObjectProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HDIdentifierTable *healthDeviceSessionServerIDs;
@property (nonatomic, retain) NSMutableSet *healthServiceClosedSessionClientIDs;
@property (nonatomic, retain) NSMutableSet *healthServiceClosedSessionServerIDs;
@property (nonatomic, retain) NSMutableDictionary *healthServiceDiscoveryClientIDs;
@property (nonatomic, retain) HDIdentifierTable *healthServiceDiscoveryServerIDs;
@property (nonatomic, retain) HDHealthServiceManager *healthServiceManager;
@property (nonatomic, retain) NSMutableDictionary *healthServiceSessionClientIDs;
@property (nonatomic, retain) NSUUID *subserverUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeDiscoveryBetweenServer:(unsigned int)arg1 andClient:(unsigned int)arg2;
- (void)_closeSessionBetweenServer:(unsigned int)arg1 andClient:(unsigned int)arg2;
- (unsigned int)_discoveryServerIdentifierForClientIdentifier:(unsigned int)arg1;
- (unsigned int)_healthDeviceClientDiscoveryIdentifier:(unsigned int)arg1;
- (unsigned int)_healthDeviceClientSessionIdentifier:(unsigned int)arg1;
- (BOOL)_isClientSessionValid:(unsigned int)arg1;
- (BOOL)_isServerSessionValid:(unsigned int)arg1;
- (unsigned int)_sessionClientIdentifierForServerIdentifier:(unsigned int)arg1;
- (unsigned int)_sessionServerIdentifierForClientIdentifier:(unsigned int)arg1;
- (id)clientRemoteObjectProxy;
- (id)healthDeviceSessionServerIDs;
- (id)healthServiceClosedSessionClientIDs;
- (id)healthServiceClosedSessionServerIDs;
- (id)healthServiceDiscoveryClientIDs;
- (id)healthServiceDiscoveryServerIDs;
- (id)healthServiceManager;
- (id)healthServiceSessionClientIDs;
- (id)initWithParentServer:(id)arg1;
- (void)invalidate;
- (void)remote_addPairingForHealthService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)remote_beginBluetoothStatusUpdates:(id /* block */)arg1 client:(id)arg2;
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_endHealthServiceDiscovery:(unsigned int)arg1;
- (void)remote_endHealthServiceSession:(unsigned int)arg1;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(id /* block */)arg1;
- (void)remote_getEnabledStatusForPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_getHealthServicePairingsWithHandler:(id /* block */)arg1;
- (void)remote_getHealthServiceProperty:(id)arg1 forSession:(unsigned int)arg2 withHandler:(id /* block */)arg3;
- (void)remote_getSupportedPropertyNamesWithHandler:(id /* block */)arg1;
- (void)remote_performHealthServiceOperation:(id)arg1 onSession:(unsigned int)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_removePairingForHealthService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_removePeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_startHealthServiceDiscovery:(int)arg1 client:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_startHealthServiceSession:(id)arg1 client:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setClientRemoteObjectProxy:(id)arg1;
- (void)setHealthDeviceSessionServerIDs:(id)arg1;
- (void)setHealthServiceClosedSessionClientIDs:(id)arg1;
- (void)setHealthServiceClosedSessionServerIDs:(id)arg1;
- (void)setHealthServiceDiscoveryClientIDs:(id)arg1;
- (void)setHealthServiceDiscoveryServerIDs:(id)arg1;
- (void)setHealthServiceManager:(id)arg1;
- (void)setHealthServiceSessionClientIDs:(id)arg1;
- (void)setSubserverUUID:(id)arg1;
- (id)subserverUUID;

@end
