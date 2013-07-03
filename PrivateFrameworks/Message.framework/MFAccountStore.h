/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class ACAccountStore;

@interface MFAccountStore : NSObject  {
    int _accountStoreLock;
    ACAccountStore *_accountStore;
}

@property(readonly) ACAccountStore * persistentStore;

+ (id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(BOOL)arg3;
+ (BOOL)_shouldUpdateAccountsInPlace;
+ (id)deliveryAccountTypeIdentifiers;
+ (id)incomingAccountTypeIdentifiers;
+ (id)sharedAccountStore;

- (id)_accountWithPersistentAccount:(id)arg1 useExisting:(BOOL)arg2;
- (id)accountsWithTypeIdentifiers:(id)arg1;
- (void)_accountsStoreChanged:(id)arg1;
- (void)setPersistentStore:(id)arg1;
- (id)deliveryAccounts;
- (id)incomingAccounts;
- (void)removePersistentAccountWithAccount:(id)arg1;
- (void)savePersistentAccountWithAccount:(id)arg1;
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1;
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1;
- (id)existingAccountWithPersistentAccount:(id)arg1;
- (id)persistentStore;
- (id)init;
- (void)dealloc;

@end