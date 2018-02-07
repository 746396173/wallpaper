//
//  RecommndCollectionViewLayout.h
//  WallWrapper ( https://github.com/kysonzhu/wallpaper.git )
//
//  Created by zhujinhui on 14-12-22.
//  Copyright (c) 2014年 zhujinhui( http://kyson.cn ). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KSCollectionViewLayout.h"
#import "Group.h"

@interface RecommndCollectionViewLayout : KSCollectionViewLayout<UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>

@property (nonatomic,strong) NSArray *groupList;


@end
