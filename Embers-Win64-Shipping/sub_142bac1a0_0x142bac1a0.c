// 函数: sub_142bac1a0
// 地址: 0x142bac1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 u< 2)
    int16_t rsi_1
    int128_t zmm0
    int128_t zmm1
    
    if ((arg1[0x43].b & 1) == 0)
        zmm0 = *(arg1 + 0x78)
        rsi_1 = *(arg1 + 0x1c4)
        zmm1 = *(arg1 + 0x88)
    else
        zmm0 = *(arg1 + 0x38)
        rsi_1 = *(arg1 + 0x1c2)
        zmm1 = *(arg1 + 0x48)
    
    if (rsi_1 u< (zmm0:8.q u>> 0x20).w)
        int64_t rbp_1 = zmm1:8.q
        uint64_t rcx = zx.q(rsi_1) << 3
        int64_t rax_3 = zmm1.q
        int32_t rax_4 = arg1[0x65](arg1, zx.q(*(rcx + rbp_1) - *(rcx + rax_3)), 
            zx.q(*(rcx + rbp_1 + 4) - *(rcx + rax_3 + 4)))
        uint32_t rax_5 = sub_142b93dd0(rax_4, sx.d(*(arg1 + 0x1ce)), arg1[0x63].d)
        uint64_t rax = sub_142b93dd0(rax_4, sx.d(arg1[0x3a].w), arg1[0x63].d)
        int16_t rcx_4 = arg1[0x40].w
        int16_t rdx_4 = 0
        int32_t r10_1 = rax.d
        int16_t r9_1
        
        if (rcx_4 != 0)
            if (rcx_4 == 1)
                rax = zx.q(*(arg1 + 0xc6))
            
            if (rcx_4 != 1 || rax.w s<= 0)
                r9_1 = 0
            else
                r9_1 = *(arg1[0x1d] + (sx.q(sx.d(rax.w) - 1) << 1)) + 1
        else
            r9_1 = *(arg1 + 0xc4)
        
        if (0 u< r9_1)
            do
                int64_t r8_5 = arg1[0x1a]
                
                if (rbp_1 != r8_5 || rsi_1 != rdx_4)
                    if (*(arg1 + 0x1ce) != 0
                            && (*(*(*arg1 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0))
                        rax = zx.q(rdx_4)
                        *(r8_5 + (rax << 3)) += rax_5
                    
                    if (arg1[0x3a].w != 0 && (*(*(*arg1 + 0x90) + 0x78) != 0x28
                            || *(arg1 + 0x373) == 0 || *(arg1 + 0x374) == 0
                            || *(arg1 + 0x375) == 0))
                        rax = arg1[0x1a]
                        uint64_t rcx_8 = zx.q(rdx_4)
                        *(rax + (rcx_8 << 3) + 4) += r10_1
                
                rdx_4 += 1
            while (rdx_4 u< r9_1)
    else if (*(arg1 + 0x315) != 0)
        arg1[3].d = 0x86
else if (*(arg1 + 0x315) != 0)
    arg1[3].d = 0x86
