//
//  AppDelegate.h
//  Receipts
//
//  Created by Justine Herman on 11/24/16.
//  Copyright © 2016 Justine Herman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

