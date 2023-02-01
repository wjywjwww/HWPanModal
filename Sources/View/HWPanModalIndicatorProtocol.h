//
//  HWPanModalIndicatorProtocol.h
//  HWPanModal
//
//  Created by heath wang on 2019/8/9.
//
typedef NS_ENUM(NSInteger, IndicatorPresentationState) {
    IndicatorPresentationStateShort NS_SWIFT_NAME(short),
    IndicatorPresentationStateMedium NS_SWIFT_NAME(medium),
    IndicatorPresentationStateLong NS_SWIFT_NAME(long),
};

typedef NS_ENUM(NSUInteger, HWIndicatorState) {
    HWIndicatorStateNormal NS_SWIFT_NAME(normal),     // origin state
    HWIndicatorStatePullDown NS_SWIFT_NAME(pull),   // drag down state
    HWIndicatorStatePullUP NS_SWIFT_NAME(up),
};

static CGFloat const kIndicatorYOffset = 5;

@protocol HWPanModalIndicatorProtocol <NSObject>

/**
 * When user drags, the state will change.
 * You can change your UI here.
 * @param state The state when drag changed.
 */
- (void)didChangeToState:(HWIndicatorState)state;


- (void)didChangeToState:(HWIndicatorState)state presentationState:(IndicatorPresentationState)presentationState;

/**
 * Tell the size of the indicator.
 */
- (CGSize)indicatorSize;

/**
 * You can layout your UI here if you need.
 * This method called when indicator added to super view
 */
- (void)setupSubviews;

@end

