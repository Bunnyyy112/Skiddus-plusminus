//game structs
const unsigned short Crc16Table[256] = {
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50A5, 0x60C6, 0x70E7,
0x8108, 0x9129, 0xA14A, 0xB16B, 0xC18C, 0xD1AD, 0xE1CE, 0xF1EF,
0x1231, 0x0210, 0x3273, 0x2252, 0x52B5, 0x4294, 0x72F7, 0x62D6,
0x9339, 0x8318, 0xB37B, 0xA35A, 0xD3BD, 0xC39C, 0xF3FF, 0xE3DE,
0x2462, 0x3443, 0x0420, 0x1401, 0x64E6, 0x74C7, 0x44A4, 0x5485,
0xA56A, 0xB54B, 0x8528, 0x9509, 0xE5EE, 0xF5CF, 0xC5AC, 0xD58D,
0x3653, 0x2672, 0x1611, 0x0630, 0x76D7, 0x66F6, 0x5695, 0x46B4,
0xB75B, 0xA77A, 0x9719, 0x8738, 0xF7DF, 0xE7FE, 0xD79D, 0xC7BC,
0x48C4, 0x58E5, 0x6886, 0x78A7, 0x0840, 0x1861, 0x2802, 0x3823,
0xC9CC, 0xD9ED, 0xE98E, 0xF9AF, 0x8948, 0x9969, 0xA90A, 0xB92B,
0x5AF5, 0x4AD4, 0x7AB7, 0x6A96, 0x1A71, 0x0A50, 0x3A33, 0x2A12,
0xDBFD, 0xCBDC, 0xFBBF, 0xEB9E, 0x9B79, 0x8B58, 0xBB3B, 0xAB1A,
0x6CA6, 0x7C87, 0x4CE4, 0x5CC5, 0x2C22, 0x3C03, 0x0C60, 0x1C41,
0xEDAE, 0xFD8F, 0xCDEC, 0xDDCD, 0xAD2A, 0xBD0B, 0x8D68, 0x9D49,
0x7E97, 0x6EB6, 0x5ED5, 0x4EF4, 0x3E13, 0x2E32, 0x1E51, 0x0E70,
0xFF9F, 0xEFBE, 0xDFDD, 0xCFFC, 0xBF1B, 0xAF3A, 0x9F59, 0x8F78,
0x9188, 0x81A9, 0xB1CA, 0xA1EB, 0xD10C, 0xC12D, 0xF14E, 0xE16F,
0x1080, 0x00A1, 0x30C2, 0x20E3, 0x5004, 0x4025, 0x7046, 0x6067,
0x83B9, 0x9398, 0xA3FB, 0xB3DA, 0xC33D, 0xD31C, 0xE37F, 0xF35E,
0x02B1, 0x1290, 0x22F3, 0x32D2, 0x4235, 0x5214, 0x6277, 0x7256,
0xB5EA, 0xA5CB, 0x95A8, 0x8589, 0xF56E, 0xE54F, 0xD52C, 0xC50D,
0x34E2, 0x24C3, 0x14A0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405,
0xA7DB, 0xB7FA, 0x8799, 0x97B8, 0xE75F, 0xF77E, 0xC71D, 0xD73C,
0x26D3, 0x36F2, 0x0691, 0x16B0, 0x6657, 0x7676, 0x4615, 0x5634,
0xD94C, 0xC96D, 0xF90E, 0xE92F, 0x99C8, 0x89E9, 0xB98A, 0xA9AB,
0x5844, 0x4865, 0x7806, 0x6827, 0x18C0, 0x08E1, 0x3882, 0x28A3,
0xCB7D, 0xDB5C, 0xEB3F, 0xFB1E, 0x8BF9, 0x9BD8, 0xABBB, 0xBB9A,
0x4A75, 0x5A54, 0x6A37, 0x7A16, 0x0AF1, 0x1AD0, 0x2AB3, 0x3A92,
0xFD2E, 0xED0F, 0xDD6C, 0xCD4D, 0xBDAA, 0xAD8B, 0x9DE8, 0x8DC9,
0x7C26, 0x6C07, 0x5C64, 0x4C45, 0x3CA2, 0x2C83, 0x1CE0, 0x0CC1,
0xEF1F, 0xFF3E, 0xCF5D, 0xDF7C, 0xAF9B, 0xBFBA, 0x8FD9, 0x9FF8,
0x6E17, 0x7E36, 0x4E55, 0x5E74, 0x2E93, 0x3EB2, 0x0ED1, 0x1EF0
};

