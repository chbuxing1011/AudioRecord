//
//  ProgressViewController.m
//  AudioDemo
//
//  Created by HuiYin on 15/7/3.
//  Copyright (c) 2015年 tusm. All rights reserved.
//

#import "ProgressViewController.h"
#import "CircleAnimation.h"
#import "CircleView.h"

@interface ProgressViewController ()<circleAcimaionDelegate>
{
    CAShapeLayer *_trackLayer;
}
@end

@implementation ProgressViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    CircleAnimation *circleView = [[CircleAnimation alloc] initWithFrame:CGRectMake(self.view.frame.size.width*0.5-50, self.view.frame.size.height*0.5-50, 100, 100)];
    circleView.delegate = self;
    circleView.startValue = 0;
    circleView.lineColor = [UIColor redColor];
    circleView.lineWidth = 8.0;
    circleView.value = 0.1;
//    [self.view addSubview:circleView];
    // Do any additional setup after loading the view.
    
    CircleView *t_circleView = [[CircleView alloc] initWithFrame:CGRectMake(self.view.frame.size.width*0.5-50, self.view.frame.size.height*0.5-50, 100, 100)];
    [self.view addSubview:t_circleView];
    [t_circleView setPercent:100 animated:YES];
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - CircleAnimation
- (void)circleAnimationFinished:(CircleAnimation*)circle
{
    
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
