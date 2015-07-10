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
@property (weak, nonatomic) IBOutlet UIButton *label1;
@property (weak, nonatomic) IBOutlet UIButton *label2;
@property (weak, nonatomic) IBOutlet UIButton *label3;
@property (weak, nonatomic) IBOutlet UIButton *label4;
@property (weak, nonatomic) IBOutlet UIButton *label5;
@property (weak, nonatomic) IBOutlet UITextView *text1;
@property (weak, nonatomic) IBOutlet UITextView *text2;
@property (weak, nonatomic) IBOutlet UITextView *text3;
@property (weak, nonatomic) IBOutlet UITextView *text4;
@property (weak, nonatomic) IBOutlet UITextView *text5;
- (IBAction)button1Pressed:(id)sender;

@end
