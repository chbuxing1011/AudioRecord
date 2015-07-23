//
//  VerticalAlignmentLabel.h
//  AudioDemo
//
//  Created by HuiYin on 15/7/3.
//  Copyright (c) 2015年 tusm. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum
{
    VerticalAlignmentTop = 0, // default
    VerticalAlignmentMiddle,
    VerticalAlignmentBottom,
} VerticalAlignment;

@interface VerticalAlignmentLabel : UILabel
{
@private
    VerticalAlignment _verticalAlignment;
    
}

@property (nonatomic) VerticalAlignment verticalAlignment;

@end
