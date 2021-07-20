#ifndef RAYTRACING_SOURCE_CAMERA_HPP
#define RAYTRACING_SOURCE_CAMERA_HPP

#include "Ray.hpp"
#include <glm/glm.hpp>

class Camera
{
public:
    Camera(glm::vec3 origin, float viewportWidth, float viewportHeight, float vocalLength);
    Ray getRay(float u, float v);
    void transform(glm::mat4 transformMat);
    void recalculate();
private:
    float m_viewportWidth;
    float m_viewportHeight;
    float m_vocalLength;
    glm::vec3 m_origin;
    glm::vec3 m_viewportOrigin;
};

#endif //RAYTRACING_SOURCE_CAMERA_HPP
