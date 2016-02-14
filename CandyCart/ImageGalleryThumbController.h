//
//  ImageGalleryThumbController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageGalleryBox.h"
@interface ImageGalleryThumbController : UIViewController<UIScrollViewDelegate,IDMPhotoBrowserDelegate>
{
    MGScrollView *scroller;
    NSArray *info;
    NSMutableArray *photos;
}
-(void)setImageInfo:(NSArray*)setInfo;
@end
