#ifndef string
#include <string>
#endif
#ifndef ship
#define ship
class Ship{
	private:
		float hullStrength;
		float shieldStrength;
		float gunStrength;
		float gunAccuracy;
		float missileStrength;
		float missileAccuracy;
		float evade;
		float evasionFactor;
		float speed;
		int cost;
		std::string shipClassName;
	public:
		Ship(){
			hullStrength = 0;
			shieldStrength = 0;
			gunStrength = 0;
			gunAccuracy = 0;
			missileStrength = 0;
			missileAccuracy = 0;
			evade = 0;
			evasionFactor = 1;
			speed = 0;
			cost = 0;
			shipClassName = "default shit";
		}
		Ship(std::string nombre, float hullStr, float shieldStr, float gunStr, float gunAcc, float missileStr, float missileAcc, float evasion, float evadeFactor, float zip, int moneyz){
			shipClassName = nombre;
			hullStrength = hullStr;
			shieldStrength = shieldStr;
			gunStrength = gunStr;
			gunAccuracy = gunAcc;
			missileStrength = missileStr;
			missleAccuracy = missileAcc;
			evade = evasion;
			evasionFactor = evadeFactor;
			speed = zip;
			cost = moneyz;
		}
		~Ship();
		


#endif ship
