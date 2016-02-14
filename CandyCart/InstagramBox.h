//
//  InstagramBox.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import "MGBox.h"
#import "NSDate+TimeAgo.h"
@interface InstagramBox : MGBox
+(InstagramBox *)instagramBox:(NSString*)featuredImage type:(NSString*)type;
+(InstagramBox *)instagramHeader:(NSString*)profileImage name:(NSString*)name created:(NSString*)createdTime mediaID:(NSString*)mediaID;
+(InstagramBox *)instagramNavTop:(int)postTotalCount;
@end
