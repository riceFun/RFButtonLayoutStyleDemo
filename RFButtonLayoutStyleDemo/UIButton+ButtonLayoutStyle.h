//
//  UIButton+ButtonLayoutStyle.h
//  TableBarVCDemo
//
//  Created by riceFun on 2018/5/21.
//  Copyright © 2018年 riceFun. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, Button_LayoutStyle) {
    LS_Image_Title_Default = 0, //图片在左，文字在右，整体居中。 系统默认样式 default
    LS_LeftImage_RightTitle = 1,//图片在左，文字在右，整体居中。
    LS_RightImage_LeftTitle = 2,//图片在右，文字在左，整体居中。
    LS_TopImage_BottomTitle = 3,//图片在上，文字在下，整体居中。
    LS_BottomImage_TopTitle = 4,//图片在下，文字在上，整体居中。
    
    LS_CenterImage_TopTitle_IntervalButtonTop = 5,         //图片居中，文字在上距离按钮顶部。
    LS_CenterImage_BottomTitle_IntervalButtonBottom = 6,   //图片居中，文字在下距离按钮底部。
    LS_CenterImage_TopTitle_IntervalImageTop = 7,          //图片居中，文字在图片上面。
    LS_CenterImage_BottomTitle_IntervalImageBottom = 8,    //图片居中，文字在图片下面。
    
    LS_RightImage_LeftTitle_IntervalButtonLeftRight = 9,   //图片在右，文字在左，距离按钮两边边距
    LS_LeftImage_RightTitle_IntervalButtonLeftRight = 10,  //图片在左，文字在右，距离按钮两边边距
};

@interface UIButton (ButtonLayoutStyle)

/**
 button的类型

 @param layoutStyle 类型
 @param padding 间距 不同的类型 间距表不同含义 具体见对应的枚举类型
 */
-(void)setButtonLayoutStyle:(Button_LayoutStyle)layoutStyle padding:(CGFloat)padding;


@end
