//
//  ImageGalleryBox.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import "MGBox.h"

@interface ImageGalleryBox : MGBox
+ (ImageGalleryBox *)imgThumb:(CGSize)size img:(NSString*)url;
@end
