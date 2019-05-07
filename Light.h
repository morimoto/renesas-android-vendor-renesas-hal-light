//
// Copyright (C) 2018 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ANDROID_HARDWARE_LIGHT_V2_0_HAL
#define ANDROID_HARDWARE_LIGHT_V2_0_HAL

#include <android/hardware/light/2.0/ILight.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace light {
namespace V2_0 {
namespace renesas {

using ::android::hardware::Return;
using ::android::hardware::Void;

class Light : public ILight
{
    ~Light() override = default;
    Return<Status> setLight(Type type, const LightState &state) override;
    Return<void> getSupportedTypes(getSupportedTypes_cb _hidl_cb) override;
};

} // renesas
} // V2_0
} // light
} // hardware
} // android

#endif // ANDROID_HARDWARE_LIGHT_V2_0_HAL

