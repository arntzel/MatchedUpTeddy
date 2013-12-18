//
//  CCMatchViewController.h
//  MatchedUp
//
//  Created by Eliot Arntz on 12/14/13.
//  Copyright (c) 2013 Code Coalition. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CCMatchViewControllerDelegate <NSObject>

-(void)presentMatchesViewController;

@end

@interface CCMatchViewController : UIViewController

@property (strong, nonatomic) UIImage *matchedUserImage;
@property (weak) id <CCMatchViewControllerDelegate> delegate;

@end
