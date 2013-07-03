/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableDictionary, NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary  {
    NSSharedKeySet *_keyMap;
    unsigned int _count;
    id *_values;
    int (*_ifkIMP)();
    NSMutableDictionary *_sideDic;
    unsigned long _mutations;
}

+ (id)sharedKeyDictionaryWithKeySet:(id)arg1;

- (id)initWithKeySet:(id)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned int)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)finalize;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)keySet;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end