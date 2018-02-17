//
//  AppDelegate.h
//  collate-ios
//
//  Created by Larsson Burch on 2/11/18.
//  Copyright © 2018 moist. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

