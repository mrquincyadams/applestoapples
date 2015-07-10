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
@property (weak, nonatomic) IBOutlet UILabel *label1;
@property (weak, nonatomic) IBOutlet UILabel *label2;
@property (weak, nonatomic) IBOutlet UILabel *label3;
@property (weak, nonatomic) IBOutlet UILabel *label4;
@property (weak, nonatomic) IBOutlet UILabel *label5;
@property (weak, nonatomic) IBOutlet UITextView *text1;
@property (weak, nonatomic) IBOutlet UITextView *text2;
@property (weak, nonatomic) IBOutlet UITextView *text3;
@property (weak, nonatomic) IBOutlet UITextView *text4;
@property (weak, nonatomic) IBOutlet UITextView *text5;

@end
