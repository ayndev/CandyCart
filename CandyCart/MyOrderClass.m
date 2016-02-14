//
//  MyOrderClass.m
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import "MyOrderClass.h"

@implementation MyOrderClass
+ (MyOrderClass *) instance {
    static MyOrderClass *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    });
    
    return sharedInstance;
}

-(void)setMyOrder:(NSDictionary*)myOrderEx
{
    myOrder = myOrderEx;
    
}

-(NSDictionary*)getMyOrder{
    
    return myOrder;
    
}

-(void)setListOfMyOrder:(NSDictionary*)listOfMyOrders
{
    
    listOfMyOrder = listOfMyOrders;
}

-(NSDictionary*)getListOfMyOrder
{
    
    return listOfMyOrder;
}

@end
