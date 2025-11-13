// 函数: sub_142c176c0
// 地址: 0x142c176c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

while (true)
    uint64_t r8_12 = zx.q(arg3 - 1)
    char* r9_1 = arg1
    
    if (r8_12.d u> 7)
        break
    
    switch (r8_12)
        case 0
            uint32_t rcx_2 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_2 == 1)
                return sub_142c29dc0(r9_1, arg2) __tailcall
            
            if (rcx_2 == 2)
                return sub_142c29dc0(r9_1, arg2) __tailcall
            
            break
        case 1
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c29dc0(r9_1, arg2) __tailcall
            
            break
        case 2
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c29dc0(r9_1, arg2) __tailcall
            
            break
        case 3
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c2a6d0(r9_1, arg2) __tailcall
            
            break
        case 4
            return sub_142c17650(r9_1, arg2) __tailcall
        case 5
            uint32_t rcx_27 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_27 == 1)
                return sub_142c29e50(r9_1, arg2) __tailcall
            
            if (rcx_27 == 2)
                return sub_142c29f80(r9_1, arg2) __tailcall
            
            if (rcx_27 == 3)
                return sub_142c2a0e0(r9_1, arg2) __tailcall
            
            break
        case 6
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) != 1)
                break
            
            uint32_t r10_13 = (zx.d(r9_1[2]) << 8) + zx.d(r9_1[3])
            uint32_t r8_16 =
                (zx.d(r9_1[5]) << 0x10) + (zx.d(r9_1[6]) << 8) + (zx.d(r9_1[4]) << 0x18)
            result = zx.d(r9_1[7])
            
            if (r8_16 != neg.d(result))
                arg3 = r10_13
                arg1 = &r9_1[zx.q(r8_16 + result)]
                continue
            else
                arg1 = &data_14369a5d0
                arg3 = r10_13
                continue
        case 7
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c29dc0(r9_1, arg2) __tailcall
            
            break

result.b = 0
return result
