//
//  PlayerContentViewController.h
//  ApplesToApples
//
//  Created by student on 7/7/15.
//  Copyright (c) 2015 student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerContentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *cardMessage;
@property (weak, nonatomic) IBOutlet UIImageView *cardBackground;
@property NSUInteger pageIndex;
@property NSString *cardText;
@property NSString *cardSummary;
@property NSString *imageFile;

@end
