//
//  RightViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RightViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
  
     NSArray *menuItems;
    NSDictionary *fullInfo;
    UISegmentedControl *segmentControl;
}
@property(nonatomic,retain) UITableView *tbl;
-(void)setItems:(NSDictionary*)items;
@end
