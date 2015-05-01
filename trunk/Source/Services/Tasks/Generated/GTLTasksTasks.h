/* Copyright (c) 2015 Google Inc.
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
//  GTLTasksTasks.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Tasks API (tasks/v1)
// Description:
//   Lets you manage your tasks and task lists.
// Documentation:
//   https://developers.google.com/google-apps/tasks/firstapp
// Classes:
//   GTLTasksTasks (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLTasksTask;

// ----------------------------------------------------------------------------
//
//   GTLTasksTasks
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLTasksTasks : GTLCollectionObject

// ETag of the resource.
@property (nonatomic, copy) NSString *ETag;

// Collection of tasks.
@property (nonatomic, retain) NSArray *items;  // of GTLTasksTask

// Type of the resource. This is always "tasks#tasks".
@property (nonatomic, copy) NSString *kind;

// Token used to access the next page of this result.
@property (nonatomic, copy) NSString *nextPageToken;

@end
