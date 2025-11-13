// 函数: sub_141f748c0
// 地址: 0x141f748c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = &__return_addr

if ((*(arg1 + 0x5a8) & 2) != 0)
    int64_t rsi_1 = data_143f3b770
    int64_t rdx_1
    int64_t rbx_1
    
    if (data_143de5480 == 0)
        rbx_1 = 0
        rdx_1 = 0
    else
        result = GetCurrentThreadId()
        rbx_1 = 0
        rdx_1.b = result != data_143de5470
    
    if (*(rsi_1 + (rdx_1 << 2)) s> 0)
        int64_t r8 = *(arg1 + 0xa0)
        
        if (r8 != 0)
            int64_t rcx = data_143de5458
            int32_t rdi_1 = rcx.d + (divu.dp.q(0:rcx, 0xffffffff)).d
            int32_t arg_8
            result = sub_140865c40(&data_143a2d830, &arg_8, r8)
            int64_t rcx_1 = sx.q(arg_8)
            int64_t rbp_1
            
            if (rcx_1.d == 0xffffffff)
                rbp_1 = 0
            else
                rbp_1 = data_143a2d830 + rcx_1 * 0x18
            
            char* rbp_2 = *(rbp_1 + 8)
            
            if (rdi_1 != *(rbp_2 + 0x88))
                rcx_1.b = 1
                int64_t r12
                r12.b = 0
                int64_t r13
                r13.b = 0
                int32_t rsi_2 = 0x7fffffff
                *(rbp_2 + 0x88) = rdi_1
                int64_t* r14_1 = *(rbp_2 + 0x90)
                uint128_t zmm6 = zx.o(0)
                arg_8.b = 1
                uint64_t r15_2 = sx.q(*(rbp_2 + 0x98)) << 3 u>> 3
                
                if (r14_1 u> &r14_1[sx.q(*(rbp_2 + 0x98))])
                    r15_2 = 0
                
                if (r15_2 != 0)
                    do
                        int64_t* rdi_2 = *r14_1
                        r13.b |= *(rdi_2 + 0x5a7) u>> 5 & 1
                        zmm6 = _mm_max_ss((*(rdi_2 + 0x55c)).d, zmm6.d)
                        r12.b |= (*(*rdi_2 + 0x968))(rdi_2)
                        char rax_8 = (*(*rdi_2 + 0x970))(rdi_2)
                        rcx_1.b = arg_8.b & rax_8
                        arg_8.b = rcx_1.b
                        int32_t rax_9
                        
                        if ((rbp_2[2] & 4) == 0)
                            rax_9 = rdi_2[0xab].d
                        else
                            rax_9 = *(rdi_2 + 0x554)
                        
                        if (rsi_2 s<= rax_9)
                            rax_9 = rsi_2
                        
                        r14_1 = &r14_1[1]
                        rbx_1 += 1
                        rsi_2 = rax_9
                    while (rbx_1 != r15_2)
                
                r12.b &= arg3
                char var_68_1 = rcx_1.b
                char var_70_1 = r12.b
                return sub_141f54bb0(rbp_2, arg2, r13.b, zmm6, rsi_2.b)

return result
