// 函数: sub_142c29af0
// 地址: 0x142c29af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 8)

if (test_bit((zx.d(*(arg3 + 2)) << 8) + zx.d(*(arg3 + 3)), 0xf))
    int32_t rax_1 = arg1[7].d
    
    if (rax_1 u>= 8)
        arg1[7].d = 0
    else
        *(arg1 + (zx.q(rax_1) << 2) + 0x18) = *(rsi + 0x5c)
        arg1[7].d += 1

uint64_t rax_3 = zx.q(*(arg3 + 3))

if ((0x3fff & (zx.w(*(arg3 + 2)) * 0x100 + rax_3.w)) != 0)
    int32_t r8 = arg1[7].d
    
    if (r8 != 0)
        int64_t rdx_5 = arg1[2]
        int128_t* const r12_1 = &data_14369a5d0
        uint64_t rax_11 = zx.q(((((zx.q(*(arg3 + 3)) + (zx.q(*(arg3 + 2)) << 8)) & 0x3fff) + arg1[1]
            - rdx_5 + 8) u>> 1).d)
        int128_t* rcx_3 = rdx_5 + (rax_11 << 1)
        
        if (rcx_3 u>= rdx_5)
            r12_1 = rcx_3
        
        if (r8 u< 0xffffffff && r8 u< 0x7fffffff)
            rax_11 = sub_142bf7510(*arg1 + 0x20, r12_1, r8 * 2)
        
        if (r8 u>= 0xffffffff || r8 u>= 0x7fffffff || rax_11.b == 0)
            arg1[7].d = 0
            return rax_11
        
        uint64_t r15
        r15.b = 0
        int32_t r13_1 = *(**arg1 + 0xb0)
        
        do
            rax_3 = zx.q(arg1[7].d)
            
            if (rax_3.d == 0)
                break
            
            uint64_t rax_13 = zx.q(rax_3.d - 1)
            arg1[7].d = rax_13.d
            int16_t rdx_8 = zx.w(*r12_1) * 0x100
            uint64_t r8_2 = zx.q(*(arg1 + (rax_13 << 2) + 0x18))
            rax_3 = zx.q(*(r12_1 + 1))
            r12_1 += 2
            int32_t rbp_1 = sx.d(rdx_8 + rax_3.w)
            
            if (r8_2.d u< *(rsi + 0x60))
                int64_t rbx_1 = *(rsi + 0x80)
                uint64_t r14_1 = r8_2 * 0x14
                r15.b = rbp_1.b & 1
                int32_t rbp_2 = rbp_1 & 0xfffffffe
                
                if (rbp_2 != 0xffff8000)
                    rax_3 = zx.q(*(rsi + 0x38)) & 0xfffffffe
                    
                    if (rax_3.d != 4)
                        if (*(arg1 + 0x3c) == 0)
                            rax_3 = *(rsi + 0x70)
                            
                            if ((*(rax_3 + r14_1 + 4) & r13_1) != 0 && *(rbx_1 + r14_1 + 0xc) == 0)
                                int32_t rax_16 = sub_142bfd700(*(*arg1 + 8), rbp_2.w)
                                *(rbx_1 + r14_1 + 4) += rax_16
                                int64_t rbx_3 = *(rsi + 0x80)
                                rax_3 = sub_142bfd700(*(*arg1 + 8), rbp_2.w)
                                *(rbx_3 + r14_1 + 0xc) += rax_3.d
                        else if (*(rbx_1 + r14_1 + 0x12) != 0 && *(rbx_1 + r14_1 + 8) == 0)
                            rax_3 = sub_142c1db90(*(*arg1 + 8), rbp_2.w)
                            *(rbx_1 + r14_1 + 8) = rax_3.d
                            *(rsi + 0x28) |= 8
                    else if (*(arg1 + 0x3c) == 0)
                        rax_3 = *(rsi + 0x70)
                        
                        if ((*(rax_3 + r14_1 + 4) & r13_1) != 0 && *(rbx_1 + r14_1 + 8) == 0)
                            int32_t rax_15 = sub_142c1db90(*(*arg1 + 8), rbp_2.w)
                            *(rbx_1 + r14_1) += rax_15
                            int64_t rbx_2 = *(rsi + 0x80)
                            rax_3 = sub_142c1db90(*(*arg1 + 8), rbp_2.w)
                            *(rbx_2 + r14_1 + 8) += rax_3.d
                    else if (*(rbx_1 + r14_1 + 0x12) != 0 && *(rbx_1 + r14_1 + 0xc) == 0)
                        rax_3 = sub_142bfd700(*(*arg1 + 8), rbp_2.w)
                        *(rbx_1 + r14_1 + 0xc) = rax_3.d
                        *(rsi + 0x28) |= 8
                else
                    *(rbx_1 + r14_1 + 0x12) = 0
                    *(rbx_1 + r14_1 + 0x10) = 0
                    *(rbx_1 + r14_1 + 8) = 0
        while (r15.b == 0)

return rax_3
