#define read(Addr, Type) (((((ULONG64)Addr) > 0x400000) && (((ULONG64)Addr + sizeof(Type)) < 0x00007FFFFFFF0000)) ? *(Type*)((ULONG64)Addr) : Type{})
#define write(Addr, Data, Type) if ((((ULONG64)Addr) > 0x400000) && (((ULONG64)Addr + sizeof(Type)) < 0x00007FFFFFFF0000)) { *(Type*)((ULONG64)Addr) = (Data); }
#define memcpy(Dst, Src, Size) memcpy_wrapper(((ULONG64)Dst), ((ULONG64)Src), Size)
void memcpy_wrapper(ULONG64 Dst, ULONG64 Src, ULONG Sz)
{
	if ((((ULONG64)Dst) > 0x400000) && (((ULONG64)Dst + Sz) < 0x00007FFFFFFF0000))
	{
		while (true)
		{
			if (Sz >= 8)
			{
				*(ULONG64*)Dst = *(ULONG64*)Src;
				Dst += 8; Src += 8; Sz -= 8;
			}
			else if (Sz >= 4)
			{
				*(ULONG*)Dst = *(ULONG*)Src;
				Dst += 4; Src += 4; Sz -= 4;
			}
			else if (Sz >= 2)
			{
				*(WORD*)Dst = *(WORD*)Src;
				Dst += 2; Src += 2; Sz -= 2;
			}
			else if (Sz)
			{
				*(BYTE*)Dst = *(BYTE*)Src;
				break;
			}
			else
				break;
		}
	}
}

