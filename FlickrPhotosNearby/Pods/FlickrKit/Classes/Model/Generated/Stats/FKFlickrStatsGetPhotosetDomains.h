//
//  FKFlickrStatsGetPhotosetDomains.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrStatsGetPhotosetDomainsError_UserDoesNotHaveStats = 1,		 /* The user you have requested stats has not enabled stats on their account. */
	FKFlickrStatsGetPhotosetDomainsError_NoStatsForThatDate = 2,		 /* No stats are available for the date requested. Flickr only keeps stats data for the last 28 days. */
	FKFlickrStatsGetPhotosetDomainsError_InvalidDate = 3,		 /* The date provided could not be parsed */
	FKFlickrStatsGetPhotosetDomainsError_PhotosetNotFound = 4,		 /* The photoset id was either invalid or was for a set not owned by the calling user. */
	FKFlickrStatsGetPhotosetDomainsError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrStatsGetPhotosetDomainsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrStatsGetPhotosetDomainsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrStatsGetPhotosetDomainsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrStatsGetPhotosetDomainsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrStatsGetPhotosetDomainsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrStatsGetPhotosetDomainsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrStatsGetPhotosetDomainsError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrStatsGetPhotosetDomainsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrStatsGetPhotosetDomainsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrStatsGetPhotosetDomainsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrStatsGetPhotosetDomainsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrStatsGetPhotosetDomainsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrStatsGetPhotosetDomainsError;

/*

Get a list of referring domains for a photoset

<p>There is one <code>&lt;domain&gt;</code> element for each referring domain, with attributes for the domain name and the number of views.</p>

<p>For details on the referrers coming from each domain listed you can call <a href="/services/api/flickr.stats.getPhotosetReferrers.html">flickr.stats.getPhotosetReferrers</a></p>

Response:

<domains page="1" perpage="25" pages="1" total="3">
	<domain name="images.search.yahoo.com" views="127" />
	<domain name="flickr.com" views="122" />
	<domain name="images.google.com" views="70" />
</domains>


*/
@interface FKFlickrStatsGetPhotosetDomains : NSObject <FKFlickrAPIMethod>

/* Stats will be returned for this date. This should be in either be in YYYY-MM-DD or unix timestamp format.

A day according to Flickr Stats starts at midnight GMT for all users, and timestamps will automatically be rounded down to the start of the day. */
@property (nonatomic, copy) NSString *date; /* (Required) */

/* The id of the photoset to get stats for. If not provided, stats for all sets will be returned. */
@property (nonatomic, copy) NSString *photoset_id;

/* Number of domains to return per page. If this argument is omitted, it defaults to 25. The maximum allowed value is 100. */
@property (nonatomic, copy) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, copy) NSString *page;


@end
