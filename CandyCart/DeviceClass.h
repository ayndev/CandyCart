//
//  DeviceClass.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum {
    IPHONE_5,
    IPHONE,
    IPAD
} DeviceType;

typedef enum {
    iOS6,
    iOS7
} OSVersion;
@interface DeviceClass : NSObject
{
    
    NSString *pushToken;
}
+ (DeviceClass *) instance;
-(int)getDevice;
-(CGRect)getResizeScreen:(BOOL)isTopButtonAvailable;
- (NSString *)getUUID;
-(NSString*)getDeviceModel;
-(NSString*)getPushToken;
-(void)setPushToken:(NSString*)push_token;
-(int)getOSVersion;
@end
