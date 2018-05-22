//
//  AppDelegate.h
//  RFButtonLayoutStyleDemo
//
//  Created by riceFun on 2018/5/22.
//  Copyright © 2018年 riceFun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

