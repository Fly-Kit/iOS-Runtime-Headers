/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDSecureBackupContext : NSObject {
    CDPDevice * _device;
    NSString * _localSecret;
    unsigned int  _localSecretType;
    NSString * _recoveryKey;
    NSString * _recoverySecret;
    BOOL  _silentRecovery;
    BOOL  _usePreviouslyCachedSecret;
}

@property (nonatomic, copy) CDPDevice *device;
@property (nonatomic, copy) NSString *localSecret;
@property (nonatomic) unsigned int localSecretType;
@property (nonatomic, copy) NSString *recoveryKey;
@property (nonatomic, copy) NSString *recoverySecret;
@property (nonatomic) BOOL silentRecovery;
@property (nonatomic) BOOL usePreviouslyCachedSecret;

- (void).cxx_destruct;
- (id)device;
- (id)localSecret;
- (unsigned int)localSecretType;
- (id)recoveryKey;
- (id)recoverySecret;
- (void)setDevice:(id)arg1;
- (void)setLocalSecret:(id)arg1;
- (void)setLocalSecretType:(unsigned int)arg1;
- (void)setRecoveryKey:(id)arg1;
- (void)setRecoverySecret:(id)arg1;
- (void)setSilentRecovery:(BOOL)arg1;
- (void)setUsePreviouslyCachedSecret:(BOOL)arg1;
- (BOOL)silentRecovery;
- (BOOL)usePreviouslyCachedSecret;

@end
