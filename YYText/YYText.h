//
//  YYText.h
//  YYText <https://github.com/ibireme/YYText>
//
//  Created by ibireme on 15/2/25.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

#if __has_include(<YYText_FixWarnings/YYText.h>)
FOUNDATION_EXPORT double YYTextVersionNumber;
FOUNDATION_EXPORT const unsigned char YYTextVersionString[];
#import <YYText_FixWarnings/YYLabel.h>
#import <YYText_FixWarnings/YYTextView.h>
#import <YYText_FixWarnings/YYTextAttribute.h>
#import <YYText_FixWarnings/YYTextArchiver.h>
#import <YYText_FixWarnings/YYTextParser.h>
#import <YYText_FixWarnings/YYTextRunDelegate.h>
#import <YYText_FixWarnings/YYTextRubyAnnotation.h>
#import <YYText_FixWarnings/YYTextLayout.h>
#import <YYText_FixWarnings/YYTextLine.h>
#import <YYText_FixWarnings/YYTextInput.h>
#import <YYText_FixWarnings/YYTextDebugOption.h>
#import <YYText_FixWarnings/YYTextKeyboardManager.h>
#import <YYText_FixWarnings/YYTextUtilities.h>
#import <YYText_FixWarnings/NSAttributedString+YYText.h>
#import <YYText_FixWarnings/NSParagraphStyle+YYText.h>
#import <YYText_FixWarnings/UIPasteboard+YYText.h>
#else
#import "YYLabel.h"
#import "YYTextView.h"
#import "YYTextAttribute.h"
#import "YYTextArchiver.h"
#import "YYTextParser.h"
#import "YYTextRunDelegate.h"
#import "YYTextRubyAnnotation.h"
#import "YYTextLayout.h"
#import "YYTextLine.h"
#import "YYTextInput.h"
#import "YYTextDebugOption.h"
#import "YYTextKeyboardManager.h"
#import "YYTextUtilities.h"
#import "NSAttributedString+YYText.h"
#import "NSParagraphStyle+YYText.h"
#import "UIPasteboard+YYText.h"
#endif
