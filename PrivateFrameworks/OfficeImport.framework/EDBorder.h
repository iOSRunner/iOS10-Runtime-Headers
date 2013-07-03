/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDColorReference, EDResources;

@interface EDBorder : NSObject  {
    EDResources *mResources;
    int mType;
    EDColorReference *mColorReference;
    int mDiagonalType;
}

+ (id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
+ (id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3;
+ (id)borderWithType:(int)arg1 resources:(id)arg2;
+ (id)borderWithType:(int)arg1 colorReference:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
+ (id)borderWithType:(int)arg1 colorReference:(id)arg2 resources:(id)arg3;

- (id)colorReference;
- (void)setDiagonalType:(int)arg1;
- (int)diagonalType;
- (BOOL)isEqualToBorder:(id)arg1;
- (id)initWithResources:(id)arg1;
- (id)color;
- (void)setType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (int)type;

@end