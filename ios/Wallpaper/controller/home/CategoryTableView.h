//
//  CategoryTableView.h
//  WallWrapper ( https://github.com/kysonzhu/wallpaper.git )
//
//  Created by zhujinhui on 14-12-30.
//  Copyright (c) 2014年 zhujinhui( http://kyson.cn ). All rights reserved.
//

#import <UIKit/UIKit.h>
@class Classification;

@protocol CategoryTableViewDelegate;

@interface CategoryTableView : UITableView<UITableViewDataSource,UITableViewDelegate>


@property (nonatomic, assign) id<CategoryTableViewDelegate> mDelegate;

@property (nonatomic,retain) NSArray<Classification *> *categoryList;

@end

@protocol CategoryTableViewDelegate <NSObject>

-(void)categoryTableViewItemClicked:(NSIndexPath *) indexPath;

@end
