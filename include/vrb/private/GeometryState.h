//
// Created by Christ_Chen on 2024/10/8.
//

#ifndef VIVE_BROWSER_CHROMIUM_CHRIST_CHEN_GEOMETRYSTATE_H
#define VIVE_BROWSER_CHROMIUM_CHRIST_CHEN_GEOMETRYSTATE_H

#include "vrb/Geometry.h"
#include "vrb/private/GeometryDrawableState.h"
#include "vrb/private/ResourceGLState.h"

namespace vrb {

    struct Geometry::State : public GeometryDrawable::State, public ResourceGL::State {
        VertexArrayPtr vertexArray;
        std::vector<Face> faces;
        GLsizei vertexCount = 0;
        GLsizei triangleCount = 0;

        State() = default;
        ~State() = default;
    };
}

#endif //VIVE_BROWSER_CHROMIUM_CHRIST_CHEN_GEOMETRYSTATE_H
