//
//  StartAnimView.h
//  StartAnimView_Demo
//
//  Created by admin on 16/7/26.
//  Copyright © 2016年 AlezJi. All rights reserved.
//
#define WeakSelf __weak typeof(self) weakSelf = self
#define DefaultFont(o) [UIFont fontWithName:@"FZMWFont" size:o]
#define SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width
#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height


#import <UIKit/UIKit.h>

typedef void(^CompleteBlock)();


@interface StartAnimView : UIView


//封装为单例
+ (instancetype)shareInstance;

/**
 *  倒计时 anim ......3 2 1 动画
 *
 *  @param anim          anim 变化的数字初始值
 *  @param completeBlock 动画结束后的操作
 */
- (void)showWithAnimNum:(NSInteger)anim CompleteBlock:(CompleteBlock)completeBlock;


@end
