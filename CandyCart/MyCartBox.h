//
//  MyCartBox.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import "MGBox.h"
@class ReviewCheckOutViewController;
@interface MyCartBox : MGBox<UITextFieldDelegate>
{
    ReviewCheckOutViewController *reviewCheckOut;
}
@property(nonatomic,retain) UITextField *couponTextField;
+ (MyCartBox *)cartItem:(NSString*)featuredImgUrl productTitle:(NSString*)title currency:(NSString*)currency price:(NSString*)price quantity:(NSString*)quantity;
+ (MyCartBox *)cartItemServer:(NSString*)featuredImgUrl productTitle:(NSString*)title currency:(NSString*)currency price:(NSString*)price quantity:(NSString*)quantity totalPrice:(NSString*)totalPriceServer has_tax:(BOOL)has_tax;
+ (MyCartBox *)preTotal:(NSString*)label currency:(NSString*)currency totalPrice:(float)price;
+ (MyCartBox *)totalPrice:(NSString*)label currency:(NSString*)currency totalPrice:(float)price include_tax:(BOOL)include_tax tax:(NSString*)taxText;
+ (MyCartBox *)coupon:(NSString*)label couponCode:(NSString*)couponCode;
- (MyCartBox *)addCouponTextField;
-(void)setReviewCheckOutController:(ReviewCheckOutViewController*)re;
+ (MyCartBox *)paymentMethod:(CGSize)size;
+ (MyCartBox *)paymentMethodNoArrow:(CGSize)size;
+ (MyCartBox *)date:(NSString*)label date:(NSString*)dateString;
+(MyCartBox*)halfBox:(CGSize)size lbl:(NSString*)str value:(NSString*)value;
+(MyCartBox*)halfAddressBox:(CGSize)size lbl:(NSString*)str value:(NSString*)value;
- (MyCartBox *)credit_card;
- (MyCartBox *)credit_card_expired;
+ (MyCartBox *)pass_credit_card:(CGSize)size;
@end
