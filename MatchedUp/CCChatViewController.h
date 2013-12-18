//
//  CCChatViewController.h
//  MatchedUp
//
//  Created by Eliot Arntz on 12/14/13.
//  Copyright (c) 2013 Code Coalition. All rights reserved.
//

#import "JSMessagesViewController.h"

@interface CCChatViewController : JSMessagesViewController <JSMessagesViewDataSource, JSMessagesViewDelegate>

@property (strong, nonatomic) PFObject *chatRoom;

@end
