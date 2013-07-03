/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CAMeshTransform, NSString, CALayer, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
        void *unused1[8]; 
    } _attr;
}

@property(readonly) CALayer * currentLayer;
@property(readonly) CALayer * _mapKit_mapLayer;
@property(copy) NSArray * states;
@property(copy) NSArray * stateTransitions;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property(copy) CAMeshTransform * meshTransform;
@property BOOL needsLayoutOnGeometryChange;
@property BOOL canDrawConcurrently;
@property BOOL acceleratesDrawing;
@property(getter=isFrozen) BOOL frozen;
@property BOOL allowsHitTesting;
@property BOOL hitTestsAsOpaque;
@property BOOL clearsContext;
@property BOOL contentsOpaque;
@property BOOL literalContentsCenter;
@property(copy) NSString * contentsScaling;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } contentsTransform;
@property BOOL invertsShadow;
@property BOOL shadowPathIsBounds;
@property BOOL swapsMaskAndLayer;
@property BOOL sortsSublayers;
@property BOOL preloadsCache;
@property BOOL allowsGroupBlending;
@property BOOL allowsDisplayCompositing;
@property struct CGSize { float x1; float x2; } sizeRequisition;
@property(copy) NSArray * lights;
@property BOOL acceptsLights;
@property float ambientReflectance;
@property float diffuseReflectance;
@property float specularReflectance;
@property float shininess;
@property float metallicity;
@property(copy) NSArray * behaviors;
@property float velocityStretch;
@property float mass;
@property float momentOfInertia;
@property float coefficientOfRestitution;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property struct CGPoint { float x1; float x2; } position;
@property float zPosition;
@property struct CGPoint { float x1; float x2; } anchorPoint;
@property float anchorPointZ;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transform;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(getter=isHidden) BOOL hidden;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly) CALayer * superlayer;
@property(copy) NSArray * sublayers;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } sublayerTransform;
@property(retain) CALayer * mask;
@property BOOL masksToBounds;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsRect;
@property(copy) NSString * contentsGravity;
@property float contentsScale;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsCenter;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(getter=isOpaque) BOOL opaque;
@property BOOL needsDisplayOnBoundsChange;
@property BOOL drawsAsynchronously;
@property unsigned int edgeAntialiasingMask;
@property BOOL allowsEdgeAntialiasing;
@property struct CGColor { }* backgroundColor;
@property float cornerRadius;
@property float borderWidth;
@property struct CGColor { }* borderColor;
@property float opacity;
@property BOOL allowsGroupOpacity;
@property(retain) id compositingFilter;
@property(copy) NSArray * filters;
@property(copy) NSArray * backgroundFilters;
@property BOOL shouldRasterize;
@property float rasterizationScale;
@property struct CGColor { }* shadowColor;
@property float shadowOpacity;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property float shadowRadius;
@property struct CGPath { }* shadowPath;
@property(copy) NSDictionary * actions;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property(copy) NSString * fillMode;

