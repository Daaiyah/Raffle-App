//
//  AppDelegate.h
//  RaffleApp
//
//  Created by Ajeenah Ross on 2/5/19.
//  Copyright © 2019 Ross. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