enum BoneList : int
{
	l_hip = 1,
	l_knee,
	l_foot,
	l_toe,
	l_ankle_scale,
	pelvis,
	penis,
	GenitalCensor,
	GenitalCensor_LOD0,
	Inner_LOD0,
	GenitalCensor_LOD1,
	GenitalCensor_LOD2,
	r_hip,
	r_knee,
	r_foot,
	r_toe,
	r_ankle_scale,
	spine1,
	spine1_scale,
	spine2,
	spine3,
	spine4,
	l_clavicle,
	l_upperarm,
	l_forearm,
	l_hand,
	l_index1,
	l_index2,
	l_index3,
	l_little1,
	l_little2,
	l_little3,
	l_middle1,
	l_middle2,
	l_middle3,
	l_prop,
	l_ring1,
	l_ring2,
	l_ring3,
	l_thumb1,
	l_thumb2,
	l_thumb3,
	IKtarget_righthand_min,
	IKtarget_righthand_max,
	l_ulna,
	neck,
	head,
	jaw,
	eyeTranform,
	l_eye,
	l_Eyelid,
	r_eye,
	r_Eyelid,
	r_clavicle,
	r_upperarm,
	r_forearm,
	r_hand,
	r_index1,
	r_index2,
	r_index3,
	r_little1,
	r_little2,
	r_little3,
	r_middle1,
	r_middle2,
	r_middle3,
	r_prop,
	r_ring1,
	r_ring2,
	r_ring3,
	r_thumb1,
	r_thumb2,
	r_thumb3,
	IKtarget_lefthand_min,
	IKtarget_lefthand_max,
	r_ulna,
	l_breast,
	r_breast,
	BoobCensor,
	BreastCensor_LOD0,
	BreastCensor_LOD1,
	BreastCensor_LOD2,
	collision,
	displacement
};

enum PlayerFlags : int
{
	Unused1 = 1,
	Unused2 = 2,
	IsAdmin = 4,
	ReceivingSnapshot = 8,
	Sleeping = 16,
	Spectating = 32,
	Wounded = 64,
	IsDeveloper = 128,
	Connected = 256,
	ThirdPersonViewmode = 1024,
	EyesViewmode = 2048,
	ChatMute = 4096,
	NoSprint = 8192,
	Aiming = 16384,
	DisplaySash = 32768,
	Relaxed = 65536,
	SafeZone = 131072,
	ServerFall = 262144,
	Workbench1 = 1048576,
	Workbench2 = 2097152,
	Workbench3 = 4194304,
};

typedef struct _UncStr
{
	char stub[0x10];
	int len;
	wchar_t str[1];
} *pUncStr;

