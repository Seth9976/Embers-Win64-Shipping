// 函数: sub_142c16910
// 地址: 0x142c16910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    uint64_t r8_16 = zx.q(arg3 - 1)
    char* r9_1 = arg1
    uint32_t result
    
    if (r8_16.d u> 8)
        result.b = 0
        return result
    
    switch (r8_16)
        case 0
            uint32_t rcx_2 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_2 == 1)
                return sub_142c1c830(r9_1, arg2) __tailcall
            
            if (rcx_2 == 2)
                return sub_142c1c910(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 1
            uint32_t rcx_10 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_10 == 1)
                return sub_142c1bc50(r9_1, arg2) __tailcall
            
            if (rcx_10 == 2)
                return sub_142c1bdd0(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 2
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c1a7b0(r9_1, arg2, arg4) __tailcall
            
            result.b = 0
            return result
        case 3
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c1b2f0(r9_1, arg2, arg4) __tailcall
            
            result.b = 0
            return result
        case 4
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c1b5c0(r9_1, arg2, arg4) __tailcall
            
            result.b = 0
            return result
        case 5
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c1b880(r9_1, arg2, arg4) __tailcall
            
            result.b = 0
            return result
        case 6
            uint32_t rcx_38 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_38 == 1)
                return sub_142c1a3e0(r9_1, arg2) __tailcall
            
            if (rcx_38 == 2)
                return sub_142c1a510(r9_1, arg2) __tailcall
            
            if (rcx_38 == 3)
                return sub_142c1a690(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 7
            uint32_t rcx_49 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_49 == 1)
                return sub_142c19d00(r9_1, arg2) __tailcall
            
            if (rcx_49 == 2)
                return sub_142c19e40(r9_1, arg2) __tailcall
            
            if (rcx_49 == 3)
                return sub_142c1a040(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 8
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) != 1)
                result.b = 0
                return result
    
    uint32_t r10_17 = (zx.d(r9_1[2]) << 8) + zx.d(r9_1[3])
    uint32_t r8_20 = (zx.d(r9_1[5]) << 0x10) + (zx.d(r9_1[6]) << 8) + (zx.d(r9_1[4]) << 0x18)
    result = zx.d(r9_1[7])
    
    if (r8_20 != neg.d(result))
        arg3 = r10_17
        arg1 = &r9_1[zx.q(r8_20 + result)]
    else
        arg1 = &data_14369a5d0
        arg3 = r10_17
