// 函数: sub_141c7a850
// 地址: 0x141c7a850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(zx.d(*(arg3 + 0x28)) << 8) | zx.q(*(arg3 + 0x29))
int64_t r15
r15.b = *(arg3 + 0x13) - 0xa u<= 2

if (sub_141c7c020(arg1 + 0xd8, i_2.d).b != 0)
    uint32_t rdx_5 = (zx.d(*(arg3 + 0x25)) << 8 | zx.d(*(arg3 + 0x26))) << 8 | zx.d(*(arg3 + 0x27))
    int64_t rcx_6 =
        ((zx.q(*(arg3 + 0x22)) << 8 | zx.q(*(arg3 + 0x23))) << 8 | zx.q(*(arg3 + 0x24))) + arg2
    
    if (rdx_5 != 0)
        int32_t r13 = 0
        int64_t var_a8 = zx.q(rdx_5) + rcx_6
        int64_t var_b8 = rcx_6
        int64_t var_b0 = rcx_6
        int32_t rbx_1 = 0
        uint32_t var_a0 = rdx_5
        int64_t var_9c = 0
        int32_t var_88 = 0
        int64_t var_80
        __builtin_memset(&var_80, 0, 0x11)
        int64_t var_68 = 0
        int32_t var_60 = 0
        int64_t var_58
        __builtin_memset(&var_58, 0, 0x11)
        int64_t var_40 = 0
        
        while (true)
            if (sub_141c7af20(&var_b8, &(&var_88)[zx.q(rbx_1) * 0xa]) == 0)
                i_2.b = 0
                break
            
            rbx_1 += 1
            
            if (rbx_1 u>= (zx.d(r15.b) ^ 1) + 1)
                int32_t* rsi_1 = *(arg1 + 0xd8)
                int32_t j = 0
                int32_t rdi_4 = 0
                int32_t arg_8 = 0
                int32_t r12_1 = 0
                int32_t arg_18 = 0
                
                if (i_2.d != 0)
                    uint64_t i
                    
                    do
                        int32_t rcx_11
                        
                        if (r15.b == 0)
                            rdi_4 = (rdi_4 + sub_141c79cd0(&var_b8, &var_88)) & 0x1f
                            j = (j + sub_141c79cd0(&var_b8, &var_60)) & 0x3f
                            r12_1 = (r12_1 + sub_141c79cd0(&var_b8, &var_88)) & 0x1f
                            r13 = (r13 + sub_141c79cd0(&var_b8, &var_88)) & 0x1f
                            arg_8 = (sub_141c79cd0(&var_b8, &var_60) + arg_8) & 0x3f
                            int32_t rdx_15 = (sub_141c79cd0(&var_b8, &var_88) + arg_18) & 0x1f
                            arg_18 = rdx_15
                            rcx_11 =
                                ((((r13 << 6 | arg_8) << 5 | rdx_15) << 5 | rdi_4) << 6 | j) << 5
                                | r12_1
                        else
                            for (j = 0; j u< 0x20; )
                                char rcx_10 = j.b
                                j += 8
                                rdi_4 += sub_141c79cd0(&var_b8, &var_88) << rcx_10
                            
                            rdi_4 &= 0x1f1f1f1f
                            rcx_11 = rdi_4
                        
                        *rsi_1 = rcx_11
                        rsi_1 = &rsi_1[1]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                i_2.b = 1
                break
        
        int64_t i_1 = 2
        int64_t __saved_r14
        void* rbx_3 = &__saved_r14:4
        
        do
            void* rdi_6 = *(rbx_3 - 0x1c)
            rbx_3 -= 0x28
            i_1 -= 1
            
            if (rdi_6 != 0)
                int64_t rcx_28 = *(rdi_6 + 0xa8)
                
                if (rcx_28 != 0)
                    sub_141c799d0(rcx_28 - 8)
                
                int64_t rcx_30 = *(rdi_6 + 0xb8)
                
                if (rcx_30 != 0)
                    sub_141c799d0(rcx_30 - 8)
                
                sub_141c799d0(rdi_6)
            
            int64_t rcx_33 = *(rbx_3 - 0xc)
            
            if (rcx_33 != 0)
                sub_141c799d0(rcx_33)
                *(rbx_3 - 0xc) = 0
                *(rbx_3 - 4) = 0
            
            *(rbx_3 + 4) = 0
        while (i_1 != 0)
        
        return zx.q(i_2.b)

uint64_t result
result.b = 0
return result
