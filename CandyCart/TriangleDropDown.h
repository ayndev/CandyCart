//
//  TriangleDropDown.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TriangleDropDown : UIView
{
    UIColor *colors;
}
-(void)setColor:(UIColor*)color;
-(void)rotateToDown;
@end
