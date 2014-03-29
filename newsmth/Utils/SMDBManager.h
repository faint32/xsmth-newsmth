//
//  SMDBManager.h
//  newsmth
//
//  Created by Maxwin on 14-3-8.
//  Copyright (c) 2014年 nju. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMDBManager : NSObject
+ (instancetype)instance;

- (void)insertPost:(SMPost *)post;
- (void)queryPost:(int)pid completed:(void (^)(SMPost *post))completed;

// unread count
- (void)insertPostReadCount:(SMPost *)post type:(NSInteger)type;
- (void)queryReadCount:(NSArray *)posts type:(NSInteger)type completed:(void (^)(NSArray *resultPosts))completed;

@end