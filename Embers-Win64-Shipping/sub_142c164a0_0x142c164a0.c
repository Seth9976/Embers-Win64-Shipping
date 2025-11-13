// 函数: sub_142c164a0
// 地址: 0x142c164a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    uint64_t r8_20 = zx.q(arg3 - 1)
    char* r9_1 = arg1
    
    if (r8_20.d u> 8)
        break
    
    switch (r8_20)
        case 0
            uint32_t r8_16 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (r8_16 == 1)
                return sub_142c15c80(arg2, r9_1) __tailcall
            
            if (r8_16 == 2)
                return sub_142c15d70(arg2, r9_1) __tailcall
            
            return 0
        case 1
            uint32_t rcx_3 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_3 == 1)
                return sub_142c15760(arg2, r9_1) __tailcall
            
            if (rcx_3 == 2)
                return sub_142c157e0(arg2, r9_1) __tailcall
            
            break
        case 2
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c15460(arg2, r9_1) __tailcall
            
            break
        case 3
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c15560(arg2, r9_1) __tailcall
            
            break
        case 4
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c155e0(arg2, r9_1) __tailcall
            
            break
        case 5
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) == 1)
                return sub_142c15660(arg2, r9_1) __tailcall
            
            break
        case 6
            uint32_t rcx_31 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_31 == 1)
                return sub_142c15220(arg2, r9_1) __tailcall
            
            if (rcx_31 == 2)
                return sub_142c152f0(arg2, r9_1) __tailcall
            
            if (rcx_31 == 3)
                return sub_142c153e0(arg2, r9_1) __tailcall
            
            break
        case 7
            uint32_t rcx_42 = (zx.d(*r9_1) << 8) + zx.d(r9_1[1])
            
            if (rcx_42 == 1)
                return sub_142c15080(arg2, r9_1) __tailcall
            
            if (rcx_42 == 2)
                return sub_142c15150(arg2, r9_1) __tailcall
            
            if (rcx_42 == 3)
                return sub_142c151d0(arg2, r9_1) __tailcall
            
            break
        case 8
            if ((zx.d(*r9_1) << 8) + zx.d(r9_1[1]) != 1)
                break
            
            uint32_t r10_18 = (zx.d(r9_1[2]) << 8) + zx.d(r9_1[3])
            uint32_t r8_24 =
                (zx.d(r9_1[5]) << 0x10) + (zx.d(r9_1[6]) << 8) + (zx.d(r9_1[4]) << 0x18)
            uint32_t rax_31 = zx.d(r9_1[7])
            
            if (r8_24 != neg.d(rax_31))
                arg3 = r10_18
                arg1 = &r9_1[zx.q(r8_24 + rax_31)]
                continue
            else
                arg1 = &data_14369a5d0
                arg3 = r10_18
                continue

return 0
