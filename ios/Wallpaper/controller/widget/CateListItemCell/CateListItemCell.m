//
//  CateListItemCell.m
//  WallWrapper ( https://github.com/kysonzhu/wallpaper.git )
//
//  Created by zhujinhui on 14-12-31.
//  Copyright (c) 2014年 zhujinhui( http://kyson.cn ). All rights reserved.
//

#import "CateListItemCell.h"

@implementation CateListItemCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

-(void)awakeFromNib{
    [super awakeFromNib];
}


@end
