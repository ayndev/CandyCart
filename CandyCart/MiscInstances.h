//
//  MiscInstances.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MiscInstances : NSObject
{
    UILabel *loadmorelbl;
    UIActivityIndicatorView *loadmoreActivity;
}
+ (MiscInstances *) instance;
-(void)setLoadMoreUILabel:(UILabel*)lbl;
-(UILabel*)getLoadMoreUILabel;

-(void)setLoadMoreActivityView:(UIActivityIndicatorView*)act;
-(UIActivityIndicatorView*)getLoadMoreActivityView;
@end
