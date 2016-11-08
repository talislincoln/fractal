#include "MyGame.h"

#include "MyScene.h"
#include "helpers\Singleton.h"
#include "scene\SceneManager.h"

MyGame::MyGame()
{
}


MyGame::~MyGame()
{
}

bool MyGame::initialize() {
	fractal::fhelpers::Singleton<fractal::fscene::SceneManager>::getInstance().addScene(new MyScene());

	fractal::fhelpers::Singleton<fractal::fscene::SceneManager>::getInstance().setActiveScene("MyScene");

	return true;
}

bool MyGame::shutdown() {
	return true;
}