// 函数: sub_142c35e30
// 地址: 0x142c35e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 8)

if (zx.w(*(arg3 + 2)) * 0x100 + zx.w(*(arg3 + 3)) s< 0)
    int32_t rax_1 = *(arg1 + 0x30)
    
    if (rax_1 != 0 && *(arg1 + ((zx.q(rax_1 - 1) & 0x3f) << 2) + 0x34) == *(rbx + 0x64))
        *(arg1 + 0x30) = rax_1 - 1
    
    *(arg1 + ((zx.q(*(arg1 + 0x30)) & 0x3f) << 2) + 0x34) = *(rbx + 0x64)
    *(arg1 + 0x30) += 1

uint32_t result = zx.d(*(arg3 + 3))

if ((((zx.w(*(arg3 + 2)) * 0x100 + result.w) u>> 0xd).b & 1) != 0)
    result = *(rbx + 0x64)
    int32_t j = *(arg1 + 0x30)
    uint32_t result_1 = result
    
    if (j != 0)
        result = *(rbx + 0x60)
        
        if (*(rbx + 0x5c) u< result)
            int64_t rdx_3 = *(arg1 + 0x18)
            int128_t* const r14_1 = &data_14369a5d0
            int128_t* rax_5 = rdx_3 + (((zx.q(*(arg3 + 4)) << 8) + zx.q(*(arg3 + 5))) << 2)
            
            if (rax_5 u>= rdx_3)
                r14_1 = rax_5
            
            uint64_t r13_1 = 0
            void* r14_2 = r14_1 + 2
            uint32_t i
            
            do
                if (j == 0)
                    *(arg1 + 0x30) = 0
                    break
                
                j -= 1
                uint64_t rax_7 = zx.q(j) & 0x3f
                sub_142bf54e0(rbx, *(arg1 + (rax_7 << 2) + 0x34))
                
                if (sub_142bf7510(*(arg1 + 8) + 0x20, r14_2 - 2, 4) == 0)
                    break
                
                int128_t* const rbp_1 = &data_14369a5d0
                int64_t r8 = *(arg1 + 0x20)
                i = (zx.d(*(r14_2 - 1)) << 0x10) + (zx.d(*(r14_2 - 2)) << 0x18)
                    + (zx.d(*r14_2) << 8) + zx.d(*(r14_2 + 1))
                int32_t rcx_11 = i & 0x3fffffff
                int32_t rdx_7 = rcx_11 | 0xc0000000
                
                if ((rcx_11 & 0x20000000) == 0)
                    rdx_7 = rcx_11
                
                int128_t* rcx_13 =
                    r8 + (zx.q(rdx_7 + *(*(rbx + 0x70) + zx.q(*(rbx + 0x5c)) * 0x14)) << 1)
                
                if (rcx_13 u>= r8)
                    rbp_1 = rcx_13
                
                if (sub_142bf7510(*(arg1 + 8) + 0x20, rbp_1, 2) == 0)
                    break
                
                r13_1 = zx.q(r13_1.d + zx.d(*(rbp_1 + 1)) + (zx.d(*rbp_1) << 8))
                
                if ((i & 0xc0000000) != 0)
                    int64_t rdx_10 = *(arg1 + 0x28)
                    int128_t* const rbp_2 = &data_14369a5d0
                    int128_t* rcx_18 = rdx_10 + (r13_1 << 1)
                    
                    if (rcx_18 u>= rdx_10)
                        rbp_2 = rcx_18
                    
                    if (sub_142bf7510(*(arg1 + 8) + 0x20, rbp_2, 2) == 0)
                        break
                    
                    sub_142c22d20(rbx, (zx.d(*rbp_2) << 8) + zx.d(*(rbp_2 + 1)))
                    int32_t rcx_23 = *(arg1 + 0x30) - 1
                    int32_t rbp_3 = *(arg1 + ((zx.q(rcx_23) & 0x3f) << 2) + 0x34)
                    
                    if (rcx_23 u> j)
                        do
                            *(arg1 + 0x30) -= 1
                            sub_142bf54e0(rbx, 
                                *(arg1 + ((zx.q(*(arg1 + 0x30)) & 0x3f) << 2) + 0x34))
                            
                            if (*(rbx + 0x78) == *(rbx + 0x70) && *(rbx + 0x64) == *(rbx + 0x5c))
                                goto label_142c360b7
                            
                            if (sub_142bf50b0(rbx, 1, 1) != 0)
                                int64_t rdx_16 = *(rbx + 0x70)
                                uint64_t r9_2 = zx.q(*(rbx + 0x5c)) * 5
                                uint64_t rcx_26 = zx.q(*(rbx + 0x64)) * 5
                                int64_t rax_31 = *(rbx + 0x78)
                                *(rax_31 + (rcx_26 << 2)) = *(rdx_16 + (r9_2 << 2))
                                *(rax_31 + (rcx_26 << 2) + 0x10) = *(rdx_16 + (r9_2 << 2) + 0x10)
                            label_142c360b7:
                                *(*(rbx + 0x78) + zx.q(*(rbx + 0x64)) * 0x14) = 0xffff
                                *(rbx + 0x5c) += 1
                                *(rbx + 0x64) += 1
                        while (*(arg1 + 0x30) - 1 u> j)
                    
                    sub_142bf54e0(rbx, rbp_3 + 1)
                    sub_142bf52d0(rbx, *(arg1 + (rax_7 << 2) + 0x34), *(rbx + 0x64))
                
                r14_2 += 4
            while (i s>= 0)
            return sub_142bf54e0(rbx, result_1)

return result
