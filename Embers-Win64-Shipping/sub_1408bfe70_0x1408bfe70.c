// 函数: sub_1408bfe70
// 地址: 0x1408bfe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1

if (*(arg1 + 0x278) == arg2)
    rax_1 = *(arg2 + 0x9ea0)

if (*(arg1 + 0x278) != arg2 || rax_1 != *(arg1 + 0xc8))
    *(arg1 + 0x278) = arg2
    rax_1 = sub_1408bdf00(arg1 + 0xc0, 0)
    int32_t i = 0
    
    if (*(arg2 + 0x9ea0) s> 0)
        int128_t* rsi_1 = nullptr
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int128_t zmm7
        int128_t var_48_1 = zmm7
        
        do
            int64_t rax_7 = *(arg2 + 0x9e98)
            int64_t r14_1 = sx.q(*(arg1 + 0xc8))
            char rcx_6 = *(rsi_1 + rax_7 + 4)
            zmm6 = *(rsi_1 + rax_7)
            int64_t r12_1 = *(rsi_1 + rax_7 + 0x10)
            int32_t r13_1 = *(rsi_1 + rax_7 + 0xc)
            zmm7 = *(rsi_1 + rax_7 + 8)
            int32_t rax_8 = (r14_1 + 1).d
            *(arg1 + 0xc8) = rax_8
            
            if (rax_8 s> *(arg1 + 0xcc))
                sub_1408c36a0(arg1 + 0xc0)
            
            i += 1
            int64_t* rcx_10 = r14_1 * 0x50 + *(arg1 + 0xc0)
            rsi_1 += 0x18
            int64_t var_90
            rcx_10[1] = var_90
            rax_1 = zx.d(rcx_6)
            *rcx_10 = r12_1
            __builtin_memset(&rcx_10[2], 0, 0x20)
            *(rcx_10 + 0x34) = zmm6.d
            *(rcx_10 + 0x3c) = zmm7.d
            rcx_10[6].d = r13_1
            rcx_10[7].b = rax_1.b
            rcx_10[8].b = 0
            *(rcx_10 + 0x44) = 0
        while (i s< *(arg2 + 0x9ea0))
else
    int32_t i_1 = 0
    
    if (rax_1 s> 0)
        int64_t r9 = 0
        int64_t r8 = 0
        int64_t rax_6
        
        do
            r8 += 0x50
            int64_t rdx = *(arg1 + 0xc0)
            r9 += 0x18
            i_1 += 1
            *(r8 + rdx - 0x1c) = *(r9 + *(arg2 + 0x9e98) - 0x18)
            *(r8 + rdx - 0x50) = *(r9 + *(arg2 + 0x9e98) - 8)
            *(r8 + rdx - 0x10) = 0
            *(r8 + rdx - 0xc) = 0
            *(r8 + rdx - 0x20) = *(r9 + *(arg2 + 0x9e98) - 0xc)
            *(r8 + rdx - 0x18) = *(r9 + *(arg2 + 0x9e98) - 0x14)
            rax_6 = *(arg2 + 0x9e98)
            *(r8 + rdx - 0x14) = *(r9 + rax_6 - 0x10)
        while (i_1 s< *(arg2 + 0x9ea0))
        
        return rax_6

return rax_1
