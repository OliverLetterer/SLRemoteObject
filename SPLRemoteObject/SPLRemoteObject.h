//
//  SPLRemoteObject.h
//  SPLRemoteObject
//
//  The MIT License (MIT)
//  Copyright (c) 2013 Oliver Letterer, Sparrow-Labs
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import "SPLRemoteObjectBase.h"
#import "SPLRemoteObjectEncryptionPolicy.h"

NS_ASSUME_NONNULL_BEGIN

/**
 @abstract  <#abstract comment#>
 */
@interface SPLRemoteObject : NSObject

+ (NSDictionary *)userInfoFromTXTRecordData:(nullable NSData *)txtData;
@property (nonatomic, copy, readonly) NSDictionary *userInfo;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) Protocol *protocol;

@property (nonatomic, assign) NSTimeInterval timeoutInterval;
@property (nullable) id<SPLRemoteObjectEncryptionPolicy> encryptionPolicy;
@property (nonatomic, readonly) SPLRemoteObjectReachabilityStatus reachabilityStatus;

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithName:(NSString *)name type:(NSString *)type protocol:(Protocol *)protocol;

@end

NS_ASSUME_NONNULL_END
