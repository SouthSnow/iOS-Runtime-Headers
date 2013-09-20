/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray, VGLMesh, VGLRenderState, VGLTexture, VKPolygonDrawStyle;

@interface VKGroundCoverMapModel : VKMapTileModel <VKMapLayer> {
    float _alpha;
    float _brightness;
    VGLMesh *_groundMesh;
    int _groundMeshCapacity;
    BOOL _hasVegetationSettings;
    VKPolygonDrawStyle *_landStyle;
    VGLTexture *_landTexture;
    VGLTexture *_landTextureVariant;
    float _layoutContentScale;
    float _layoutMaxZ;
    BOOL _needsLandSettingsUpdate;
    VGLRenderState *_renderState;
    BOOL _showVegetation;
    NSMutableArray *_sortedTiles;
    BOOL _usePlainFillColor;
}

+ (BOOL)reloadOnActiveTileGroupChange;
+ (BOOL)reloadOnStylesheetChange;

- (void)activeTileGroupChanged;
- (void)dealloc;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (id)groundMeshForTiles:(id)arg1 relativeToTile:(id)arg2;
- (id)init;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)loadLandSettingsForLevelOfDetail:(unsigned int)arg1 scale:(float)arg2;
- (unsigned int)mapLayerPosition;
- (void)reset;
- (void)setActive:(BOOL)arg1;
- (void)stylesheetDidChange;
- (void)stylesheetWillChange;
- (unsigned int)supportedRenderPasses;
- (void)updateVegetationSettingsFromStylesheet;

@end