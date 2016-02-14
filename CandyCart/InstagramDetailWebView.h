//
//  InstagramDetailWebView.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InstagramDetailWebView : UIViewController<UIScrollViewDelegate,UIWebViewDelegate>
{
    UIWebView *webViewSe;
    NSString *urls;
    CGPoint initialContentOffset;
    NSString *mediaID;
}
-(void)loadUrlInWebView:(NSString*)url mediaID:(NSString*)mediaID;
@end
