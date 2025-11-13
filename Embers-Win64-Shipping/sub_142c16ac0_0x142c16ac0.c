// 函数: sub_142c16ac0
// 地址: 0x142c16ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    uint64_t r8_14 = zx.q(arg3 - 1)
    char* r9_1 = arg1
    uint32_t result
    
    if (r8_14.d u> 7)
        result.b = 0
        return result
    
    switch (r8_14)
        case 0
            uint32_t rcx_2 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_2 == 1)
                return sub_142c1ca80(r9_1, arg2) __tailcall
            
            if (rcx_2 == 2)
                return sub_142c1cb50(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 1
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c1bb30(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 2
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c19be0(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 3
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c1af40(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 4
            uint32_t rcx_25 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_25 == 1)
                return sub_142c1a3e0(r9_1, arg2) __tailcall
            
            if (rcx_25 == 2)
                return sub_142c1a510(r9_1, arg2) __tailcall
            
            if (rcx_25 == 3)
                return sub_142c1a690(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 5
            uint32_t rcx_36 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_36 == 1)
                return sub_142c19d00(r9_1, arg2) __tailcall
            
            if (rcx_36 == 2)
                return sub_142c19e40(r9_1, arg2) __tailcall
            
            if (rcx_36 == 3)
                return sub_142c1a040(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
        case 6
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) != 1)
                result.b = 0
                return result
        case 7
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c1c330(r9_1, arg2) __tailcall
            
            result.b = 0
            return result
    
    uint32_t r10_15 = (zx.d(r9_1[2]) << 8) + zx.d(r9_1[3])
    uint32_t r8_18 = (zx.d(r9_1[5]) << 0x10) + (zx.d(r9_1[6]) << 8) + (zx.d(r9_1[4]) << 0x18)
    result = zx.d(r9_1[7])
    
    if (r8_18 != neg.d(result))
        arg3 = r10_15
        arg1 = &r9_1[zx.q(r8_18 + result)]
    else
        arg1 = &data_14369a5d0
        arg3 = r10_15
