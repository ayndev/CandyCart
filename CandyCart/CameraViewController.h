//
//  CameraViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"
@interface CameraViewController : UIViewController<ZBarReaderViewDelegate,MBProgressHUDDelegate>
{
    ZBarReaderView *readerView;
     ZBarCameraSimulator *cameraSim;
     MBProgressHUD *HUD;
}
@property (nonatomic, retain) IBOutlet ZBarReaderView *readerView;
@end
