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

#include "Light.h"

namespace android {
namespace hardware {
namespace light {
namespace V2_0 {
namespace renesas {

Return<Status> Light::setLight(Type /*type*/, const LightState & /*state*/)
{
    return Status::LIGHT_NOT_SUPPORTED;
}


Return<void> Light::getSupportedTypes(getSupportedTypes_cb _hidl_cb)
{
    hidl_vec<Type> types{};
    _hidl_cb(types);
    return Void();
}

} // renesas
} // V2_0
} // light
} // hardware
} // android
