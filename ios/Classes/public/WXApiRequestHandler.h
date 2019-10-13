//
//  WXApiManager.h
//  SDKSample
//
//  Created by Jeason on 15/7/14.
//
//

#import <Foundation/Foundation.h>
#import "WXApiObject.h"
#import "FluwxResponseHandler.h"

@interface WXApiRequestHandler : NSObject

+ (BOOL)sendText:(NSString *)text
         InScene:(enum WXScene)scene
           AppId:(NSString *)appId;

+ (BOOL)sendImageData:(NSData *)imageData
              TagName:(NSString *)tagName
           MessageExt:(NSString *)messageExt
               Action:(NSString *)action
           ThumbImage:(UIImage *)thumbImage
              InScene:(enum WXScene)scene
                title:(NSString *)title
          description:(NSString *)description
                AppId:(NSString *)appId;

+ (BOOL)sendLinkURL:(NSString *)urlString
            TagName:(NSString *)tagName
              Title:(NSString *)title
        Description:(NSString *)description
         ThumbImage:(UIImage *)thumbImage
         MessageExt:(NSString *)messageExt
      MessageAction:(NSString *)messageAction
            InScene:(enum WXScene)scene
              AppId:(NSString *)appId;

+ (BOOL)sendMusicURL:(NSString *)musicURL
             dataURL:(NSString *)dataURL
     MusicLowBandUrl:(NSString *)musicLowBandUrl
 MusicLowBandDataUrl:(NSString *)musicLowBandDataUrl
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage
          MessageExt:(NSString *)messageExt
       MessageAction:(NSString *)messageAction
             TagName:(NSString *)tagName
             InScene:(enum WXScene)scene
               AppId:(NSString *)appId;

+ (BOOL)sendVideoURL:(NSString *)videoURL
     VideoLowBandUrl:(NSString *)videoLowBandUrl
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage
          MessageExt:(NSString *)messageExt
       MessageAction:(NSString *)messageAction
             TagName:(NSString *)tagName
             InScene:(enum WXScene)scene
               AppId:(NSString *)appId;

+ (BOOL)sendEmotionData:(NSData *)emotionData
             ThumbImage:(UIImage *)thumbImage
                InScene:(enum WXScene)scene;

+ (BOOL)sendFileData:(NSData *)fileData
       fileExtension:(NSString *)extension
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage
             InScene:(enum WXScene)scene;

+ (BOOL)sendMiniProgramWebpageUrl:(NSString *)webpageUrl
                         userName:(NSString *)userName
                             path:(NSString *)path
                            title:(NSString *)title
                      Description:(NSString *)description
                       ThumbImage:(UIImage *)thumbImage
                      hdImageData:(NSData *)hdImageData
                  withShareTicket:(BOOL)withShareTicket
                  miniProgramType:(WXMiniProgramType)programType
                       MessageExt:(NSString *)messageExt
                    MessageAction:(NSString *)messageAction
                          TagName:(NSString *)tagName
                          InScene:(enum WXScene)scene
                            AppId:(NSString *)appId;

+ (BOOL)launchMiniProgramWithUserName:(NSString *)userName
                                appId:(NSString *)appId
                                 path:(NSString *)path
                                 type:(WXMiniProgramType)miniProgramType;

+ (BOOL)sendAppContentData:(NSData *)data
                   ExtInfo:(NSString *)info
                    ExtURL:(NSString *)url
                     Title:(NSString *)title
               Description:(NSString *)description
                MessageExt:(NSString *)messageExt
             MessageAction:(NSString *)action
                ThumbImage:(UIImage *)thumbImage
                   InScene:(enum WXScene)scene;

+ (BOOL)addCardsToCardPackage:(NSArray *)cardIds cardExts:(NSArray *)cardExts;

+ (BOOL)sendAuthRequestScope:(NSString *)scope
                       State:(NSString *)state
                      OpenID:(NSString *)openID
                       AppId:(NSString *)appId
            InViewController:(UIViewController *)viewController;

+ (BOOL)sendAuthRequestScope:(NSString *)scope
                       State:(NSString *)state
                      OpenID:(NSString *)openID
                       AppId:(NSString *)appId;


+ (BOOL)openProfileWithAppID:(NSString *)appID
                 Description:(NSString *)description
                    UserName:(NSString *)userName
                      ExtMsg:(NSString *)extMessage;

+ (BOOL)jumpToBizWebviewWithAppID:(NSString *)appID
                      Description:(NSString *)description
                        tousrname:(NSString *)tousrname
                           ExtMsg:(NSString *)extMsg;

+ (BOOL)chooseCard:(NSString *)appid
          cardSign:(NSString *)cardSign
          nonceStr:(NSString *)nonceStr
          signType:(NSString *)signType
         timestamp:(UInt32)timestamp;

+ (BOOL)openUrl:(NSString *)url;

+ (BOOL)chooseInvoice:(NSString *)appid
             cardSign:(NSString *)cardSign
             nonceStr:(NSString *)nonceStr
             signType:(NSString *)signType
            timestamp:(UInt32)timestamp;


+ (BOOL) sendPayment:(NSString *)appId
           PartnerId:(NSString *)partnerId
            PrepayId:(NSString *)prepayId
            NonceStr:(NSString *)nonceStr
           Timestamp:(UInt32)timestamp
             Package:(NSString *)package
                Sign:(NSString *)sign;
@end