+ (void)CAMLParserEndElement:(id)arg1;
+ (BOOL)needsLayoutForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (int (*)())CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)())CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (id)layer;
+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (id)context;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (float)mass;
- (void)setNeedsLayoutOnGeometryChange:(BOOL)arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void*)regionBeingDrawn;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setCanDrawConcurrently:(BOOL)arg1;
- (void)setRasterizationScale:(float)arg1;
- (void)setContentsScale:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setOpacity:(float)arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAcceleratesDrawing:(BOOL)arg1;
- (void)setMasksToBounds:(BOOL)arg1;
- (void)setDoubleSided:(BOOL)arg1;
- (void)setSublayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setAnchorPointZ:(float)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setZPosition:(float)arg1;
- (void)setMask:(id)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addSublayer:(id)arg1;
- (void)setSublayers:(id)arg1;
- (void)removeFromSuperlayer;
- (void)setContentsGravity:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setFilters:(id)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)getRendererInfo:(struct _CARenderRendererInfo { int x1; unsigned int x2; unsigned int x3; }*)arg1 size:(unsigned long)arg2;
- (void)setCoefficientOfRestitution:(float)arg1;
- (void)setMomentOfInertia:(float)arg1;
- (void)setVelocityStretch:(float)arg1;
- (void)setBehaviors:(id)arg1;
- (void)setMetallicity:(float)arg1;
- (void)setShininess:(float)arg1;
- (void)setSpecularReflectance:(float)arg1;
- (void)setDiffuseReflectance:(float)arg1;
- (void)setAmbientReflectance:(float)arg1;
- (void)setAcceptsLights:(BOOL)arg1;
- (void)setLights:(id)arg1;
- (void)setAllowsDisplayCompositing:(BOOL)arg1;
- (void)setSwapsMaskAndLayer:(BOOL)arg1;
- (void)setContentsOpaque:(BOOL)arg1;
- (BOOL)contentsOpaque;
- (void)setShadowPathIsBounds:(BOOL)arg1;
- (void)setInvertsShadow:(BOOL)arg1;
- (void)setSortsSublayers:(BOOL)arg1;
- (void)setLiteralContentsCenter:(BOOL)arg1;
- (void)setAllowsHitTesting:(BOOL)arg1;
- (BOOL)isFlipped;
- (BOOL)doubleSided;
- (BOOL)hidden;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (BOOL)layoutIsActive;
- (BOOL)_canDisplayConcurrently;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (BOOL)shadowPathIsBounds;
- (BOOL)invertsShadow;
- (BOOL)swapsMaskAndLayer;
- (BOOL)literalContentsCenter;
- (BOOL)hitTestsAsOpaque;
- (BOOL)allowsGroupBlending;
- (BOOL)allowsDisplayCompositing;
- (BOOL)preloadsCache;
- (float)coefficientOfRestitution;
- (float)momentOfInertia;
- (float)velocityStretch;
- (float)metallicity;
- (float)shininess;
- (float)specularReflectance;
- (float)diffuseReflectance;
- (float)ambientReflectance;
- (BOOL)acceptsLights;
- (id)behaviors;
- (id)lights;
- (id)meshTransform;
- (BOOL)isDescendantOf:(id)arg1;
- (void)setContentsChanged;
- (BOOL)canDrawConcurrently;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (struct CADoublePoint { double x1; double x2; })doublePosition;
- (BOOL)allowsGroupOpacity;
- (BOOL)allowsEdgeAntialiasing;
- (void)setDrawsAsynchronously:(BOOL)arg1;
- (float)rasterizationScale;
- (BOOL)shouldRasterize;
- (struct CGPath { }*)shadowPath;
- (void)setActions:(id)arg1;
- (id)compositingFilter;
- (void)setBackgroundFilters:(id)arg1;
- (id)backgroundFilters;
- (id)filters;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsCenter;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (void)setGeometryFlipped:(BOOL)arg1;
- (BOOL)isGeometryFlipped;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (struct CGSize { float x1; float x2; })sizeRequisition;
- (void)layoutSublayers;
- (void)setSizeRequisition:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)drawsMipmapLevels;
- (BOOL)clearsContext;
- (BOOL)acceleratesDrawing;
- (BOOL)drawsAsynchronously;
- (BOOL)isOpaque;
- (void)_display;
- (struct CGColor { }*)borderColor;
- (float)borderWidth;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransform;
- (unsigned int)edgeAntialiasingMask;
- (struct CGColor { }*)backgroundColor;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (struct CGColor { }*)shadowColor;
- (float)shadowRadius;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (float)shadowOpacity;
- (void)displayIfNeeded;
- (void)layoutIfNeeded;
- (float)opacity;
- (BOOL)isHidden;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (BOOL)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_cancelAnimationTimer;
- (BOOL)_scheduleAnimationTimer;
- (id)modelLayer;
- (BOOL)sortsSublayers;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)masksToBounds;
- (BOOL)isDoubleSided;
- (BOOL)allowsHitTesting;
- (BOOL)ignoresHitTesting;
- (id)ancestorSharedWithLayer:(id)arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (BOOL)needsDisplayOnBoundsChange;
- (id)actionForKey:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)display;
- (void)setNeedsLayout;
- (BOOL)needsLayoutOnGeometryChange;
- (float)zPosition;
- (float)anchorPointZ;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })sublayerTransform;
- (void)_dealloc;
- (float)cornerRadius;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setContents:(id)arg1;
- (id)minificationFilter;
- (id)magnificationFilter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (float)contentsScale;
- (float)minificationFilterBias;
- (id)contents;
- (unsigned int)_renderImageCopyFlags;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 30; struct Vec2<double> { double x_31_2_1; double x_31_2_2; } x_3_1_31; struct Rect { double x_32_2_1; double x_32_2_2; double x_32_2_3; double x_32_2_4; } x_3_1_32; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_5_1_1; } x5; struct Layer {} *x6; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_7_1_1; } x7; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_8_1_1; } x8; struct Ref<CA::Render::Handle> { struct Handle {} *x_9_1_1; } x9; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (id)_initWithReference:(id)arg1;
- (BOOL)contentsAreFlipped;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)setTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)setFillMode:(id)arg1;
- (id)fillMode;
- (BOOL)autoreverses;
- (void)setRepeatDuration:(double)arg1;
- (double)repeatDuration;
- (float)repeatCount;
- (double)timeOffset;
- (void)removeAnimationForKey:(id)arg1;
- (id)presentationLayer;
- (double)beginTime;
- (void)setDuration:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (id)mask;
- (id)sublayers;
- (id)initWithLayer:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)superlayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)dependentStatesOfState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)addState:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setContentsScaling:(id)arg1;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)style;
- (id)init;
- (id)debugDescription;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)name;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id).cxx_construct;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)delegate;
- (id)actions;
- (void)setMeshTransform:(id)arg1;
- (void)setAllowsEdgeAntialiasing:(BOOL)arg1;
- (void)setHitTestsAsOpaque:(BOOL)arg1;
- (BOOL)opaque;
- (void)setFlipped:(BOOL)arg1;
- (id)contentsScaling;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setFrozen:(BOOL)arg1;
- (void)setPreloadsCache:(BOOL)arg1;
- (void)setAllowsGroupOpacity:(BOOL)arg1;
- (void)setDoublePosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (void)setDoubleBounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)animationKeys;
- (BOOL)isFrozen;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)invalidateContents;
- (void)removeAllAnimations;
- (void)clearHasBeenCommitted;
- (void)setClearsContext:(BOOL)arg1;
- (void)setShouldRasterize:(BOOL)arg1;
- (id)contentsGravity;
- (void)layoutBelowIfNeeded;
- (BOOL)needsLayout;
- (void)setCornerRadius:(float)arg1;
- (void)setAllowsGroupBlending:(BOOL)arg1;
- (BOOL)hasBeenCommitted;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (void)setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setMass:(float)arg1;
- (double)duration;
- (struct CGPoint { float x1; float x2; })position;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)compareTextEffectsOrdering:(id)arg1;
- (BOOL)uiHasFilterWithName:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_gkRecursiveDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (BOOL)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;
- (id)currentLayer;
- (BOOL)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id)arg3;
- (id)_mapKit_mapLayer;

@end