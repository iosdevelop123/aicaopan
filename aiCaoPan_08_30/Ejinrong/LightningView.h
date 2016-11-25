//
//  LightningView.h
//  lightningViewDemo
//
//  Created by dayu on 15/11/3.
//  Copyright © 2015年 dayu. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface LightningView : UIView

@property (strong,nonatomic) NSMutableArray *pointArray;//波动点数组
@property (strong,nonatomic) NSMutableArray *priceArray;//波动价数组
@property (strong,nonatomic) UILabel* priceLabel;
- (void)refreshPoint:(NSMutableArray *)pointArray;

@end