//
//  UIImage+Utils.h
//  WallWrapper ( https://github.com/kysonzhu/wallpaper.git )
//
//  Created by zhujinhui on 14-12-25.
//  Copyright (c) 2014年 zhujinhui( http://kyson.cn ). All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIImage(private)

/**
 Compress image with assigned scale
 @param scaleSize 0-100%
 @returns new iamge
 @see
 */
-(UIImage *)scaleto:(float)scaleSize;

@end
