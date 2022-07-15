/*
 * Copyright (C) 2019,2021 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <vendor/mokee/touch/1.0/ITouchscreenGesture.h>

namespace vendor {
namespace mokee {
namespace touch {
namespace V1_0 {
namespace implementation {

using ::android::hardware::Return;
using ::android::hardware::Void;

class TouchscreenGesture : public ITouchscreenGesture {
  public:
    // Methods from ::vendor::mokee::touch::V1_0::ITouchscreenGesture follow.
    Return<void> getSupportedGestures(getSupportedGestures_cb resultCb) override;
    Return<bool> setGestureEnabled(const ::vendor::mokee::touch::V1_0::Gesture& gesture,
                                   bool enabled) override;
};

}  // namespace implementation
}  // namespace V1_0
}  // namespace touch
}  // namespace mokee
}  // namespace vendor
