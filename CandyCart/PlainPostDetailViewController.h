//
//  PlainPostDetailViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlainPostDetailViewController : UIViewController<UIWebViewDelegate,UIScrollViewDelegate,MBProgressHUDDelegate,socialMediaControllerDelegate,MFMailComposeViewControllerDelegate>
{
     UIWebView *webViewSe;
    NSDictionary *postInfo;
     MBProgressHUD *HUD;
    UIButton *shareBtn;
     FPPopoverController *sharePopOver;
}
-(void)setPostInfo:(NSDictionary*)postIn;
@end
