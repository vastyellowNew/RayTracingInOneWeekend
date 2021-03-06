#include "RayTracerEngine.h"

#include "Sphere.h"

int main() {

  std::shared_ptr<Sphere> sphere  = std::make_shared<Sphere>(glm::vec3(0.0f,    0.0f, -2.0f), 1.0f);
  std::shared_ptr<Sphere> sphere2 = std::make_shared<Sphere>(glm::vec3(0.0f, -100.0f, -2.0f), 100.0f);

  RayTracerEngine engine;

  engine.addHitable(sphere);
  engine.addHitable(sphere2);

  engine.render();

  engine.saveOutput(OUT_FORMAT_PNG, "test.png");

  return 0;
}