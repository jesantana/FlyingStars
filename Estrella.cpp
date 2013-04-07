#include "StdAfx.h"
#include "estrella.h"
#include <math.h>
#define INC 8
#define PI 3.1415926535
#define AGRAD(rad) (rad*360/6.28)


Estrella::Estrella()
{
alto=600;
largo=800;

InitStar();
}

void Estrella::SetAng(){
angulo=rand()*2*PI/RAND_MAX;
}

void Estrella::InitStar(){
int t=0;
p.x=largo/2;
p.y=alto/2;
tama=0;
SetAng();
}

POINT Estrella::GetCord(void)
{
	return Estrella::p;

}
int Estrella::GetTama(void)
{
	return Estrella::tama;

}

Estrella::~Estrella(void)
{

}

void Estrella::MueveEstrella()
{
p.x+=INC*cos(angulo);
p.y-=INC*sin(angulo);
if(abs(largo/2-p.x)>60 || abs(alto/2-p.y)>40){tama=3;}
if(p.x>=largo*0.75 || p.x<=largo*0.35)tama=4;
if(p.x<0 || p.x>largo || p.y<0 || p.y>alto)
{
InitStar();
}
}

void Estrella::MueveEstrellaCerca(){
p.x+=INC*cos(angulo);
p.y-=INC*sin(angulo);



if(p.x<0 || p.x>largo || p.y<0 || p.y>alto)
{
InitStar();
}
else if(p.x>=largo*0.8 || p.x<=largo*0.2  || p.y>=alto*0.8 || p.y<=alto*0.2)tama=8;
else if(p.x>=largo*0.65 || p.x<=largo*0.45)tama=6;
else if(abs(largo/2-p.x)>60 || abs(alto/2-p.y)>40){tama=4;}
}