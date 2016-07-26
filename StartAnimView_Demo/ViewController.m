//
//  ViewController.m
//  StartAnimView_Demo
//
//  Created by admin on 16/7/26.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import "ViewController.h"
#import "StartAnimView.h"
@interface ViewController ()

@end

@implementation ViewController

-(void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    //先执行 3 2 1 这样的动画
    [[StartAnimView shareInstance] showWithAnimNum:3 CompleteBlock:^{
        
    }];
}




@end
