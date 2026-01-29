//
//  GFPNDASearchKeywordView.h
//  GFPSDKMediationNDAVideo
//
//  Created by sodam on 2022/07/22.
//  Copyright © 2022 Naver. All rights reserved.
//

#import <UIKit/UIKit.h>
@import NaverAdsServices;

NS_ASSUME_NONNULL_BEGIN

@protocol GFPNDASearchKeywordDelegate <NSObject>

- (void)clickKeywordWithNasWrapper:(id<GFPNASTrackingWrapper>)trackingWrapper;

@end


static const CGFloat kSearchKeywordViewHeight = 26.0;


@interface GFPNDASearchKeywordView : UIView

@property (nonatomic, strong, readonly) GFPVastIcon *nasData;

@property (nonatomic, assign, readonly) BOOL isClicked;

@property (nonatomic, weak) id <GFPNDASearchKeywordDelegate> delegate;

- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

- (instancetype)initWithFrame:(CGRect)frame
                      nasIcon:(GFPVastIcon *)nasData NS_DESIGNATED_INITIALIZER;

- (void)changeKeywordStyleWith:(BOOL)isEnable;

@end

NS_ASSUME_NONNULL_END
