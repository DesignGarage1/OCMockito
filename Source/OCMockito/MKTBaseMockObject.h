//  OCMockito by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2014 Jonathan M. Reid. See LICENSE.txt

#import <Foundation/Foundation.h>
#import "MKTPrimitiveArgumentMatching.h"


@interface MKTBaseMockObject : NSProxy <MKTPrimitiveArgumentMatching>

- (instancetype)init;
- (void)reset;

- (BOOL)answerStubbedInvocation:(NSInvocation *)invocation;
- (BOOL)hasAnswerForSelector:(SEL)sel;
- (void)prepareInvocationForStubbing:(NSInvocation *)invocation;

@end
