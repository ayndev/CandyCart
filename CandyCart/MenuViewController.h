//
//  MenuViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DetailViewController;
@class ReviewCheckOutViewController;
@interface MenuViewController : UITableViewController
{
    UITableView *tblView;
    NSArray *menuItems;
    UILabel* lblToSend;
    NSString *termName;
    DetailViewController *det;
    ReviewCheckOutViewController *review;
}
-(void)setArray:(NSArray*)ary;
-(void)setTermNa:(NSString*)ter;
-(void)setLabelToSend:(UILabel*)lbl;
-(void)setDetailController:(DetailViewController*)deti;
-(void)setReviewController:(ReviewCheckOutViewController*)deti;
@end
