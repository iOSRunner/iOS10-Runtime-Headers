/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnarchiver : NSCoder  {
    void *datax;
    unsigned int cursor;
    struct _NSZone { } *objectZone;
    unsigned int systemVersion;
    BOOL streamerVersion;
    BOOL swap;
    BOOL unused1;
    BOOL unused2;
    void *pointerTable;
    void *stringTable;
    id classVersions;
    int lastLabel;
    void *map;
    void *allUnarchivedObjects;
    id reserved;
}

+ (id)unarchiveObjectWithFile:(id)arg1;
+ (void)initialize;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)classNameDecodedForArchiveClassName:(id)arg1;
+ (void)decodeClassName:(id)arg1 asClassName:(id)arg2;

- (void)_setAllowedClasses:(id)arg1;
- (id)data;
- (void)finalize;
- (void)dealloc;
- (unsigned int)systemVersion;
- (id)decodeDataObject;
- (void*)decodeBytesWithReturnedLength:(unsigned int*)arg1;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (struct _NSZone { }*)objectZone;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (id)classNameDecodedForArchiveClassName:(id)arg1;
- (BOOL)isAtEnd;
- (id)decodeObject;
- (id)initForReadingWithData:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
- (int)versionForClassName:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(void*)arg3;

@end