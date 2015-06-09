/*
**
** Copyright 2012, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#ifndef IFACEDETECTIONLISTENER_H_
#define IFACEDETECTIONLISTENER_H_

#include <string.h>
#include <hardware/camera.h>

namespace android {
class IFaceDetectionListener
{
public:
    virtual ~IFaceDetectionListener() {};
    /**
     * @param face_metadata pointer to face metadata. NULL pointer resets the
     * listener to initial state.
     */
    virtual void facesDetected(extended_frame_metadata_t *face_metadata) = 0;
};

}

#endif /* IFACEDETECTIONLISTENER_H_ */
