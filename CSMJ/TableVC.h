//
//  TableVC.h
//  CSMJ
//
//  Created by 彭征新 on 16/5/11.
//  Copyright © 2016年 彭征新. All rights reserved.
//

#import "ViewController.h"
#import "MJManager.h"
#import <AVOSCloudIM/AVOSCloudIM.h>
#import <AVOSCloud/AVOSCloud.h>
#import "Player.h"

@interface TableVC : UIViewController <AVIMClientDelegate>  //成员变更接口协议
@property NSMutableArray *playerArr;
@property AVIMConversation *conversation;   //当前群聊
@property Player *user; //当前玩家
@property MJManager *mjManager; //麻将功能类

- (void) getPlayers;
- (void) showPlayers;
- (void) setRoomNum:(NSString *) roomNum;
- (void) createPaiKu:(NSInteger ) num roomNum:(NSNumber *) roomNum;
@end
