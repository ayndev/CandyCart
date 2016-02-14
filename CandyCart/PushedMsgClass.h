//
//  PushedMsgClass.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//


typedef enum {
    NONE,
    POST,
    PAGE,
    PRODUCT,
    LINK,
    COMMENT,
    ORDERNOTES,
    STATUS_CHANGED
} kPushMsgType;
#define kPushMsgTypeArray @"none", @"post", @"page", @"product",@"link",@"comment",@"order_note",@"status_changed", nil


#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>
@interface PushedMsgClass : NSObject<MBProgressHUDDelegate,MFMailComposeViewControllerDelegate>
{
    NSString *currentPostID; // to save if once got msg and use later...
  
    NSString *currentBody;
    MBProgressHUD *HUD;
    UIViewController *currentController;
    
    
}
+ (PushedMsgClass *) instance;
-(void)getPushNotificationMessage:(NSDictionary*)userInfo needReloadRightView:(BOOL)needReload;
@end
