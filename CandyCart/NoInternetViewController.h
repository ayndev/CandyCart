//
//  NoInternetViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NoInternetViewController : UIViewController
@property(nonatomic,retain) IBOutlet UILabel *desc;
@property(nonatomic,retain) IBOutlet UIButton *tryAgain;
-(IBAction)tryAgainAction:(id)sender;
@end