class WeaponData
{
private:
	unsigned short CRC(unsigned char* pcBlock, unsigned short len) {
		unsigned short crc = 0xFFFF;
		while (len--)
			crc = (crc << 8) ^ Crc16Table[(crc >> 8) ^ *pcBlock++];
		return crc;
	}
public:
	float Held() {
		return read(this + oHeldEntity, float);//0x98
	}
	int GetID()
	{
		DWORD64 Info = read((DWORD64)this + 0x20, DWORD64); // public ItemDefinition info;
		int ID = read(Info + 0x18, int); // public int itemid;
		return ID;
	}
	char* ClassName() {
		return (char*)read(read(read(this + oHeldEntity, DWORD64), DWORD64) + 0x10, DWORD64);
	}
	Weapon Info() {
		int ID = GetID();
		for (Weapon k : info) {
			if (k.id == ID) {
				return k;
			}
		}
		return Weapon{ 0 };
	}
	wchar_t* GetShortName(int* len)
	{
		DWORD64 Info = read(this + ItemDefinition, DWORD64);
		pUncStr Str = ((pUncStr)read(Info + oShortname, DWORD64));
		int leng = read(Str + 0x10, int);
		if (!leng) return nullptr;
		if (len)*len = leng;
		return Str->str;
	}
	wchar_t* GetShortNameName()
	{
		DWORD64 Info = read(this + ItemDefinition, DWORD64);
		pUncStr Str = ((pUncStr)read(Info + oShortname, DWORD64));
		return Str->str;
	}
	int LoadedAmmo()
	{
		const auto Held = read(this + oHeldEntity, DWORD64);
		if (Held <= 0)
			return 0;
		const auto Magazine = read(Held + oPrimaryMagazine, DWORD64);
		if (Magazine <= 0 || Magazine == 0x3F000000)
		{
			return 0;
		}
		const auto ammoType = read(Magazine + 0x20, DWORD64);
		if (ammoType <= 0 || ammoType == 0x3F000000)
		{
			return 0;
		}
		const int ammo = read(ammoType + 0x18, int);
		return ammo;
	}
	USHORT GetNameHash() {
		int Len;
		UCHAR* ShortName = (UCHAR*)GetShortName(&Len);
		if (ShortName == nullptr) return 0;
		return CRC(ShortName, (Len * 2));
	}
	wchar_t* GetName() {
		DWORD64 Info = read(this + ItemDefinition, DWORD64);
		DWORD64 DispName = read(Info + odisplayname, DWORD64);
		pUncStr Str = ((pUncStr)read(DispName + 0x18, DWORD64)); // default
		if (!Str) return nullptr; return Str->str;
	}
	int GetUID() {
		return read(this + oUID, int);
	}
	void RapidFire() {
		if (Weapons::RapidFire) {
			DWORD64 heldentity = read(this + 0x98, DWORD64);
			write(heldentity + 0x1DC, 0.09f, float); // repeatDelay
		}
	}
	std::string GetAmmoType()
	{
		const auto Held = read(this + oHeldEntity, DWORD64);
		const auto Magazine = read(Held + oPrimaryMagazine, DWORD64);
		uint64_t item_def = read(Magazine + 0x20, uint64_t);
		uint64_t short_name = read(item_def + 0x20, uint64_t);
		std::wstring wide_name = read(short_name + 0x14, std::wstring);

		if (!wide_name.empty())
			return std::string(wide_name.begin(), wide_name.end()).c_str();

		return "No Ammo";
	}
	void AntiSpread() {
		if (Weapons::AntiSpread) {
			DWORD64 Held = read(this + oHeldEntity, DWORD64);
			write(Held + oStancePenalty, 0.f, float);
			write(Held + oAimconePenalty, 0.f, float);
			write(Held + oAimCone, 0.f, float);
			write(Held + oHipAimCone, 0.f, float);
			write(Held + oAimconePenaltyPerShot, 0.f, float);
		}
	}
	void NoRecoil() {
		if (Weapons::NoRecoil) {
			DWORD64 Held = read(this + oHeldEntity, DWORD64);
			DWORD64 recoil = read(Held + oRecoil, DWORD64);
			write(recoil + oRecoilYawMin, 0.f, float);
			write(recoil + oRecoilYawMax, 0.f, float);
			write(recoil + oRecoilPitchMin, 0.f, float);
			write(recoil + oRecoilPitchMax, 0.f, float);
			write(recoil + oADSScale, 0.f, float);
			write(recoil + oMovementPenalty, 0.f, float);
		}
	}
	void SetAutomatic() {
		if (Weapons::Automatic) {
			DWORD64 Held = read(this + oHeldEntity, DWORD64);
			write(Held + oAutomatic, 1, bool);
		}
	}
	void SuperEoka() {
		if (Weapons::SuperEoka) {
			DWORD64 Held = read(this + 0x98, DWORD64); // EntityRef heldEntity
			write(Held + 0x340, 1.f, float); //public float successFraction;
			write(Held + 0x350, true, bool);
		}
	}
	void LongHand() {
		DWORD64 Held = read(this + oHeldEntity, DWORD64);
		write(Held + 0x278, 4.5f, float);  //private Transform attachmentBoneCache; // public float maxDistance;
	}
	void FatHand() {
		DWORD64 Held = read(this + oHeldEntity, DWORD64);
		write(Held + oAttackRadius, 15.f, float);
	}
	void RunOnHit() {
		DWORD64 Held = read(this + oHeldEntity, DWORD64);
		write(Held + oBlockSprintOnAttack, 0, int);
	}
};
class BasePlayer
{
public:
	float GetHealth() {
		return read(this + oHealth, float);
	}
	void SetFov() {
		auto klass = read(Storage::gBase + 0x29C1AA8, DWORD64);
		auto static_fields = read(klass + 0xB8, DWORD64);
		write(static_fields + 0x18, Misc::SexyFuckingFovValue, float);
	}
	const wchar_t* GetName() {
		pUncStr Str = ((pUncStr)(read(this + oDisplayName, DWORD64)));
		if (!Str) return L""; return Str->str;
	}
	Vector3 GetVelocity() {
		DWORD64 PlayerModel = read(this + oPlayerModel, DWORD64);
		return read(PlayerModel + oNewVelocity, Vector3);
	}
	bool IsVisible() {
		if (AimBot::VisibleCheck) {
			DWORD64 PlayerModel = read(this + oPlayerModel, DWORD64);
			return read(PlayerModel + oVisible, bool);
		}
		else return true;
	}

