//
//  Constant.h
//  ibeacon stores
//
//  Created by One Click IT Consultancy  on 5/14/14.
//  Copyright (c) 2014 One Click IT Consultancy . All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Constant <NSObject>

typedef enum ScrollDirection {
    ScrollDirectionNone,
    ScrollDirectionRight,
    ScrollDirectionLeft,
    ScrollDirectionUp,
    ScrollDirectionDown,
    ScrollDirectionCrazy,
} ScrollDirection;


#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)


#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPHONE_4 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 480.0f)
#define IS_IPHONE_5 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0f)
#define IS_IPHONE_6 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0f)
#define IS_IPHONE_6plus (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0f)

#define IS_IPAD ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)

#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)


#define DEVICE_HEIGHT [[UIScreen mainScreen] bounds].size.height
#define DEVICE_WIDTH [[UIScreen mainScreen] bounds].size.width


#define iPhone6_Ratio 1.17
#define iPhone6_Plus_Ratio 1.29

#define customErrorCodeForMessage 123456

#define kEmptyString @""

#define Alert_Animation_Type URBAlertAnimationTopToBottom

#define APP_DELEGATE (AppDelegate*)[[UIApplication sharedApplication]delegate]

//#define WEB_SERVICE_URL @"http://192.168.1.54:3000/"
#define WEB_SERVICE_URL @"http://54.218.251.105:3000/"

//http://54.218.251.105:3000/api/v1/place?location=48.859294,2.347589

#define ALERT_TITLE @"Dinner"
#define OK_BTN @"OK"
#define ALERT_CANCEL @"Cancel"
#define ALERT_DELETE @"Delete"
#define ALERT_EDIT  @"Edit"
#define ACTION_TAKE_PHOTO      @"Take Photo"
#define ACTION_LIBRARY_PHOTO   @"Photo From Library"
#define CONNECTION_FAILED    @"Please check internet connection"


#pragma mark User Credential-----------------------------------------
#define WEB_API_CLIENT_ID @"1c2d0581b06ce7aeaedc8868a793779a"
#define WEB_API_CLIENT_SECRET @"2014c3fca5926901ca3fb7063e1be156"

#define CURRENT_USER_ID [[NSUserDefaults standardUserDefaults] valueForKey:@"CURRENT_USER_ID"]
#define CURRENT_USER_ACCESS_TOKEN [[NSUserDefaults standardUserDefaults] valueForKey:@"CURRENT_USER_ACCESS_TOKEN"]

#define CURRENT_USER_LOGIN_SKIP [[NSUserDefaults standardUserDefaults] valueForKey:@"CURRENT_USER_LOGIN_SKIP"]
#define IS_INFO_SCREEN_VISIBLE_ONCE [[NSUserDefaults standardUserDefaults] valueForKey:@"IS_INFO_SCREEN_VISIBLE_ONCE"]

#define CURRENT_USER_EMAIL [[NSUserDefaults standardUserDefaults] valueForKey:@"CURRENT_USER_EMAIL"]
#define CURRENT_USER_FIRST_NAME [[NSUserDefaults standardUserDefaults] valueForKey:@"CURRENT_USER_FIRST_NAME"]
#define CURRENT_USER_LAST_NAME [[NSUserDefaults standardUserDefaults] valueForKey:@"CURRENT_USER_LAST_NAME"]
#define CURRENT_USER_IMAGE [[NSUserDefaults standardUserDefaults] valueForKey:@"CURRENT_USER_IMAGE"]

#define MINIMUM_VALUE [[NSUserDefaults standardUserDefaults] valueForKey:@"MINIMUM_VALUE"]
#define MAXIMUM_VALUE [[NSUserDefaults standardUserDefaults] valueForKey:@"MAXIMUM_VALUE"]
#define SELECTED_DISTANCE [[NSUserDefaults standardUserDefaults] valueForKey:@"SELECTED_DISTANCE"]
#define IS_SELECTED [[NSUserDefaults standardUserDefaults] valueForKey:@"IS_SELECTED"]



#pragma mark - Color Codes------------------------------

#define dark_gray_color @"4d4d4d"
#define light_gray_color @"d3d3d3"
#define light_yellow_color @"f4c929"
#define White_color @"ffffff"
#define dark_red_color @"ae0125"
#define dark_blue_color @"175181"
#define dark_green_color @"3C905A"
#define light_green_color @"2dce28"

#define App_Background_color @"F4F4F4"
#define App_Header_Color @"eb3e2d"
#define header_font_color @"FFFFFF"
#define orange_color @"eb3e2d"


#pragma mark - Images------------------------------------
#define Image_App_Background @""
#define Icon_Stats @"icon_stats.png"
#define Icon_Back_Button @"back-btn.png"
#define Icon_Close_Button @"icon_close.png"
#define Icon_Search @"search_icon.png"
#define PlaceHolderImage @"txtbox_icon.png"


@end
