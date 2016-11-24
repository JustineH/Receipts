//
//  DetailViewController.h
//  Receipts
//
//  Created by Justine Herman on 11/24/16.
//  Copyright © 2016 Justine Herman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Receipts+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

