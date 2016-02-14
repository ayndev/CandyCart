//
//  ReadMoreViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGScrollView.h"
#import "MGTableBoxStyled.h"
#import "MGLineStyled.h"
#import "SDSegmentedControl.h"
#import "iPhoneWebView.h"
#import "PhotoBox.h"
@interface ReadMoreViewController : UIViewController<UIWebViewDelegate,UIScrollViewDelegate,MBProgressHUDDelegate>
{
    UIWebView *webViewC;
    SDSegmentedControl *segmentedControl;
    NSString *html;
    BOOL hasAttribute;
        CGPoint initialContentOffset;
    NSDictionary *productInfo;
    UIView *firstView;
    UIView *secondView;
    MGScrollView *scroller;
         MBProgressHUD *HUD;
}
-(void)setFullDescString:(NSString*)string andHasAttribute:(BOOL)has andProductInfo:(NSDictionary*)productInfos;
@end
