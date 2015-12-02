//
//  DetailViewController.h
//  MyGitTest
//
//  Created by 吴启凡 on 15/12/2.
//  Copyright © 2015年 可行星. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

