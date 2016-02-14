//
//  UserDataTapGestureRecognizer.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DetailViewController;
@interface UserDataTapGestureRecognizer : UITapGestureRecognizer
@property (nonatomic, strong) id userData;
@property (nonatomic, strong) UILabel *currentLabel;
@property (nonatomic, strong) DetailViewController *parentDetail;
@property (nonatomic, strong) id openPopOver;
@end
