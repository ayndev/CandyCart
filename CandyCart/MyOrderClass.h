//
//  MyOrderClass.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyOrderClass : NSObject
{
    NSDictionary *myOrder;
    NSDictionary *listOfMyOrder;
}
+ (MyOrderClass *) instance;
-(void)setMyOrder:(NSDictionary*)myOrderEx;
-(NSDictionary*)getMyOrder;

-(void)setListOfMyOrder:(NSDictionary*)listOfMyOrders;
-(NSDictionary*)getListOfMyOrder;
@end
