//
//  redRootController.h
//  ApplesToApples
//
//  Created by Silvya Sinaga on 7/9/15.
//  Copyright (c) 2015 student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface redRootController : UIViewController <UIPageViewControllerDataSource>
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *cardTitles;
@property (strong, nonatomic) NSArray *cardNames;
@property (strong, nonatomic) NSArray *cardImages;

@end
