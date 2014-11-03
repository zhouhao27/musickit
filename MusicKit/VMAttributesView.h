//  Created by Alejandro Isaza on 2014-05-23.
//  Copyright (c) 2014 Venture Media Labs. All rights reserved.

#import <UIKit/UIKit.h>

#include "ClefGeometry.h"
#include "KeyGeometry.h"
#include "PartGeometry.h"
#include "TimeSignatureGeometry.h"


@class VMBraceView;

@interface VMAttributesView : UIView

@property(nonatomic) const mxml::PartGeometry* partGeometry;
@property(nonatomic, strong) UIColor* foregroundColor;

- (void)clear;
- (void)addClefGeometry:(const mxml::ClefGeometry*)clef;
- (void)addTimeGeometry:(const mxml::TimeSignatureGeometry*)time;
- (void)addKeyGeometry:(const mxml::KeyGeometry*)key;
- (void)setOffset:(CGFloat)offset;

@end