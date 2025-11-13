// 函数: sub_141fb61b0
// 地址: 0x141fb61b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2 != 0 && sub_141fba690(arg2) != 0)
    if (arg2[7].d == 1)
        sub_141fb6350(arg2, arg3, 0, 0x80, arg4, arg1)
        return arg1
    
    int32_t rdx_1 = arg1[1].d
    int32_t rax_3
    rax_3.b = rdx_1 s<= 0
    int32_t rsi_1 = rdx_1 - 1
    
    if (rdx_1 s<= 0)
        rsi_1 = 0
    
    int32_t rax_5 = rax_3 + 1 + rdx_1
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    int64_t rcx_3 = sx.q(rsi_1)
    int32_t i = 0
    *(*arg1 + (rcx_3 << 1)) = 0x28
    *(*arg1 + (rcx_3 << 1) + 2) = 0
    
    if (arg2[7].d s> 0)
        do
            sub_141fb6350(arg2, arg3, i, 0x82, arg4, arg1)
            i += 1
            
            if (i s>= arg2[7].d)
                break
            
            int32_t rdx_3 = arg1[1].d
            int32_t rax_9
            rax_9.b = rdx_3 s<= 0
            int32_t rbp_1 = rdx_3 - 1
            
            if (rdx_3 s<= 0)
                rbp_1 = 0
            
            int32_t rax_11 = rax_9 + 1 + rdx_3
            arg1[1].d = rax_11
            
            if (rax_11 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            int64_t rcx_6 = sx.q(rbp_1)
            *(*arg1 + (rcx_6 << 1)) = 0x2c
            *(*arg1 + (rcx_6 << 1) + 2) = 0
        while (i s< arg2[7].d)
    
    int32_t rdx_4 = arg1[1].d
    int32_t rax_15
    rax_15.b = rdx_4 s<= 0
    int32_t rdi_1 = rdx_4 - 1
    
    if (rdx_4 s<= 0)
        rdi_1 = 0
    
    int32_t rax_17 = rax_15 + 1 + rdx_4
    arg1[1].d = rax_17
    
    if (rax_17 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    int64_t rcx_8 = sx.q(rdi_1)
    *(*arg1 + (rcx_8 << 1)) = 0x29
    *(*arg1 + (rcx_8 << 1) + 2) = 0

return arg1
