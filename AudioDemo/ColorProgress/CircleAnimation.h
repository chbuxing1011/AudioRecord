//
//  CircleAnimation.h
//  Model
//
//  Created by Wanglichen on 15/1/30.
//  Copyright (c) 2015年 Wanglichen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CircleAnimation;

@protocol circleAcimaionDelegate <NSObject>
- (void)circleAnimationFinished:(CircleAnimation*)circle;
@end

@interface CircleAnimation : UIView
@property (weak, nonatomic) id <circleAcimaionDelegate> delegate;
@property (nonatomic) CGFloat  startValue;            // 起始值（0~1）
@property (nonatomic) CGFloat  lineWidth;             // 线宽(>0)
@property (nonatomic, strong) UIColor *lineColor;     // 线条颜色
@property (nonatomic) CGFloat  value;                 // 变化的值
@end
