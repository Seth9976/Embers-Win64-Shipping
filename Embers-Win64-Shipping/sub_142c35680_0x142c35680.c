// 函数: sub_142c35680
// 地址: 0x142c35680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 8)
uint32_t rcx_2 = (zx.d(*(arg3 + 2)) << 8) + zx.d(*(arg3 + 3))

if (test_bit(rcx_2, 0xd))
    arg1[7].d = 0

if (test_bit(rcx_2, 0xf))
    int32_t rax_1 = arg1[7].d
    
    if (rax_1 u>= 8)
        arg1[7].d = 0
    else
        *(arg1 + (zx.q(rax_1) << 2) + 0x18) = *(rsi + 0x5c)
        arg1[7].d += 1

uint64_t result = 0xffff

if (zx.w(*(arg3 + 4)) * 0x100 + zx.w(*(arg3 + 5)) != 0xffff)
    int32_t r8 = arg1[7].d
    
    if (r8 != 0)
        void* rcx_4 = arg1[1]
        int64_t rdx_2 = arg1[2]
        int128_t* const result_2 = &data_14369a5d0
        uint32_t result_1 = (zx.d(*(rcx_4 + 9)) << 0x10) + (zx.d(*(rcx_4 + 0xa)) << 8)
            + (zx.d(*(rcx_4 + 8)) << 0x18) + zx.d(*(rcx_4 + 0xb))
        
        if (result_1 u< 1)
            result_1 = 1
        
        uint32_t result_3 = result_1
        result = rdx_2 + (((zx.q(*(arg3 + 4)) << 8) + zx.q(*(arg3 + 5))) u>> 1 << 1)
        
        if (result u>= rdx_2)
            result_2 = result
        
        if (result_1 != 0)
            result = zx.q(divu.dp.d(0:0xffffffff, result_1))
        
        if (result_1 != 0 && r8 u>= result.d)
            arg1[7].d = 0
        else
            int32_t r8_1 = r8 * result_1
            
            if (r8_1 u>= 0x7fffffff)
                arg1[7].d = 0
            else
                result = sub_142bf7510(*arg1 + 0x20, result_2, r8_1 * 2)
                
                if (result.b == 0)
                    arg1[7].d = 0
                else
                    uint64_t r15
                    r15.b = 0
                    int32_t r13_1 = *(**arg1 + 0xb0)
                    
                    do
                        result = zx.q(arg1[7].d)
                        
                        if (result.d == 0)
                            break
                        
                        uint64_t rax_11 = zx.q(result.d - 1)
                        arg1[7].d = rax_11.d
                        uint64_t r8_3 = zx.q(*(arg1 + (rax_11 << 2) + 0x18))
                        result = zx.q(result_1)
                        int32_t rbp_1 = sx.d(zx.w(*result_2) * 0x100 + zx.w(*(result_2 + 1)))
                        result_2 += result << 1
                        
                        if (r8_3.d u< *(rsi + 0x60))
                            int64_t rbx_5 = *(rsi + 0x80)
                            uint64_t r14_1 = r8_3 * 0x14
                            r15.b = rbp_1.b & 1
                            int32_t rbp_2 = rbp_1 & 0xfffffffe
                            
                            if (rbp_2 != 0xffff8000)
                                result = zx.q(*(rsi + 0x38)) & 0xfffffffe
                                
                                if (result.d != 4)
                                    if (*(arg1 + 0x3c) == 0)
                                        result = *(rsi + 0x70)
                                        
                                        if ((*(result + r14_1 + 4) & r13_1) != 0
                                                && *(r14_1 + rbx_5 + 0xc) == 0)
                                            int32_t rax_15 = sub_142bfd700(*(*arg1 + 8), rbp_2.w)
                                            *(rbx_5 + r14_1 + 4) += rax_15
                                            int64_t rbx_7 = *(rsi + 0x80)
                                            result = sub_142bfd700(*(*arg1 + 8), rbp_2.w)
                                            *(rbx_7 + r14_1 + 0xc) += result.d
                                    else if (*(r14_1 + rbx_5 + 0x12) != 0
                                            && *(r14_1 + rbx_5 + 8) == 0)
                                        result = sub_142c1db90(*(*arg1 + 8), rbp_2.w)
                                        *(r14_1 + rbx_5 + 8) = result.d
                                        *(rsi + 0x28) |= 8
                                else if (*(arg1 + 0x3c) == 0)
                                    result = *(rsi + 0x70)
                                    
                                    if ((*(result + r14_1 + 4) & r13_1) != 0
                                            && *(r14_1 + rbx_5 + 8) == 0)
                                        int32_t rax_14 = sub_142c1db90(*(*arg1 + 8), rbp_2.w)
                                        *(rbx_5 + r14_1) += rax_14
                                        int64_t rbx_6 = *(rsi + 0x80)
                                        result = sub_142c1db90(*(*arg1 + 8), rbp_2.w)
                                        *(rbx_6 + r14_1 + 8) += result.d
                                else if (*(r14_1 + rbx_5 + 0x12) != 0
                                        && *(r14_1 + rbx_5 + 0xc) == 0)
                                    result = sub_142bfd700(*(*arg1 + 8), rbp_2.w)
                                    *(r14_1 + rbx_5 + 0xc) = result.d
                                    *(rsi + 0x28) |= 8
                            else
                                *(r14_1 + rbx_5 + 0x12) = 0
                                *(r14_1 + rbx_5 + 0x10) = 0
                                *(r14_1 + rbx_5 + 8) = 0
                            
                            result_1 = result_3
                    while (r15.b == 0)

return result
