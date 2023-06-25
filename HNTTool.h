//
//  HNTTool.h
//  demo
//
//  Created by 东哥 on 2022/4/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class HNTAccountModel;

@class HNHotspotInfoModel;

@interface HNTTool : NSObject

+ (void)getAccountsInfoWithAccountArr:(NSArray*)hotspotArr
                                progress:(void (^)(CGFloat progress ))loadProgress
                            FinishedInfo:(void (^)( NSArray*obj))finishInfoBlcok;



+(NSDictionary*)getSumAmountWithListAccount:(NSArray<HNTAccountModel*>*)listAccount;

+ (void)getHouseTotalCountInfoWithHouseId:(NSString*)houseId
                                progress:(void (^)(CGFloat progress ))loadProgress
                            FinishedInfo:(void (^)( NSArray*obj))finishInfoBlcok;





@end

NS_ASSUME_NONNULL_END
