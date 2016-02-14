//
//  OrderViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGScrollView.h"
#import "MGTableBoxStyled.h"
#import "MGLineStyled.h"
#import "MyCartBox.h"
#import "PaymentWebViewController.h"
#import "OrderNotesViewController.h"
@interface OrderViewController : UIViewController<UIScrollViewDelegate,MBProgressHUDDelegate>

{
    CGPoint initialContentOffset;
    CGPoint svos;
    CGRect currentRect;
    MGScrollView *scroller;
    MBProgressHUD *HUD;
    UIButton *payBtn;
    UIBarButtonItem *payBtnItem;
    BOOL noCloseBtn;
    UIButton *orderNotes;
    UIBarButtonItem *orderNotesBtnItems;
}
-(void)refreshOrderPaymentSuccessful;
-(void)refreshOrderFailed;

//UI Modified
-(void)noCloseBtn;
@end
