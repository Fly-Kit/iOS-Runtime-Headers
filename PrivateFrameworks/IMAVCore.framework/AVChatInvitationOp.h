/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableDictionary;

@interface AVChatInvitationOp : AVChatNegotiationOp {
    unsigned int _audioOnly : 1;
    NSMutableDictionary *_inviteesInfo;
}

- (void)createChildOperations;
- (void)dealloc;
- (void)didFinish;
- (id)initWithParticipant:(id)arg1 conferenceID:(id)arg2;
- (void)main;

@end