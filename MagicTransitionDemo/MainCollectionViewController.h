//
//  MainCollectionViewController.h
//  MagicTransitionDemo
//
//  Created by Songbaoku on 11/23/15.
//  Copyright © 2015 Songbaoku. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainCollectionViewController : UICollectionViewController
@property (nonatomic, strong) NSIndexPath *indexPath;
@property (nonatomic, assign) CGRect finalCellRect;
@end
