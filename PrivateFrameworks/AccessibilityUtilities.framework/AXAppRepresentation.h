/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAppRepresentation : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    int  _layoutRole;
    int  _pid;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) BOOL isLayoutFullscreenModal;
@property (nonatomic, readonly) BOOL isLayoutPrimary;
@property (nonatomic) int layoutRole;
@property (nonatomic) int pid;

+ (id)appWithPID:(int)arg1 bundleID:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void)_commonInit;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isLayoutFullscreenModal;
- (BOOL)isLayoutPrimary;
- (int)layoutRole;
- (int)pid;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLayoutRole:(int)arg1;
- (void)setPid:(int)arg1;

@end