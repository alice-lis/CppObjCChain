//
//  Wrapper.m
//  Exp
//
//  Created by Alice Kondratieva on 08.01.15.
//  Copyright (c) 2015 Alice Kondratieva. All rights reserved.
//

#import "Wrapper.h"

#import "matcher.h"


@implementation Wrapper : NSObject

@synthesize string;

- (int) bfIndex:(NSString *)needle {
    return Matcher::bf_index([string UTF8String], [needle UTF8String]);
}

- (int) bmIndex:(NSString *)needle {
    return Matcher::bm_index([string UTF8String], [needle UTF8String]);
}
@end