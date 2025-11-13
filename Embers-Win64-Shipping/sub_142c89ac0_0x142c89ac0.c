// 函数: sub_142c89ac0
// 地址: 0x142c89ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0xcc) == 0)
    memset(arg2 + 0xd0, 0, 0x58)
    *(arg2 + 0x100) = sub_142c8a190
    *(arg2 + 0x108) = sub_142c70420
    
    if (sub_140371c50(arg2 + 0xd0, "1.2.8", 0x58) != 0)
        int64_t r8 = *(arg2 + 0xf0)
        void* rcx_2 = *arg1
        
        if (r8 == 0)
            sub_142c64760(rcx_2, 
                "Error while processing content unencoding: Unknown failure within decompression "
            "software.", 
                r8, arg4)
            return 0x3d
        
        sub_142c64760(rcx_2, "Error while processing content unencoding: %s", r8, arg4)
        return 0x3d
    
    *(arg2 + 0xcc) = 1

*(arg2 + 0xd0) = *(arg2 + 0x78)
*(arg2 + 0xd8) = arg3
return sub_142c89f50(arg1, arg2, arg4)
