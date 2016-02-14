//
//  MyOrderViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGScrollView.h"
#import "MGTableBoxStyled.h"
#import "MGLineStyled.h"
#import "OrderViewController.h"
#import "GeneralPopTableView.h"
@interface MyOrderViewController : UIViewController<UIScrollViewDelegate,UIGestureRecognizerDelegate,GeneralPopTableViewDelegate,MBProgressHUDDelegate>
{
    CGPoint initialContentOffset;
    CGPoint svos;
    CGRect currentRect;
    MGScrollView *scroller;
     MBProgressHUD *HUD;
    UIButton *filter;
}

@end
