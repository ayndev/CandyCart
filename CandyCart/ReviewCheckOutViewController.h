//
//  ReviewCheckOutViewController.h
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
#import "ChooseCreditCardController.h"
#import "DetailViewController.h"
#import "CreditCardController.h"
@interface ReviewCheckOutViewController : UIViewController<UIScrollViewDelegate,MBProgressHUDDelegate>

{
    CGPoint initialContentOffset;
    CGPoint svos;
    CGRect currentRect;
    
    MGScrollView *scroller;
    MBProgressHUD *HUD;
    UITextField *couponTextField;
    MyCartBox *couponBox;
    BOOL already_choose_payment_method;
    NSString *paymentMethodID;
    FPPopoverController *pop;
 
    UILabel *paymentMethodLabel;
    
    
   
}
-(void)addCouponOnReturn:(NSString*)code;
-(void)choosePaymentMethodOnChoose:(NSDictionary*)info;
-(void)cancelBtn;
@end
