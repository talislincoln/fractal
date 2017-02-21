#include "TalisScene.h"

#include <Fractal\include\graphics\Vertex.h>
#include <Fractal\include\helpers\Singleton.h>
#include <Fractal\include\scene\SceneManager.h>
#include <Fractal\include\core\systems\Input.h>
#include <Fractal\include\graphics\Mesh.h>
#include <Fractal\include\scene\components\MeshComponent.h>

#include <Fractal\include\scene\components\TerrainComponent.h>
#include <Fractal\include\scene\components\TransformComponent.h>
#include <Fractal\include\scene\components\PhysicsBodyComponent.h>
#include <Fractal\include\scene\components\PhysicsShapeComponent.h>

#include <FractalPhysics\include\shapes\PhysicsBox.h>


TalisScene::TalisScene():
Scene("TalisScene")
{
}


TalisScene::~TalisScene()
{
}

bool TalisScene::initialize() {
	return Scene::initialize();
}

void TalisScene::update() {

	using namespace fractal;
	using namespace fscene;
	using namespace fmath;
	using namespace fgraphics;
	Scene::update();
}

bool TalisScene::shutdown() {
	return Scene::shutdown();
}