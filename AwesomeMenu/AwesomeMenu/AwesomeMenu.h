//
//  AwesomeMenu.h
//  AwesomeMenu
//
//  Created by Levey on 11/30/11.
//  Copyright (c) 2011 Levey & Other Contributors. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AwesomeMenuItem.h"

@protocol AwesomeMenuDelegate;


@interface AwesomeMenu : UIView <AwesomeMenuItemDelegate>
{
    NSArray *_menusArray;
    int _flag;
    NSTimer *_timer;
    AwesomeMenuItem *_addButton;
    
    id<AwesomeMenuDelegate> __unsafe_unretained _delegate;
    BOOL _isAnimating;
}
@property (nonatomic, copy) NSArray *menusArray;
@property (nonatomic, getter = isExpanding) BOOL expanding;
@property (nonatomic, unsafe_unretained) id<AwesomeMenuDelegate> delegate;

@property (nonatomic) UIImage *image;
@property (nonatomic) UIImage *highlightedImage;
@property (nonatomic) UIImage *contentImage;
@property (nonatomic) UIImage *highlightedContentImage;

@property (nonatomic, assign) CGFloat nearRadius;
@property (nonatomic, assign) CGFloat endRadius;
@property (nonatomic, assign) CGFloat farRadius;
@property (nonatomic, assign) CGPoint startPoint;
@property (nonatomic, assign) CGFloat timeOffset;
@property (nonatomic, assign) CGFloat rotateAngle;
@property (nonatomic, assign) CGFloat menuWholeAngle;
@property (nonatomic, assign) CGFloat expandRotation;
@property (nonatomic, assign) CGFloat closeRotation;

- (id)initWithFrame:(CGRect)frame menus:(NSArray *)aMenusArray;
@end

@protocol AwesomeMenuDelegate <NSObject>
- (void)AwesomeMenu:(AwesomeMenu *)menu didSelectIndex:(NSInteger)idx;
@end