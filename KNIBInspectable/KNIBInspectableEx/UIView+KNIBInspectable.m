//
//  UIView+KNIBInspectable.m
//  KNIBInspectable
//
//  Created by devzkn on 07/05/2018.
//  Copyright © 2018 devzkn. All rights reserved.
//

#import "UIView+KNIBInspectable.h"

@implementation UIView (KNIBInspectable)
-(void)setCornerRadius:(CGFloat)cornerRadius{
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = cornerRadius;
}
-(void)setBorderColor:(UIColor *)borderColor{
    self.layer.borderColor = borderColor.CGColor;
}
-(void)setBorderWidth:(CGFloat)borderWidth{
    self.layer.borderWidth = borderWidth;
}
- (CGFloat)cornerRadius{
    return self.layer.cornerRadius;
}
- (CGFloat)borderWidth{
    return self.layer.borderWidth;
}
- (UIColor *)borderColor{
    return [UIColor colorWithCGColor:self.layer.borderColor];
}
@end
