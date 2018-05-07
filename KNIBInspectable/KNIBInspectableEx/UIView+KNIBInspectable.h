//
//  UIView+KNIBInspectable.h
//  KNIBInspectable
//
//  Created by devzkn on 07/05/2018.
//  Copyright © 2018 devzkn. All rights reserved.
//
#import <UIKit/UIKit.h>
IB_DESIGNABLE//IB_DESIGNABLE的宏的功能就是让XCode动态渲染出该类图形化界面；让Interface Builder知道它应该在UIStoryboard或者Xib中画布上直接渲染视图，不需要等到编译运行后就能预先展示出来效果
@interface UIView (KNIBInspectable)
//IBInspectable修饰属性，可以是用户自定义的运行时属性，让支持KVC的属性能够在Attribute Inspector中配置
@property(nonatomic,assign) IBInspectable CGFloat cornerRadius;//对应self.layer.cornerRadius属性，实现对应的setter和getter
@property(nonatomic,assign) IBInspectable CGFloat borderWidth;//.IBInspectable 修饰属性，使属性能在XCode中直接设置
@property(nonatomic,assign) IBInspectable UIColor *borderColor;
@end
