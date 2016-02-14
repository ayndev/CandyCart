//
//  BrowseViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImage+StackBlur.h"
#import "BrowseDetailViewController.h"
#import "CameraViewController.h"
@interface BrowseViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UISearchBarDelegate>
{
    CGPoint initialContentOffset;
    UITableView *tblView;
    NSArray *aryDic;
    UIView *searchLayer;
    UISearchBar *productSearchBar;
    UIImageView* blurView;
    
}
@end