	float GetTickTime() {
		return read(this + oLastSentTickTime, float);
	}
	bool IsValid(bool LPlayer = false) {
		return (((LPlayer || PlayerEsp::sleeperignore) ? !HasFlags(16) : true) && !IsDead() && (GetHealth() >= 0.8f));
	}
	bool HasFlags(int Flg) {
		return (read(this + oPlayerFlags, int) & Flg);
	}
	Vector3 GetBoneByID(BoneList BoneID) {
		return GetPosition(GetTransform(BoneID));
	}
	bool IsNpc() {
		DWORD64 PlayerModel = read(this + 0x4A8, DWORD64); //	public PlayerModel playerModel;
		return read(PlayerModel + 0x2C0, bool);
	}
	int GetTeamSize()
	{
		DWORD64 ClientTeam = read(this + oClientTeam, DWORD64);
		DWORD64 members = read(ClientTeam + 0x28, DWORD64);//	private ListHashSet<ILOD> members; //public PlayerInventory inventory; // 0x28 ���  public List<PlayerTeam.TeamMember> members; // 0x28
		return read(members + 0x18, DWORD64);
	}
	DWORD64 GetTeammateByPos(int Id) {
		DWORD64 ClientTeam = read(this + 0x540, DWORD64);
		DWORD64 members = read(ClientTeam + 0x30, DWORD64);
		DWORD64 List = read(members + 0x10, DWORD64);
		DWORD64 player = read(List + 0x20 + (Id * 0x8), DWORD64);
		return read(player + 0x20, DWORD64);
	}
	bool IsTeamMate(DWORD64 SteamID) {
		bool ret = false;

		for (int i = 0; i < 8; i++) {
			if (GetTeammateByPos(i) == SteamID) {
				ret = true;
				break;
			}
		}
		return ret;
	}
	bool IsDead() {
		if (!this) return true;
		return read(this + oLifeState, bool);;
	}
	float GetTick() {
		return read(reinterpret_cast<uintptr_t>(this) + oGetTick, float);
	}
	bool HasFlag(int PlayerFlag)
	{
		return (read(this + oPlayerFlags, DWORD64) & PlayerFlag);
	}
	bool IsSleeping()
	{
		if (!this) return false;
		return HasFlag(Sleeping);
	}
	bool IsWounded()
	{
		if (!this) return false;
		return HasFlag(Wounded);
	}
	DWORD64 GetSteamID() {
		return read(this + oUserID, DWORD64);
	}
	bool IsMenu() {
		if (!this) return true;
		DWORD64 Input = read(this + oPlayerInput, DWORD64);
		return !(read(Input + oKeyFocus, bool));
	}
	void SetVA(const Vector2& VA) {
		DWORD64 Input = read(this + oPlayerInput, DWORD64);
		write(Input + oBodyAngles, VA, Vector2);
	}
	void AddFlag(int flag) {
		DWORD64 mstate = read(this + 0x588, DWORD64);
		int flags = read(mstate + 0x24, int);
		write(mstate + 0x24, flags |= flag, int);
	}
	void RemoveFlag(int flag) {
		DWORD64 mstate = read(this + 0x588, DWORD64);
		int flags = read(mstate + 0x24, int);
		write(mstate + 0x24, flags &= ~flag, int);
	}
	void SetRA() {
		DWORD64 Input = read(this + oPlayerInput, DWORD64);
		Vector2 RA = { 0.f, 0.f };
		write(Input + oRecoilAngles, RA, Vector2);
	}
	Vector2 GetVA() {
		DWORD64 Input = read(this + oPlayerInput, DWORD64);
		return read(Input + oBodyAngles, Vector2);
	}
	Vector2 GetRA() {
		DWORD64 Input = read(this + oPlayerInput, DWORD64);
		return read(Input + oRecoilAngles, Vector2);
	}
	WeaponData* GetWeaponInfo(int Id) {
		DWORD64 Inventory = read(this + oInventory, DWORD64);
		DWORD64 Belt = read(Inventory + 0x28, DWORD64);
		DWORD64 ItemList = read(Belt + 0x38, DWORD64);// public List<Item> itemList;
		DWORD64 Items = read(ItemList + 0x10, DWORD64); //	public List<InventoryItem.Amount> items;
		return (WeaponData*)read(Items + 0x20 + (Id * 0x8), DWORD64);
	}
	WeaponData* GetActiveWeapon() {
		int ActUID = read(this + oClActiveItem, int);
		if (!ActUID) return nullptr;
		WeaponData* ActiveWeapon;
		for (int i = 0; i < 6; i++)
			if (ActUID == (ActiveWeapon = GetWeaponInfo(i))->GetUID())
				return ActiveWeapon;
		return nullptr;
	}
	void AirStuck(bool state) {
		write(this + oFrozen, state, bool);
	}
	void WalkWater()
	{
		DWORD64 Movement = read(this + oMovement, DWORD64);
		if (!Movement)
			return;
		static bool x130 = read(Movement + oFlying, bool);
		static float xB0 = read(Movement + oGroundAngleNew, float);
		static float x74 = read(Movement + oGravityMultiplier, float);
		static float x78 = read(Movement + oGravityMultiplierSwimming, float);
		bool state = Misc::WalkOnWater && GetAsyncKeyState(Keys::walkonWaterKey);
		if (Misc::WalkOnWater)
		{
			write(Movement + oFlying, 1, bool);
			write(Movement + oGroundAngleNew, 0.f, float);
			write(Movement + oGravityMultiplier, 0.f, float);
			write(Movement + oGravityMultiplierSwimming, 1.f, float);
		}
		else
		{
			write(Movement + oFlying, x130, bool);
			write(Movement + oGroundAngleNew, xB0, float);
			write(Movement + oGravityMultiplier, x74, float);
			write(Movement + oGravityMultiplierSwimming, x78, float);
		}
	}
	void FakeAdmin() {

		int Flags = read(this + oPlayerFlags, int);
		write(this + oPlayerFlags, (Flags |= 4), int);

	}
	void SpiderMan() {
		DWORD64 Movement = read(this + oMovement, DWORD64);
		write(Movement + oGroundAngle, 0.f, float);
		write(Movement + oGroundAngleNew, 0.f, float);
	}
	void WaterBoost() {
		write(this + oClothingWaterSpeedBonus, 0.15f, float);
	}
	void NoSway() {
		write(this + oClothingAccuracyBonus, 1.f, float);
	}
	void NoBlockAiming() {
		write(this + oClothingBlocksAiming, false, bool);
	}
	void NoHeavyReduct() {
		float Reduct = read(this + oClothingMoveSpeedReduction, float);
		if (Reduct == 0.f) { write(this + oClothingMoveSpeedReduction, -0.1f, float); }
		else if ((Reduct > 0.15f) && (Reduct < 0.35f)) {
			write(this + oClothingMoveSpeedReduction, 0.15f, float);
		}
		else if (Reduct > 0.39f) {
			write(this + oClothingMoveSpeedReduction, 0.15f, float);
		}
	}
	void SetGravity(float val) {
		DWORD64 Movement = read(this + oMovement, DWORD64);
		write(Movement + oGravityMultiplier, val, float);
	}
private:
	typedef Vector3(__stdcall* Transform)(UINT64);
	Vector3 GetPosition(ULONG_PTR pTransform) {
		if (!pTransform) return Vector3();
		Transform original = (Transform)(Storage::gBase + 0x1A8EB00 /*0x1A8F260*/);
		Vector3 res = original(pTransform);
		return res;
	}
	DWORD64 GetTransform(int bone) {
		DWORD64 player_model = read(this + 0x118, DWORD64);// public Model model;_public class BaseEntity : BaseNetworkable, IProvider, ILerpTarget, IPrefabPreProcess // TypeDefIndex: 8714
		DWORD64 boneTransforms = read(player_model + 0x48, DWORD64);//public Transform[] boneTransforms;
		DWORD64 BoneValue = read((boneTransforms + (0x20 + (bone * 0x8))), DWORD64);
		return BoneValue;
	}

};


