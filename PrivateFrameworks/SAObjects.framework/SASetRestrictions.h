/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SASetRestrictions : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * restrictions;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setRestrictionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRestrictions;

- (id)encodedClassName;
- (void)setRestrictions:(id)arg1;
- (id)restrictions;
- (id)groupIdentifier;

@end