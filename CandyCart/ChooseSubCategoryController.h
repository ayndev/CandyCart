//
//  ChooseSubCategoryController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FPPopoverController.h"
@class BrowseDetailViewController;
@interface ChooseSubCategoryController : UITableViewController
{
    UITableView *tblView;
    NSArray *menuItems;
    UILabel* lblToSend;
    FPPopoverController *pop;
    BrowseDetailViewController *brow;
    NSString *categoryParentID;
}
-(void)setArray:(NSArray*)ary;
-(void)setLabelToSend:(UILabel*)lbl;
-(void)setPopOverController:(FPPopoverController*)pops;
-(void)setParentController:(BrowseDetailViewController*)browse;
-(void)setCategoryParentID:(NSString*)parentID;
@end
