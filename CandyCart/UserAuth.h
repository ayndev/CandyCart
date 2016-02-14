//
//  UserAuth.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserAuth : NSObject
{
    bool alreadyLogged;
}
@property(nonatomic,retain) NSMutableDictionary *userData;
@property(nonatomic,retain) NSString *username;
@property(nonatomic,retain) NSString *password;

+ (UserAuth *) instance;
-(void)setUserDatas:(NSDictionary *)source;
-(void)saveAuthorizedStatus:(NSString*)usernameCopy password:(NSString*)passwordCopy;
-(BOOL)checkUserAlreadyLogged;
-(BOOL)checkUserIfAlreadyLoggedInMobile;
-(void)deleteArrayFile;
-(void)setAlreadyLoggedIn:(BOOL)status;
@end
