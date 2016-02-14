//
//  PostByCategoryViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WpPostBox.h"
#import "PostDetailViewController.h"
#import "PlainPostDetailViewController.h"
@interface PostByCategoryViewController : UIViewController<UIScrollViewDelegate>
{
    MGScrollView *scroller;
    NSDictionary *postDictionary;
    CGPoint initialContentOffset;
    int totalPage;
    int currentPage;
    float fixedHeight;
    BOOL processing;
}
-(void)setPostDictionary:(NSDictionary*)postDictionarys;
@end
