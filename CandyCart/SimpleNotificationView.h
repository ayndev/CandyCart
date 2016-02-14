//
//  SimpleNotificationView.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleNotificationView : UIView
{
    UIView *inView;
    BOOL isOpen;
    UILabel *closeLbl;
    NSTimer *timer;
    
}
@property (nonatomic, retain) UILabel *label;
@property (nonatomic,retain) UIImageView *closeBtn;
- (id)initWithFrame:(CGRect)frame andView:(UIView*)view;
-(void)showView:(NSString*)setText completed:(void (^)())block;
-(void)closeView;
@end
