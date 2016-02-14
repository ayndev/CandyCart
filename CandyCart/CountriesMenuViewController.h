//
//  CountriesMenuViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DynamicTableViewController.h"
@class ProfileViewController;
@class BillingCheckOutViewController;
@class ShippingCheckOutViewController;
@interface CountriesMenuViewController : UITableViewController{
    UITableView *tblView;
    NSArray *menuItems;
    NSString *selectedCountry;
    UITableView *tbl;
    ProfileViewController *profileController;
    BillingCheckOutViewController *billingController;
    ShippingCheckOutViewController *shippingController;
    int chooseController;
}
-(void)selectedCountry:(NSString*)country_code;
-(void)setProfileController:(ProfileViewController*)pro;
-(void)setBillingController:(BillingCheckOutViewController*)pro;
-(void)setShippingController:(ShippingCheckOutViewController*)pro;
@end
