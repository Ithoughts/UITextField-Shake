//
//  UITextField+Shake.h
//  UITextField+Shake
//
//  Created by Andrea Mazzini on 08/02/14.
//  Copyright (c) 2014 Fancy Pixel. All rights reserved.
//

typedef void (^CompletionHandler)(void);

typedef NS_ENUM(NSInteger, ShakeDirection) {
    ShakeDirectionHorizontal = 0,
    ShakeDirectionVertical
};

@interface UITextField (Shake)

/**-----------------------------------------------------------------------------
 * @name UITextField+Shake
 * -----------------------------------------------------------------------------
 */

/** Shake the UITextField
*
* Shake the text field a given number of times
*
* @param times The number of shakes
* @param delta The width of the shake
*/
- (void)shake:(int)times withDelta:(CGFloat)delta;

/** Shake the UITextField
 *
 * Shake the text field a given number of times
 *
 * @param times The number of shakes
 * @param delta The width of the shake
 * @param handler A block object to be executed when the shake sequence ends
 */
- (void)shake:(int)times withDelta:(CGFloat)delta andCompletion:(CompletionHandler)handler;

/** Shake the UITextField at a custom speed
 *
 * Shake the text field a given number of times with a given speed
 *
 * @param times The number of shakes
 * @param delta The width of the shake
 * @param interval The duration of one shake
 */
- (void)shake:(int)times withDelta:(CGFloat)delta andSpeed:(NSTimeInterval)interval;

/** Shake the UITextField at a custom speed
 *
 * Shake the text field a given number of times with a given speed
 *
 * @param times The number of shakes
 * @param delta The width of the shake
 * @param interval The duration of one shake
 * @param handler A block object to be executed when the shake sequence ends
 */
- (void)shake:(int)times withDelta:(CGFloat)delta speed:(NSTimeInterval)interval andCompletion:(CompletionHandler)handler;

/** Shake the UITextField at a custom speed
 *
 * Shake the text field a given number of times with a given speed
 *
 * @param times The number of shakes
 * @param delta The width of the shake
 * @param interval The duration of one shake
 * @param direction of the shake
 */
- (void)shake:(int)times withDelta:(CGFloat)delta andSpeed:(NSTimeInterval)interval shakeDirection:(ShakeDirection)shakeDirection;

/** Shake the UITextField at a custom speed
 *
 * Shake the text field a given number of times with a given speed
 *
 * @param times The number of shakes
 * @param delta The width of the shake
 * @param interval The duration of one shake
 * @param direction of the shake
 * @param handler A block object to be executed when the shake sequence ends
 */
- (void)shake:(int)times withDelta:(CGFloat)delta andSpeed:(NSTimeInterval)interval shakeDirection:(ShakeDirection)shakeDirection andCompletion:(CompletionHandler)handler;
@end
