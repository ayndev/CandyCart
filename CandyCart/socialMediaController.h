//
//  MenuViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>
#import <MessageUI/MessageUI.h>

@protocol socialMediaControllerDelegate
-(void)didChooseEmail;
@end

@class DetailViewController;
@class FPPopoverController;
@interface socialMediaController : UITableViewController<MFMailComposeViewControllerDelegate>
{
    UITableView *tblView;
    NSArray *menuItems;
    NSString *url;
    DetailViewController *de;
    FPPopoverController *pop;
    
     id <socialMediaControllerDelegate> delegate;
}
@property (retain, nonatomic) id <socialMediaControllerDelegate> delegate;
-(void)setUrl:(NSString*)productURL;

@end
