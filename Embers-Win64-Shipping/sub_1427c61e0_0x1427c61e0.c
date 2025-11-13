// 函数: sub_1427c61e0
// 地址: 0x1427c61e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u>= 4)
    uint32_t r10_3 = (zx.d(arg1[2]) << 0x10) + (zx.d(arg1[1]) << 8)
    uint32_t rax_3 = zx.d(*arg1)
    uint32_t r10_4 = r10_3 + rax_3
    int32_t r9_1
    
    if (r10_3 != neg.d(rax_3))
        r9_1 = 4
    label_1427c6255:
        
        if (r9_1 + r10_4 u<= arg2)
            if (arg1[3] != 0xd)
                *arg3 = 1
                return 0
            
            *arg3 = 0
            
            if (r9_1 u>= r10_4)
                return 0
            
            while (true)
                int32_t r8_1 = arg2 - r9_1
                char* rdx_1 = &arg1[zx.q(r9_1)]
                
                if (r8_1 u< 4)
                    return 3
                
                uint32_t rax_12 = (zx.d(rdx_1[2]) << 0x10) + (zx.d(rdx_1[1]) << 8)
                uint32_t rcx_2 = zx.d(*rdx_1)
                uint32_t rax_13 = rax_12 + rcx_2
                int32_t rdx_2
                
                if (rax_12 != neg.d(rcx_2))
                    rdx_2 = 4
                else
                    if (r8_1 u< 8)
                        return 3
                    
                    rax_13 = (zx.d(rdx_1[7]) << 0x18) + (zx.d(rdx_1[6]) << 0x10)
                        + (zx.d(rdx_1[5]) << 8) + zx.d(rdx_1[4])
                    rdx_2 = 8
                
                if (rdx_2 + rax_13 u> r8_1)
                    return 3
                
                *arg3 += 1
                r9_1 += rdx_2 + rax_13
                
                if (r9_1 u>= r10_4)
                    return 0
    else if (arg2 u>= 8)
        r9_1 = 8
        r10_4 =
            (zx.d(arg1[7]) << 0x18) + (zx.d(arg1[6]) << 0x10) + (zx.d(arg1[5]) << 8) + zx.d(arg1[4])
        goto label_1427c6255

return 3