//Base Player
class LPlayerBase
{
public:
	BasePlayer* BasePlayer = nullptr;
	Matrix4x4* pViewMatrix = nullptr;
	bool WorldToScreen(const Vector3& EntityPos, Vector2& ScreenPos)
	{
		if (!pViewMatrix) return false;
		Vector3 TransVec = Vector3(pViewMatrix->_14, pViewMatrix->_24, pViewMatrix->_34);
		Vector3 RightVec = Vector3(pViewMatrix->_11, pViewMatrix->_21, pViewMatrix->_31);
		Vector3 UpVec = Vector3(pViewMatrix->_12, pViewMatrix->_22, pViewMatrix->_32);
		float w = Math::Dot(TransVec, EntityPos) + pViewMatrix->_44;
		if (w < 0.098f) return false;
		float y = Math::Dot(UpVec, EntityPos) + pViewMatrix->_42;
		float x = Math::Dot(RightVec, EntityPos) + pViewMatrix->_41;
		ScreenPos = Vector2((Global::ScreenWidth / 2) * (1.f + x / w), (Global::ScreenHigh / 2) * (1.f - y / w));
		return true;
	}

};


DECLSPEC_NOINLINE void Flex() {
	FC(kernel32, Sleep, 0);
}

LPlayerBase LocalPlayer;

