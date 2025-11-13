// 函数: sub_142c7fec0
// 地址: 0x142c7fec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int512_t entry_zmm2

if (*(*(rcx + 0x250) + 0x18) != 0)
    arg1[0xea].d = 0xd
    return sub_142c80010(arg1, 1, 0xd, entry_zmm2) __tailcall

if (*(rcx + 0x5de) != 0)
    return sub_142c80af0(arg1, 0, entry_zmm2) __tailcall

if (*(rcx + 0x5f6) == 0)
    return sub_142c80a60(arg1) __tailcall

int64_t r8_2 = arg1[0xe4]
int32_t result

if (r8_2 == 0)
    char const* const r8_3 = *(rcx + 0x650)
    
    if (r8_3 == 0)
        r8_3 = "LIST"
        
        if (*(rcx + 0x5dd) != 0)
            r8_3 = "NLST"
    
    result = gzprintf(&arg1[0xd3], "PRET %s", r8_3, entry_zmm2)
    
    if (result != 0)
        return result
else if (*(rcx + 0x5e9) == 0)
    result = gzprintf(&arg1[0xd3], "PRET RETR %s", r8_2, entry_zmm2)
    
    if (result != 0)
        return result
else
    result = gzprintf(&arg1[0xd3], "PRET STOR %s", r8_2, entry_zmm2)
    
    if (result != 0)
        return result

arg1[0xea].d = 0x1d
return result
