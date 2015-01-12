//
//  Wrapper.h
//  Exp
//
//  Created by Alice Kondratieva on 08.01.15.
//  Copyright (c) 2015 Alice Kondratieva. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Wrapper : NSObject {
    NSString * string;
}
@property (nonatomic, retain) NSString * string;

- (int) bfIndex:(NSString *)needle;
- (int) bmIndex:(NSString *)needle;
@end
