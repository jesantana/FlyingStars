#pragma once

class Estrella
{
private:
	POINT p;
	int tama;
	float angulo;
	int alto,largo;
	void InitStar();
	

public:
	Estrella();
	~Estrella(void);
	POINT GetCord(void);
	int GetTama(void);
	void MueveEstrella(void);
	void MueveEstrellaCerca(void);
	void SetAng(void);

};
