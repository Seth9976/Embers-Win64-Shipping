// 函数: sub_142c166d0
// 地址: 0x142c166d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    uint64_t r8_13 = zx.q(arg3 - 1)
    char* r9_1 = arg1
    
    if (r8_13.d u> 7)
        break
    
    switch (r8_13)
        case 0
            return sub_142c16690(r9_1, arg2) __tailcall
        case 1
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c156e0(arg2, r9_1) __tailcall
            
            break
        case 2
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c15000(arg2, r9_1) __tailcall
            
            break
        case 3
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c154e0(arg2, r9_1) __tailcall
            
            break
        case 4
            uint32_t rcx_19 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_19 == 1)
                return sub_142c15220(arg2, r9_1) __tailcall
            
            if (rcx_19 == 2)
                return sub_142c152f0(arg2, r9_1) __tailcall
            
            if (rcx_19 == 3)
                return sub_142c153e0(arg2, r9_1) __tailcall
            
            break
        case 5
            uint32_t rcx_30 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_30 == 1)
                return sub_142c15080(arg2, r9_1) __tailcall
            
            if (rcx_30 == 2)
                return sub_142c15150(arg2, r9_1) __tailcall
            
            if (rcx_30 == 3)
                return sub_142c151d0(arg2, r9_1) __tailcall
            
            break
        case 6
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) != 1)
                break
            
            uint32_t r10_15 = (zx.d(r9_1[2]) << 8) + zx.d(r9_1[3])
            uint32_t r8_17 =
                (zx.d(r9_1[5]) << 0x10) + (zx.d(r9_1[6]) << 8) + (zx.d(r9_1[4]) << 0x18)
            uint32_t rax_25 = zx.d(r9_1[7])
            
            if (r8_17 != neg.d(rax_25))
                arg3 = r10_15
                arg1 = &r9_1[zx.q(r8_17 + rax_25)]
                continue
            else
                arg1 = &data_14369a5d0
                arg3 = r10_15
                continue
        case 7
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c15c00(arg2, r9_1) __tailcall
            
            break

return 0
