#import <Foundation/Foundation.h>
#import "HTTPResponse.h"

@class CHTTPConnection;


@interface HTTPFileResponse : NSObject <HTTPResponse>
{
	CHTTPConnection *connection;
	
	NSString *filePath;
	UInt64 fileLength;
	UInt64 fileOffset;
	
	BOOL aborted;
	
	int fileFD;
	void *buffer;
	NSUInteger bufferSize;
}

- (id)initWithFilePath:(NSString *)filePath forConnection:(CHTTPConnection *)connection;
- (NSString *)filePath;

@end
