//
//  BillingCheckOutViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CountriesMenuViewController.h"
#import "ShippingCheckOutViewController.h"
@interface BillingCheckOutViewController : UIViewController<UITextFieldDelegate,UIScrollViewDelegate,MBProgressHUDDelegate>
{
    CGPoint initialContentOffset;
    CGPoint svos;
    CGRect currentRect;
    
    MBProgressHUD *HUD;
    NSMutableDictionary *userData;
    UIScrollView *scrollView;
    UITextField *billing_firstname;
    UITextField *billing_lastname;
    UITextField *billing_company;
    UITextField *billing_address_1;
    UITextField *billing_address_2;
    UITextField *billing_postcode;
    UITextField *billing_city;
    UITextField *billing_state;
    NSString *billing_state_code;
    BOOL billing_state_has_state;
    UITextField *billing_country;
    NSString *billing_country_code;
    UITextField *billing_phone;
    UITextField *billing_email;
    UIButton *billing_update;

}
-(void)updateCountryTextField:(NSString*)countryName countryCode:(NSString*)countryCode;
-(void)updateStateTextField:(NSString*)stateName stateCode:(NSString*)stateCode;
-(void)updateStateTextFieldNoState;
@end
