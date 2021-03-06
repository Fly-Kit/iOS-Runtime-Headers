/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLNetworkStateObserver : NSObject <QLNetworkStateListener, RadiosPreferencesDelegate> {
    NSMutableArray * _completionBlocks;
    int  _iCloudDriveReachabilityToken;
    unsigned int  _networkState;
    NSObject<OS_dispatch_queue> * _queue;
    RadiosPreferences * _radiosPreferences;
    struct __SCNetworkReachability { } * _reachability;
    unsigned int  _reachabilityFlags;
    <QLNetworkStateListener> * _remoteObserver;
    unsigned int  _stack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int networkState;
@property (nonatomic, retain) <QLNetworkStateListener> *remoteObserver;
@property (readonly) Class superclass;

+ (BOOL)networkAccessShouldGoThroughCloudDocsDaemon;
+ (id)sharedInstance;
+ (BOOL)usingRemoteNetworkObserver;

- (void).cxx_destruct;
- (void)_setNetworkState:(unsigned int)arg1;
- (void)_update;
- (void)_updateCompletionBlocks;
- (void)_updateNetworkActivityIndicator;
- (void)_updateNetworkStateWithFlags:(unsigned int)arg1;
- (void)_updateNetworkStateWithNotifyToken:(int)arg1;
- (void)_updateRemoteObserver;
- (void)airplaneModeChanged;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isWifiCapable;
- (unsigned int)networkState;
- (void)networkStateWithCompletionBlock:(id /* block */)arg1;
- (void)popOperation;
- (void)pushOperation;
- (id)remoteObserver;
- (void)setNetworkState:(unsigned int)arg1;
- (void)setRemoteObserver:(id)arg1;
- (void)startObserving;
- (void)stopObserving;
- (void)updateState:(unsigned int)arg1;

@end
