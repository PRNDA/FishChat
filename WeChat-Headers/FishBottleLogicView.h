//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseBottleView.h"

#import "BottleAnimationDelegate.h"
#import "BottleTipViewDelegate.h"
#import "IBottleMgrExt.h"

@class CBottle, MMHeadImageView, OpenBottleLogicView;

@interface FishBottleLogicView : BaseBottleView <BottleTipViewDelegate, BottleAnimationDelegate, IBottleMgrExt>
{
    unsigned int mBottleLocalId;
    unsigned int mBottleMessageType;
    unsigned int mFishStatus;
    CBottle *mBottle;
    OpenBottleLogicView *mOpenLogicView;
    MMHeadImageView *mHeadImageView;
}

@property(retain, nonatomic) MMHeadImageView *mHeadImageView; // @synthesize mHeadImageView;
@property(retain, nonatomic) OpenBottleLogicView *mOpenLogicView; // @synthesize mOpenLogicView;
- (void).cxx_destruct;
- (void)toggleOpenBottle:(unsigned int)arg1;
- (void)toggleClose;
- (void)fish_star;
- (void)fish_over;
- (void)drawOnCanvas;
- (void)doAnimation;
- (void)dealloc;
- (id)initWithCanvas:(id)arg1;
- (id)init;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)BottleTipPressButton:(id)arg1 withButtonTitle:(id)arg2;
- (id)BottleAnimationGetBrandUserName:(id)arg1;
- (id)BottleAnimationGetBrandHeadUrl:(id)arg1;
- (void)BottleAnimationClickBottle:(id)arg1;
- (void)BottleAnimationClickStar:(id)arg1;
- (void)BottleAnimationFishFinish:(id)arg1;
- (void)OnThrowBackFail;
- (void)OnThrowBack:(unsigned int)arg1;
- (void)OnOpenBottleFail;
- (void)OnOpenBottleOK:(id)arg1 Contact:(id)arg2 MsgWrap:(id)arg3;
- (void)handleOpenBrandUserBottle:(id)arg1;
- (void)OnFishBottleFail:(unsigned int)arg1;
- (void)OnFishBottleOK:(unsigned int)arg1 fishCount:(unsigned int)arg2 msgType:(unsigned int)arg3 userName:(id)arg4 bottle:(id)arg5;

@end

