//
//  Proxy.h
//  PureMVC_ObjectiveC
//
//  PureMVC Port to ObjectiveC by Brian Knorr <brian.knorr@puremvc.org>
//  PureMVC - Copyright(c) 2006-2008 Futurescale, Inc., Some rights reserved.
//

#import <Foundation/Foundation.h>
#import "Interfaces.h"
#import "Notifier.h"

@interface Proxy : Notifier <IProxy> {
	id data;
	NSString *proxyName;
}

@property(nonatomic, retain, getter=getData) id data;
@property(nonatomic, retain, getter=getProxyName) NSString *proxyName;

-(id)initWithProxyName:(NSString *)proxyName data:(id)data;

@end
