/*
Copyright (C) AC SOFTWARE SP. Z O.O.
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#import <UIKit/UIKit.h>
#import "SADialog.h"

NS_ASSUME_NONNULL_BEGIN

#define INFO_MESSAGE_DIMMER 1
#define INFO_MESSAGE_VARILIGHT_CONFIG 2
#define INFO_MESSAGE_DIW_CONFIG 3

@interface SAInfoVC : SADialog
- (IBAction)varlilightUrlButtonTouch:(id)sender;

+(void)showInformationWindowWithMessage:(int)msg;


@end

NS_ASSUME_NONNULL_END
