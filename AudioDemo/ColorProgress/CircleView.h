//
//  CircleView.h
//  AudioDemo
//
//  Created by HuiYin on 15/7/3.
//  Copyright (c) 2015年 tusm. All rights reserved.
//

#import <UIKit/UIKit.h>

#define degreesToRadians(x) (M_PI*(x)/180.0) //把角度转换成PI的方式
#define  PROGREESS_WIDTH 80 //圆直径
#define PROGRESS_LINE_WIDTH 4 //弧线的宽度
#define PROCESS_COLOR  [UIColor redColor]
@interface CircleView : UIView


-(void)setPercent:(NSInteger)percent animated:(BOOL)animated;
@end
