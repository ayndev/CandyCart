//
//  WpPostBox.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import "MGBox.h"

@interface WpPostBox : MGBox
+(WpPostBox *)onBrowseTemplateTitleImgDesc:(NSString*)featuredImage; // Template 1
+(WpPostBox *)onBrowseTemplateImgTitleDate:(NSString*)featuredImage title:(NSString*)pTitle ago:(NSString*)ago; // Template 2
+ (WpPostBox *)timeAgo:(NSString*)label;
@end
