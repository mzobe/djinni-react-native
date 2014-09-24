// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#import "DBClientReturnedRecord+Private.h"
#import <Foundation/Foundation.h>
#include <utility>


@implementation DBClientReturnedRecord

- (id)initWithClientReturnedRecord:(DBClientReturnedRecord *)clientReturnedRecord
{
    if (self = [super init]) {
        _content = [clientReturnedRecord.content copy];
    }
    return self;
}

- (id)initWithContent:(NSString *)content
{
    if (self = [super init]) {
        _content = [content copy];
    }
    return self;
}

- (id)initWithCppClientReturnedRecord:(const ClientReturnedRecord &)clientReturnedRecord
{
    if (self = [super init]) {
        _content = [[NSString alloc] initWithBytes:clientReturnedRecord.content.data()
                length:clientReturnedRecord.content.length()
                encoding:NSUTF8StringEncoding];
    }
    return self;
}

- (ClientReturnedRecord)cppClientReturnedRecord
{
    std::string content([_content UTF8String], [_content lengthOfBytesUsingEncoding:NSUTF8StringEncoding]);
    return ClientReturnedRecord(
            std::move(content));
}

@end