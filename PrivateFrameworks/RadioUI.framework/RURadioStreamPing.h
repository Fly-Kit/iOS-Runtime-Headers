/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSData;

@interface RURadioStreamPing : NSObject {
    double _timestamp;
    int _type;
    NSData *_value;
}

@property(readonly) double timestamp;
@property(readonly) int type;
@property(copy,readonly) NSData * value;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (id)initWithType:(int)arg1 value:(id)arg2 timestamp:(double)arg3;
- (BOOL)isEqual:(id)arg1;
- (double)timestamp;
- (int)type;
- (id)value;

@end