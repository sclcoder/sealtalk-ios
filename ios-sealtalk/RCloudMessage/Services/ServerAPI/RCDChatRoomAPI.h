//
//  RCDChatRoomAPI.h
//  SealTalk
//
//  Created by 张改红 on 2019/6/13.
//  Copyright © 2019 RongCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCDChatRoom.h"
NS_ASSUME_NONNULL_BEGIN

@interface RCDChatRoomAPI : NSObject
//获取广场信息
+ (void)getChatRoomList:(void (^)(NSArray<RCDChatRoom *> *rooms))complete;
@end

NS_ASSUME_NONNULL_END
