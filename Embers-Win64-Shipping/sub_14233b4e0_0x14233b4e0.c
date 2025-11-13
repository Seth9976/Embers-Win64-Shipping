// 函数: sub_14233b4e0
// 地址: 0x14233b4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x108) s> 0)
    int64_t rbp_1 = 0
    int64_t rsi_1 = 0
    
    do
        int64_t* r10_2 = *(arg1 + 0x100) + rsi_1
        int64_t* rax_1 = *r10_2
        
        if (rax_1 != 0 && i s>= 0 && i s< rax_1[1].d && *(*(*rax_1 + rbp_1) + 0xec) u> 0)
            int64_t i_1 = sx.q(i)
            void* const r8_1 = nullptr
            
            if (i s< *(arg2 + 0x578))
                r8_1 = *(arg2 + 0x570) + i_1 * 0x28
            
            sub_14233c750(r10_2, (i_1 << 4) + *(arg1 + 8), r8_1, *(arg1 + 0x68))
        
        i += 1
        rsi_1 += 0xb0
        rbp_1 += 8
    while (i s< *(arg1 + 0x108))

return sub_141997e80(arg1 + 0x70) __tailcall
