//
//  CommentViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGScrollView.h"
#import "MGTableBoxStyled.h"
#import "MGLineStyled.h"
#import "PhotoBox.h"
#import "DEComposeViewController.h"
#import "ChildCommentViewController.h"
@interface CommentViewController : UIViewController<UIScrollViewDelegate,MBProgressHUDDelegate>
{
    MGScrollView *scroller;
     CGPoint initialContentOffset;
    NSDictionary *productReview;
    UIActivityIndicatorView *spinner;
    MBProgressHUD *HUD;
    
}
@property(nonatomic,retain) NSString* postID;
@end
