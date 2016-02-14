//
//  SettingDataClass.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SettingDataClass : NSObject
{
    NSDictionary *settings;
}
+ (SettingDataClass *) instance;
-(void)setSetting:(NSDictionary*)set;
-(NSDictionary*)getSetting;
-(NSString*)getCurrencySymbol;
-(NSString*)get_instagram_client_id;
-(BOOL)getEnableAutoHideSetting;
-(void)autoHideGlobal:(UIScrollView*)scroll navigationView:(UINavigationController*)nav contentOffset:(CGPoint)offset;
@end
