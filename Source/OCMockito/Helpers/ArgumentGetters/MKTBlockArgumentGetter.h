//  OCMockito by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2014 Jonathan M. Reid. See LICENSE.txt

#import "MKTArgumentGetter.h"


@interface MKTBlockArgumentGetter : MKTArgumentGetter

- (instancetype)initWithSuccessor:(MKTArgumentGetter *)successor;

@end
