//
//  SLSegmentBar.h
//  SLSegmentBarObjCKit_Example
//
//  Created by CoderSLZeng on 2019/5/24.
//  Copyright © 2019 CoderSLZeng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SLSegmentBar : UIView

/**
 根据位置快速创建选项卡视图

 @param frame 位置
 @return 选项卡视图
 */
+ (instancetype)segmentBarWithFrame:(CGRect)frame;


/**
 根据位置和标题数据源快速创建选项卡视图

 @param frame 位置
 @param titles 标题数据源
 @return 选项卡视图
 */
+ (instancetype)segmentBarWithFrame:(CGRect)frame
                             titles:(nonnull NSArray<NSString *> *)titles;

/** 标题数据源 */
@property (strong, nonatomic, nonnull) NSArray<NSString *> *titles;

@end

NS_ASSUME_NONNULL_END
