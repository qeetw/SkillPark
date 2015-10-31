//
//  HeaderCollectionReusableView.h
//  SkillPark
//
//  Created by qee on 2015/10/22.
//  Copyright © 2015年 qee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserModel.h"

@interface HeaderCollectionReusableView : UICollectionReusableView
@property (strong, nonatomic) IBOutletCollection(NSLayoutConstraint) NSArray *heightConstraints;
@property (weak, nonatomic) IBOutlet UIView *headerView;
@property (weak, nonatomic) IBOutlet UIImageView *headPhotoImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *selfIntroLabel;
@property (weak, nonatomic) IBOutlet UIButton *goodButton;


- (void)setHeaderViewWithUser:(UserModel *)user;
- (CGSize)sizeOfHeaderView;
//- (UICollectionViewLayoutAttributes *)preferredLayoutAttributesFittingAttributes:(UICollectionViewLayoutAttributes *)layoutAttributes;
@end
