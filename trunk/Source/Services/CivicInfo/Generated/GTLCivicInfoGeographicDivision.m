/* Copyright (c) 2013 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLCivicInfoGeographicDivision.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Civic Information API (civicinfo/us_v1)
// Description:
//   An API for accessing civic information.
// Documentation:
//   https://developers.google.com/civic-information
// Classes:
//   GTLCivicInfoGeographicDivision (0 custom class methods, 5 custom properties)

#import "GTLCivicInfoGeographicDivision.h"

#import "GTLCivicInfoOffice.h"

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoGeographicDivision
//

@implementation GTLCivicInfoGeographicDivision
@dynamic confidence, name, ocdId, offices, type;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLCivicInfoOffice class]
                                forKey:@"offices"];
  return map;
}

@end
