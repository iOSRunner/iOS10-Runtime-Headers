/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BKSProcessAssertionClient, NSString, BSSignal, NSObject<OS_dispatch_queue>;

@interface BKSProcessAssertion : NSObject <BKSProcessAssertionClientHandler> {
    BSSignal *_invalidationSignal;
    bool_acquiring;
    bool_acquired;
    int _pid;
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_name;
    unsigned int _flags;
    unsigned int _reason;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _acquisitionHandler;

    BKSProcessAssertionClient *_client;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(copy) NSString * name;
@property unsigned int flags;
@property(readonly) unsigned int reason;
@property(readonly) bool valid;
@property(copy) id invalidationHandler;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)NameForReason:(unsigned int)arg1;

- (bool)valid;
- (void)setAcquisitionHandler:(id)arg1;
- (id)acquisitionHandler;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id)arg5;
- (void)assertionDidInvalidate;
- (void)_clientQueue_notifyAssertionAcquired:(bool)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)_clientQueue_invalidate:(bool)arg1;
- (void)_clientQueue_updateAssertion;
- (void)_clientQueue_acquireAssertion;
- (void)_clientQueue_setAcquisitionHandler:(id)arg1;
- (void)setName:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id)arg5;
- (void)setFlags:(unsigned int)arg1;
- (id)init;
- (unsigned int)reason;
- (id)name;
- (void)invalidate;
- (void)dealloc;
- (id)invalidationHandler;
- (unsigned int)flags;

@end