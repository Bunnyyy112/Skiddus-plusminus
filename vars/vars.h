HANDLE handle2;
bool init, show = false;
namespace Global
{
	bool Panic = false;
	int ScreenHigh = 0;
	int ScreenWidth = 0;
	HWND hWindow = nullptr;
	WNDPROC oWindproc = nullptr;
	float BoneToAim = 0.5;
	DWORD64 PresentDelta = 0;
	char ConfigName[0x100] = "cfg";
}
namespace Test {
	float gravityTest = 0.75f;
}
namespace Keys
{
	int terrainShootKey{ 0x4E };
	int aimKey{ 0x58 }; // VK_RMOUSE
	int gravityKey{ 0x04 };
	int walkonWaterKey{ 0x06 };
	int zoomKey{ 0x42 };
}
namespace Storage
{
	namespace O
	{
		__declspec(selectany) uintptr_t BaseNetworkable = NULL;
	}
	__declspec(selectany) uintptr_t gBase = NULL;
	__declspec(selectany) uintptr_t closestPlayer = NULL;
	__declspec(selectany) uintptr_t generalPlayer = NULL;
	int entityCount = NULL;
	float gravityModifier = 0.f;
	//BasePlayer* closestPlayer = NULL;
}
namespace Other
{
	bool cfgSaved = false;
	bool cfgLoaded = false;
	bool InfoTopLeft = false;
}
namespace AimBot
{
	bool IgnoreSleepers = false;
	bool IgnoreTeam = true;
	bool IgnoreNpc = false;
	bool AlwaysHeadshot = false;
	bool ShowPredict = false;
	bool pSilent = false;
	bool ThroughWall = false;
	bool silentAim = false;
	bool Activate = false;
	bool VisibleCheck = false;
	bool DrawFov = false;
	bool Crosshair = true;
	float Range = 300.f;
	bool FillFov = false;
	float Fov = 100.f;
}

namespace Weapons
{
	bool canHoldItems = false;
	bool SpoofHitDistance = false;
	bool HammerSpam = false;
	bool FatHand = false;
	bool LongHand = false;
	bool NoRicochet = false;
	float ricochetChance = 0.f;
	bool NoRecoil = false;
	bool AntiSpread = false;
	bool Automatic = false;
	bool FatBullet = false;
	bool NoSway = false;
	bool RapidFire = false;
	bool SuperBow = false;
	bool SuperEoka = false;
	bool jumpAim = false;
}

namespace PlayerEsp
{
	bool box = false;
	bool skeleton = false;
	bool name = false;
	bool health = false;
	bool healthbar = false;
	bool weapon = false;
	bool distance = false;
	bool sleeperignore = false;
	bool tracers = false;
	bool targetline = false;
	bool fillbox = false;
}
namespace BotsEsp
{
	bool box = false;
	bool skeleton = false;
	bool health = false;
	bool healthbar = false;
	bool name = false;
	bool distance = false;
	bool weapons = false;
}

namespace Ores
{
	bool Stone = false;
	bool Sulfur = false;
	bool Metal = false;
	bool showDistance = false;
	float oreDrawDistance = 300.f;
}
namespace Positions
{
	Vector3 heliPos = { 0.f,0.f,0.f };
}
namespace Visuals
{
	bool PatrolHeli = false;

	bool Minicopter = false;
	bool ScrapHeli = false;
	bool Boat = false;
	bool RHIB = false;
	bool vehicleDistance = false;
	float drawVehicleDistance = 300.f;

	bool AutoTurret = false;
	bool FlameTurret = false;
	bool ShotgunTurret = false;
	bool Landmine = false;
	bool BearTrap = false;
	bool trapDistance = false;
	float drawTrapDistance = 300.f;

	bool Corpse = false;
	bool Stash = false;
	bool Hemp = false;
	bool otherDistance = false;
	float drawOtherDistance = 300.f;

	bool Supply = false;
	bool Chinook = false;
	bool crateDistance = false;
	float drawCrateDistance = 300.f;
}
namespace ColorsNShit
{
	float playercolors[4] = { 1,1,1,1 };
	float invisplayercolors[4] = { 1,0,0,1 };
	float sleepercolors[4] = { 1,0.5,0,1 };
	float crosshairfovcolors[4] = { 1,1,1,1 };
	float botcolors[4] = { 1,1,0,1 };
	float teamcolors[4] = { 0,1,0,1 };

	float stoneore[4] = { 0.78, 0.78 ,0.78 , 1 };
	float sulfurore[4] = { 1, 0.78 ,0.13 , 1 };
	float metalore[4] = { 0.54, 0.19 ,0 , 1 };

	float patrolhelicopter[4] = { 0.27 , 0.27 , 1 , 1 };
	float airdrop[4] = { 0 , 0.20 , 0.43 , 1 };
	float chinook[4] = { 0.34 , 0 , 0 , 1 };
	float minicopter[4] = { 0.5 , 0.45 , 0 , 1 };
	float scrapheli[4] = { 0 , 0.5 , 0 , 1 };
	float boat[4] = { 0 , 0.8 , 0.8 , 1 };
	float rhib[4] = { 0.34 , 0.34 , 0.34 , 1 };
	float turret[4] = { 1 , 0.34 , 0 , 1 };
	float flame[4] = { 1 , 0.78 , 0 , 1 };
	float shotgun[4] = { 0.61 , 0.68 , 1 , 1 };
	float landmine[4] = { 0 , 0 , 1 , 1 };
	float beartrap[4] = { 0.32 , 0 , 0.65 , 1 };
	float hemp[4] = { 0.56 , 1 , 0.34 , 1 };
	float corpse[4] = { 0.5 , 0.21 , 0.34 , 1 };
	float stash[4] = { 0 , 0.5 , 0 , 1 };


	float fovsegments = 15;
	float boxRoundness = 0;
}

namespace Misc
{
	bool Flyhack = false;
	bool AntiAim = false;
	bool FakeLag = false;
	bool SilentWalk = false;
	bool MeleeAutoFarm = false;
	bool CustomHitsound = false;
	bool SexyFuckingFov = false;
	float SexyFuckingFovValue = 90.f;
	bool Gravity = false;
	float GravityModifier = 0.f;

	bool SpiderMan = false;
	bool WalkOnWater = false;
	bool omniSprint = false;
	bool FakeAdmin = false;
	bool CustomTime = false;
	float Time = 10.0f;
	bool WaterBoost = false;
}

