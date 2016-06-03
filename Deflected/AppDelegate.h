//
//  AppDelegate.h
//  Deflected
//
//  Created by Caleb Scott on 11/13/15.
//  Copyright © 2015 Caleb Scott. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <Chartboost/Chartboost.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, ChartboostDelegate>




@property (strong, nonatomic) NSString *HomeCoins2;
@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

-(void)doSomethingWithString:(NSString*)perameter;
-(NSString*)getInfo;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

