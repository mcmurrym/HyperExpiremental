//
//  HyperTableViewController.h
//  HyperExperimental
//
//  Created by Matt McMurry on 6/18/14.
//  Copyright (c) 2014 OC Tanner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HyperTableViewController : UIViewController

- (id)initWithHyperCollection:(Hyper *)hyperCollection;
- (void)reloadData;
@end
