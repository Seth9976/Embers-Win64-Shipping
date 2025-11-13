// 函数: sub_142065f00
// 地址: 0x142065f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (arg3 s> 0)
    char rcx = arg1[0xbc].b | 2
    rax.b = rcx << 2
    rax.b |= rcx
    rax.b ^= rcx
    rax.b &= 4
    rax.b ^= rcx
    arg1[0xbc].b = rax.b

if (arg3 s> 0)
    int64_t i = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg2 + (i << 2)))
        (*(*arg1 + 0x968))(arg1, zx.q(rdi_1.d))
        
        if (rdi_1.d s>= 0)
            int32_t r9_1 = arg1[0x9b].d
            
            if (rdi_1.d s< r9_1)
                int64_t rsi_1 = rdi_1 << 2
                int32_t rdx_1 = *(rsi_1 + arg1[0x9a])
                
                if (rdx_1 != 0xffffffff)
                    sub_142096540(&arg1[0x9f], rdx_1)
                    r9_1 = arg1[0x9b].d
                
                int32_t rax_5 = r9_1 - rdi_1.d - 1
                
                if (rax_5 s>= 1)
                    rax_5 = 1
                
                if (rax_5 != 0)
                    int64_t rcx_3 = arg1[0x9a]
                    memcpy(rcx_3 + rsi_1, rcx_3 + (sx.q(r9_1 - rax_5) << 2), rax_5 << 2)
                    r9_1 = arg1[0x9b].d
                
                arg1[0x9b].d = r9_1 - 1
        
        int32_t rdx_7 = arg1[0x94].d
        int32_t rcx_7 = rdx_7 - rdi_1.d - 1
        
        if (rcx_7 s>= 1)
            rcx_7 = 1
        
        if (rcx_7 != 0)
            int64_t rax_8 = arg1[0x93]
            memcpy((rdi_1 << 6) + rax_8, (sx.q(rdx_7 - rcx_7) << 6) + rax_8, rcx_7 << 6)
            rdx_7 = arg1[0x94].d
        
        arg1[0x94].d = rdx_7 - 1
        int32_t rsi_2 = arg1[0x95].d
        int32_t r9_4 = rsi_2 * rdi_1.d
        
        if (rsi_2 != 0)
            int32_t rdx_8 = arg1[0x97].d
            rax = zx.q(rdx_8 - r9_4 - rsi_2)
            
            if (rsi_2 s<= rax.d)
                rax = zx.q(rsi_2)
            
            if (rax.d != 0)
                int64_t rcx_11 = arg1[0x96]
                memcpy(rcx_11 + (sx.q(r9_4) << 2), rcx_11 + (sx.q(rdx_8 - rax.d) << 2), rax.d << 2)
                rdx_8 = arg1[0x97].d
            
            arg1[0x97].d = rdx_8 - rsi_2
        
        if ((arg1[0x11].b & 4) != 0)
            int64_t r14_1 = rdi_1 << 3
            void* rcx_13 = *(r14_1 + arg1[0xa3])
            
            if (rcx_13 != 0)
                sub_142225820(rcx_13, 0)
                void* rcx_14 = *(r14_1 + arg1[0xa3])
                
                if (rcx_14 != 0)
                    sub_14204b6c0(rcx_14, 1)
            
            int64_t rax_15 = sx.q(arg1[0x94].d)
            
            if (rdi_1.d != rax_15.d)
                int64_t r9_6 = arg1[0xa3]
                void* rcx_19 = *(r9_6 + (rax_15 << 3))
                
                if (rcx_19 != 0)
                    sub_142225820(rcx_19, 0)
                    r9_6 = arg1[0xa3]
                
                int32_t rcx_22 = arg1[0xa4].d
                int32_t rax_23 = rcx_22 - rdi_1.d - 1
                
                if (rax_23 s>= 1)
                    rax_23 = 1
                
                if (rax_23 != 0)
                    memcpy(r14_1 + r9_6, r9_6 + (sx.q(rcx_22 - rax_23) << 3), rax_23 << 3)
                    rcx_22 = arg1[0xa4].d
                
                arg1[0xa4].d = rcx_22 - 1
                sub_1405c53d0(&arg1[0xa3])
                int32_t* r8_10 = *(r14_1 + arg1[0xa3])
                
                if (r8_10 != 0)
                    sub_142096f00(arg1, rdi_1.d, r8_10)
            else
                int32_t rcx_15 = arg1[0xa4].d
                int32_t rax_17 = rcx_15 - rdi_1.d
                
                if (rax_17 != 1)
                    int64_t r9_5 = arg1[0xa3]
                    memmove(r14_1 + r9_5, r9_5 + (sx.q((rdi_1 + 1).d) << 3), (rax_17 - 1) << 3)
                    rcx_15 = arg1[0xa4].d
                
                arg1[0xa4].d = rcx_15 - 1
                sub_1405c53d0(&arg1[0xa3])
        
        i += 1
    while (i s< sx.q(arg3))

int32_t rdx_15 = arg1[0x94].d

if (*(arg1 + 0x4a4) == rdx_15)
    return 

return sub_1405a52a0(&arg1[0x93], rdx_15) __tailcall
