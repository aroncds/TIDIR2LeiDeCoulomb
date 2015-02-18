/*
Author: Aron de Castro Coelho
Email: aronxgames@yahoo.com.br
Date: 03/06/2014

Armaneza um conjunto de objetos que teram rela��o em posi��o, escala e rota��o

Por favor, caso a utiliza��o do codigo, mantenha meus direitos!
*/
#ifndef _NODE_H_
#define _NODE_H_

#pragma once

#include "Object.h"

class Node : public Object
{
private:
	Object ** _objects;
	mat4 _matrix;
	int length = 0;
	int quantAdd = 0;

public:
	void addChild(Object *obj);
	void removeChild(Object obj);
	void contains(Object obj);
	
	virtual void Update() override;
	virtual void Render(float* camera) override;
	virtual void Render(float* camera, mat4 parent) override;

	void Clear();

	Node(int quant_objects);
	~Node();
};

#endif