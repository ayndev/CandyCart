//
//  GeneralPopTableView.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GeneralPopTableViewDelegate
-(void)didChooseGeneralPopTableView:(NSDictionary*)chooseData;
@end

@interface GeneralPopTableView : UITableViewController
{
     UITableView *tbl;
     NSArray *menuItems;
    NSString *termName;
    NSString *detailTermName;
    BOOL needDetail;
    
    id <GeneralPopTableViewDelegate> delegate;
}
@property (retain, nonatomic) id <GeneralPopTableViewDelegate> delegate;
-(void)initGeneralPopTableView:(NSString*)tblListTermName detailList:(NSString*)detailListTermName menuItem:(NSArray*)menuItemsArray;
@end
