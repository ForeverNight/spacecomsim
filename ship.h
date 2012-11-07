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
		int gunReload;
		float missileStrength;
		float missileAccuracy;
		int missileReload;
		float evade;
		float evasionFactor;
		float speed;
		int cost;
		std::string shipClassName;
		bool shipFlags[2];
		/*
		shipFlags[0] = isEvading, flags[1] = isFighting
		*/
	public:
		//default constructor, everything is 0
		Ship(){
			hullStrength = 0;
			shieldStrength = 0;
			gunStrength = 0;
			gunAccuracy = 0;
			gunReload = 0;
			missileStrength = 0;
			missileAccuracy = 0;
			missileReload = 0;
			evade = 0;
			evasionFactor = 0;
			speed = 0;
			cost = 0;
			shipClassName = "default shit";
			shipFlags[] = {false, false};
		}
		//Standard Constructor, defines everything
		Ship(std::string nombre, float hullStr, float shieldStr, float gunStr, float gunAcc, int gunRel; float missileStr, float missileAcc, int missileRel, float evasion, float evadeFactor, float zip, int moneyz){
			shipClassName = nombre;
			hullStrength = hullStr;
			shieldStrength = shieldStr;
			gunStrength = gunStr;
			gunAccuracy = gunAcc;
			gunReload = gunRel;
			missileStrength = missileStr;
			missleAccuracy = missileAcc;
			missileReload = missleRel;
			evade = evasion;
			evasionFactor = evadeFactor;
			speed = zip;
			cost = moneyz;
			shipFlags[] = {false, false};
		}
		//Deconstructor
		~Ship();
		//Toggle EvasionMode
		void toggleEvade(){
			if(shipFlags[0]){
				shipFlags[0] = false;
			}
			else if(!shipFlags[0]){
				shipFlags[0] = true;
				if(shipFlags[1]){
					shipFlags[1] = false; //can't be in combat and evade at the same time
				}
			}
			else{
			//There's an error
			}
		}
		//Toggle combat mode
		void toggleCombat(){
			if(shipFlags[1]){
				shipFlags[1]] = false;			
			}
			else if(!shipFlags[1]){
				shipFlags[1] = true;
				if(shipFlags[0]){
					shipFlags[0] = false; //can't be in evade and combat mode at the same time
				}
			}
			else{
			//There's an error - look into error definition and making
			}
		}
		//Do evading, provide penalties to enemy fire
		void evasion(){
		} //Unknown how to implement this...					
		void fireGuns(){
		} //Unknown how to do this, should refer to planning docs for combat
		void fireMissiles(){
		} //Surpise, no clue either...
		void runAway(){
		} //Guess what kids?
	};//DON'T FORGET THIS!
#endif ship
