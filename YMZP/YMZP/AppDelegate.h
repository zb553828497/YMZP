//
//  AppDelegate.h
//  YMZP
//
//  Created by zhangbin on 2017/3/17.
//  Copyright © 2017年 zhangbin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

