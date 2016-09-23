#pragma once
#include "Module.h"
#include "Globals.h"

class b2World;

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

	void MakeShape(float,float,float, bool);

private:

	bool debug;

public:
	b2World* world;
};