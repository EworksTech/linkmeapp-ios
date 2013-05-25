//
//  ModelController.h
//  LinkMeApp
//
//  Created by Cesar Schneider on 5/14/13.
//  Copyright (c) 2013 Eworks Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
