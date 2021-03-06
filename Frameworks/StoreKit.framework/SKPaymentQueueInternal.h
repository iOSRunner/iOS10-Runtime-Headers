/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueueInternal : NSObject {
    bool  _checkedIn;
    SKPaymentQueueClient * _client;
    bool  _isRefreshing;
    NSMutableArray * _localTransactions;
    struct __CFArray { } * _observers;
    SKXPCConnection * _requestConnection;
    SKXPCConnection * _responseConnection;
    bool  _restoreFinishedDuringRefresh;
    bool  _restoringCompletedTransactions;
    NSMutableArray * _transactions;
}

- (void)dealloc;

@end
