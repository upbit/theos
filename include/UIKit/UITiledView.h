/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray, NSString;

@interface UITiledView : UIView {
	NSMutableArray* _rows;
	NSMutableArray* _unusedTiles;
	NSString* _minificationFilter;
	CGRect _visibleRect;
	CGRect _requiredDrawRect;
	CGRect _dirtyRect;
	CGSize _tileSize;
	CGSize _firstTileSize;
	CGPoint _tileOrigin;
	unsigned _maxTileCount;
	BOOL _drawsGrid;
	BOOL _isTilingEnabled;
	BOOL _logsTilingChanges;
	BOOL _tileDrawingEnabled;
	BOOL _inLayout;
	BOOL _allNewTilesNeeded;
	BOOL _positionsTilesFromOrigin;
	BOOL _sizesTilesToFit;
	BOOL _tilesOpaque;
	BOOL _adjustsMaxTileCountDynamically;
}
+(Class)tileClass;
-(unsigned)_usedTileCount;
-(unsigned)_tileCount;
-(id)_createTileWithFrame:(CGRect)frame;
-(CGRect)gridRect;
-(void)_removeTile:(id)tile cache:(BOOL)cache;
-(void)_removeRowAtIndex:(unsigned)index cache:(BOOL)cache;
-(void)_removeColumnAtIndex:(unsigned)index cache:(BOOL)cache;
-(unsigned)_removeLeastVisibleRowOrColumn:(BOOL)column;
-(void)_removeTilesIfNecessaryForRow:(BOOL)row;
-(void)removeAllNonVisibleTiles;
-(void)removeAllTiles;
-(void)_updateTileCache;
-(void)_removeTilesIfNecessary;
-(void)_createRow:(BOOL)row;
-(void)_createColumn:(BOOL)column;
-(void)_addNeededTiles;
-(BOOL)shouldRepaintInPieces:(CGRect)pieces region:(void*)region;
-(void)accurateDirtyRects:(CGRect**)rects count:(unsigned*)count clear:(BOOL)clear;
-(void)_invalidateTiles;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(BOOL)tilesNeedDisplay;
-(void)flushDirtyRects;
-(void)layoutBeforeDraw;
-(void)_layoutTiles;
-(CGRect)_visibleRect;
-(CGRect)visibleRect;
-(void)layoutSubviews;
-(void)setNeedsLayout;
-(void)_didScroll;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)setNeedsDisplay;
-(void)setTransform:(CGAffineTransform)transform;
-(void)setTileSize:(CGSize)size;
-(void)setSizesTilesToFit:(BOOL)fit;
-(void)setPositionsTilesFromOrigin:(BOOL)origin;
-(void)setTileOrigin:(CGPoint)origin;
-(CGPoint)tileOrigin;
-(CGSize)tileSize;
-(void)setDrawsGrid:(BOOL)grid;
-(BOOL)drawsGrid;
-(void)setMaxTileCount:(unsigned)count;
-(unsigned)maxTileCount;
-(void)setAdjustsMaxTileCountDynamically:(BOOL)dynamically;
-(unsigned)adjustedMaxTileCount;
-(BOOL)_canDrawContent;
-(void)setTilingEnabled:(BOOL)enabled;
-(BOOL)isTilingEnabled;
-(void)setLogsTilingChanges:(BOOL)changes;
-(BOOL)logsTilingChanges;
-(void)ensureDrawnRect:(CGRect)rect;
-(void)setFirstTileSize:(CGSize)size;
-(void)setTileDrawingEnabled:(BOOL)enabled;
-(BOOL)tileDrawingEnabled;
-(void)setTileMinificationFilter:(id)filter;
-(void)setTilesOpaque:(BOOL)opaque;
-(BOOL)tilesOpaque;
@end

#endif
