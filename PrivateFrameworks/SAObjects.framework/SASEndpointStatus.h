/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASEndpointStatus : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) BOOL confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endpointConfirmationTimestamp;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)endpointStatus;
+ (id)endpointStatusWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)confirmed;
- (id)encodedClassName;
- (id)endpointConfirmationTimestamp;
- (id)groupIdentifier;
- (void)setConfirmed:(BOOL)arg1;
- (void)setEndpointConfirmationTimestamp:(id)arg1;

@end
