//
//  CartOption.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TriangleDropDown.h"
#import "FPPopoverController.h"
#import "ARCMacros.h"
#import "MenuViewController.h"
#import "UserDataTapGestureRecognizer.h"
@interface CartOption : NSObject<UIWebViewDelegate>
{
    UILabel *dropDownMenuContainer;
    NSArray *menuItems;
    float getHeight;
}
+ (CartOption *) instance;
-(UILabel*)header:(NSString*)placeholder rect:(CGRect)rect;
-(UILabel*)addDropDownMenu:(CGRect)rect placeholder:(NSString*)placeholder menuItem:(NSArray*)ary;
-(UIButton*)addToCartButton:(CGRect)frame;
-(UIWebView*)productDesc:(NSString*)html frame:(CGRect)rect;
-(float)getWebViewHeight;
-(UIView*)productsYouMayLikeHeader:(CGRect)rect placeHolder:(NSString*)str;
-(UIScrollView*)productYouMayLikeScrollView:(CGRect)rect;
@end
