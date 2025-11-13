// 函数: sub_142b3bb90
// 地址: 0x142b3bb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = arg2[2].b
int32_t arg_8 = 0
int32_t arg_10 = 0
int32_t rdi_1

if ((rcx & 0x30) == 0)
    arg1[2].b = rcx
    arg1[1] = arg2[1]
    sub_142b3a960(arg1, arg3, arg2 + 9, *arg2, &arg_10, &arg_8)
    sub_142b39f50(arg1, arg3, &arg_10, &arg_8)
    
    if ((arg1[2].b & 0x70) == 0)
        char rax_6 = *(arg1 + 9)
        
        if ((rax_6 & 1) == 0)
            if (rax_6 != 0 || *arg1 != 1)
                void* r10_2 = arg1 + 9
                int32_t r9_3 = 1
                int64_t r14_1 = sx.q(*arg1)
                uint32_t rdi_2 = 0
                int32_t rbp_1 = (r14_1 - 1).d
                
                if (rbp_1 s> 0)
                    do
                        uint32_t r8_4 = zx.d(*r10_2)
                        uint64_t rax_7 = zx.q(r9_3)
                        
                        if (r8_4 != (((r8_4 u>> r9_3.b) * *((rax_7 << 2) + 0x14366c4c8)) u>> 0x11)
                                * *((rax_7 << 2) + &data_14366c468))
                            break
                        
                        r9_3 += 1
                        
                        if (r9_3 u> 1)
                            r10_2 += 1
                            r9_3 = 1
                        
                        rdi_2 += 1
                    while (rdi_2 s< rbp_1)
                    
                    if (rdi_2 != 0)
                        if (arg3[6].b == 0)
                        label_142b3bd93:
                            
                            if (r14_1.d s<= 0x31)
                                r14_1 = zx.q(*(r14_1 + &data_14366c490))
                            
                            sub_142b3ae30(arg1 + 9, r14_1.d, rdi_2)
                            arg1[1] += rdi_2
                            *arg1 -= rdi_2
                        else
                            uint32_t rax_11 = arg3[1] - arg1[1] - *arg3 + 1
                            
                            if (rax_11 s> 0)
                                if (rdi_2 s> rax_11)
                                    rdi_2 = rax_11
                                
                                goto label_142b3bd93
            else
                arg1[1] = 0
    
    rdi_1 = arg_8
else
    rdi_1 = 0
    
    if ((rcx & 0x10) != 0)
        rdi_1 = 0x40000080
    
    if (*arg2 s> *arg3)
        arg1[2].b = rcx
        int64_t rax_1 = sx.q(*arg3)
        
        if (rax_1.d s<= 0x31)
            rax_1 = zx.q(*(rax_1 + &data_14366c490))
        
        void* rdx = arg2 + 9
        void* rcx_3 = arg1 + 9 + sx.q(rax_1.d)
        int64_t r8_1 = rcx_3 - (arg1 + 9)
        
        if (arg1 + 9 u> rcx_3)
            r8_1 = 0
        
        if (r8_1 != 0)
            void* rcx_6 = rdx - arg2 - 9
            
            do
                char rax_3 = *rdx
                rdx += 1
                *(rcx_6 + arg1 + 9) = rax_3
                rcx_6 += 1
            while (rcx_6 u< r8_1)
        
        int64_t rdx_1 = sx.q(*arg3)
        
        if (rdx_1.d s<= 0x31)
            rdx_1 = zx.q(*(rdx_1 + &data_14366c490))
        
        *arg1 = rdx_1.d
        int32_t rax_4 = *arg3
        
        if (rdx_1.d s> rax_4)
            sub_142b39360(arg1, rdx_1.d - rax_4)
        
        arg1[2].b &= 0xef
        arg1[2].b |= 0x20
        arg1[1] = 0
    else
        sub_142b3b5e0(arg1, arg2)
        arg1[2].b &= 0xef
        arg1[2].b |= 0x20
        arg1[1] = 0

if (rdi_1 != 0)
    if ((rdi_1.b & 0xdd) != 0)
        if (not(test_bit(rdi_1, 0x1e)))
            *arg1 = 1
            arg1[2].w = 0x20
        else
            rdi_1 &= 0xbfffffff
    
    sub_142b38f50(arg3, rdi_1)

return arg1
