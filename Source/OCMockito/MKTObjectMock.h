//  OCMockito by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2014 Jonathan M. Reid. See LICENSE.txt

#import "MKTBaseMockObject.h"


/**
 Mock object of a given class.
 */
@interface MKTObjectMock : MKTBaseMockObject

+ (instancetype)mockForClass:(Class)aClass;
- (instancetype)initWithClass:(Class)aClass;

@end
