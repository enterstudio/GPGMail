//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class CALayer, NSColor, ViewActionForwardingLayerDelegate;

@interface TabBarViewButton : NSButton
{
    NSColor *_backgroundColor;	// 176 = 0xb0
    BOOL _active;	// 184 = 0xb8
    BOOL _showsLeftSeparator;	// 185 = 0xb9
    BOOL _showsRightSeparator;	// 186 = 0xba
    BOOL _hasMouseOverHighlight;	// 187 = 0xbb
    BOOL _mouseOverHighlightShouldIncludeRightBorderFrameWidth;	// 188 = 0xbc
    BOOL _forcesActiveWindowState;	// 189 = 0xbd
    ViewActionForwardingLayerDelegate *_layerDelegate;	// 192 = 0xc0
    CALayer *_backgroundLayer;	// 200 = 0xc8
    CALayer *_centerLayer;	// 208 = 0xd0
    CALayer *_leftBorderLayer;	// 216 = 0xd8
    CALayer *_rightBorderLayer;	// 224 = 0xe0
    CALayer *_topBorderLayer;	// 232 = 0xe8
}

+ (Class)cellClass;	// IMP=0x00000001002ea99e
@property(readonly, nonatomic) CALayer *topBorderLayer; // @synthesize topBorderLayer=_topBorderLayer;
@property(readonly, nonatomic) CALayer *rightBorderLayer; // @synthesize rightBorderLayer=_rightBorderLayer;
@property(readonly, nonatomic) CALayer *leftBorderLayer; // @synthesize leftBorderLayer=_leftBorderLayer;
@property(readonly, nonatomic) CALayer *centerLayer; // @synthesize centerLayer=_centerLayer;
@property(readonly, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(readonly, nonatomic) ViewActionForwardingLayerDelegate *layerDelegate; // @synthesize layerDelegate=_layerDelegate;
@property(nonatomic) BOOL forcesActiveWindowState; // @synthesize forcesActiveWindowState=_forcesActiveWindowState;
@property(nonatomic) BOOL mouseOverHighlightShouldIncludeRightBorderFrameWidth; // @synthesize mouseOverHighlightShouldIncludeRightBorderFrameWidth=_mouseOverHighlightShouldIncludeRightBorderFrameWidth;
@property(nonatomic) BOOL hasMouseOverHighlight; // @synthesize hasMouseOverHighlight=_hasMouseOverHighlight;
- (void).cxx_destruct;	// IMP=0x00000001002ebb62
- (void)setBackgroundColor:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00000001002eb916
@property(readonly, nonatomic) BOOL isAnimatingBackgroundColor;
- (void)setHasMouseOverHighlight:(BOOL)arg1 animated:(BOOL)arg2;	// IMP=0x00000001002eb775
- (void)_updateBackgroundLayerImagesForActiveTab:(BOOL)arg1 inActiveWindow:(BOOL)arg2;	// IMP=0x00000001002eb572
- (void)layout;	// IMP=0x00000001002eb0e6
- (void)updateLayer;	// IMP=0x00000001002eaf55
- (BOOL)wantsUpdateLayer;	// IMP=0x00000001002eaf4a
- (void)_windowChangedKeyState;	// IMP=0x00000001002eaf06
@property(nonatomic) BOOL showsRightSeparator;
@property(nonatomic) BOOL showsLeftSeparator;
@property(nonatomic) BOOL active;
@property(readonly, nonatomic) double rightCapWidth;
@property(readonly, nonatomic) double leftCapWidth;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002ea9b7

@end
