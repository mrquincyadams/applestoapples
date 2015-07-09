//
//  ViewController.h
//  ApplesToApples
//
//  Created by student on 7/7/15.
//  Copyright (c) 2015 student. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerContentViewController.h"

@interface ViewController : UIViewController <UIPageViewControllerDataSource>
- (IBAction)nextButton:(id)sender;
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *cardTitles;
@property (strong, nonatomic) NSArray *cardNames;
@property (strong, nonatomic) NSArray *cardImages;


@end

