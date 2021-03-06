/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPNetworkAgent : NSObject <NWNetworkAgent> {
    NSData * _agentData;
    NSPAppRule * _appRule;
    NSPConfiguration * _configuration;
    unsigned char  _dataDigest;
    <NSPNetworkAgentDelegate> * _delegate;
    NSData * _keybag;
    BOOL  active;
    NSString * agentDescription;
    NSUUID * agentUUID;
    BOOL  kernelActivated;
    BOOL  userActivated;
    BOOL  voluntary;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (retain) NSData *agentData;
@property (nonatomic, copy) NSString *agentDescription;
@property (nonatomic, copy) NSUUID *agentUUID;
@property (retain) NSPAppRule *appRule;
@property (retain) NSPConfiguration *configuration;
@property <NSPNetworkAgentDelegate> *delegate;
@property (getter=isKernelActivated, nonatomic) BOOL kernelActivated;
@property (retain) NSData *keybag;
@property (getter=isNetworkProvider, nonatomic) BOOL networkProvider;
@property (getter=isNexusProvider, nonatomic) BOOL nexusProvider;
@property (getter=isSpecificUseOnly, nonatomic) BOOL specificUseOnly;
@property (getter=isUserActivated, nonatomic) BOOL userActivated;
@property (getter=isVoluntary, nonatomic) BOOL voluntary;

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentData;
- (id)agentDescription;
- (id)agentUUID;
- (id)appRule;
- (BOOL)assertAgentWithOptions:(id)arg1;
- (id)configuration;
- (id)copyAgentData;
- (id)delegate;
- (id)init;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKernelActivated;
- (BOOL)isUserActivated;
- (BOOL)isVoluntary;
- (id)keybag;
- (void)parseAgentData;
- (void)setActive:(BOOL)arg1;
- (void)setAgentData:(id)arg1;
- (void)setAgentDescription:(id)arg1;
- (void)setAgentUUID:(id)arg1;
- (void)setAppRule:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKernelActivated:(BOOL)arg1;
- (void)setKeybag:(id)arg1;
- (void)setUserActivated:(BOOL)arg1;
- (void)setVoluntary:(BOOL)arg1;
- (void)unassertAgentWithOptions:(id)arg1;

@end
