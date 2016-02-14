//
//  AddToCartQuantity.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DetailViewController;
@interface AddToCartQuantity : UITableViewController
{
    NSMutableArray *array;
    DetailViewController *detailController;
}
-(void)setTotalQuantity:(int)quantity setCurrentDetail:(DetailViewController*)det;
@end
