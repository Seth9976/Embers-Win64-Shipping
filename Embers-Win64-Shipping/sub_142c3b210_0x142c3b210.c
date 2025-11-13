// 函数: sub_142c3b210
// 地址: 0x142c3b210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg2

if ((*(arg2 + 0x28) & 0x1000000) != 0)
    int32_t rcx = 0
    int32_t arg_20 = 0
    int32_t r11_4 = (*(arg3 + 0x20) s>> 0x1f & 0xfffffffe) + 1
    int32_t i = 0
    int32_t var_60_1 = r11_4
    int32_t i_1 = 0
    
    do
        int32_t k_4 = *(result + 0x60)
        int32_t k = k_4
        int64_t r13_1 = *(result + 0x80)
        int64_t rsi_1 = *(result + 0x70)
        int64_t var_40_1 = r13_1
        int32_t r8 = k_4 + rcx
        uint64_t r10_1 = zx.q(r8)
        int32_t var_68_1 = r8
        
        if (k_4 != 0)
            int32_t j
            
            do
                uint64_t rdx = zx.q(k - 1) * 0x14
                
                if (*(rdx + rsi_1 + 0x12) - 8 u<= 1)
                    int32_t r15_1 = 0
                    int32_t k_2 = k
                    int32_t r12_1 = 0
                    int32_t r14_1 = 0
                    int32_t rbp_1 = 0
                    int32_t k_5 = k
                    int64_t var_a8
                    int64_t var_a0
                    char const* const var_98
                    char const* const var_90
                    int32_t k_7
                    int32_t k_8
                    int32_t k_9
                    
                    if (k != 0)
                        do
                            uint64_t rdx_1 = zx.q(k - 1)
                            
                            if (*(rsi_1 + rdx_1 * 0x14 + 0x12) - 8 u> 1)
                                break
                            
                            void* rax_6 = *(arg3 + 0x40)
                            uint64_t rcx_3 = rdx_1 * 5
                            k = rdx_1.d
                            int32_t rax_7 = (*(rax_6 + 0x148))(arg3, *(arg3 + 0x48), 
                                zx.q(*(rsi_1 + (rcx_3 << 2))), *(rax_6 + 0x38), var_a8, var_a0, 
                                var_98, var_90, k_7, k_8, k_9)
                            
                            if (*(rsi_1 + (rcx_3 << 2) + 0x12) != 8)
                                r14_1 += rax_7
                                rbp_1 += 1
                            else
                                r12_1 += rax_7
                        while (k != 0)
                        
                        r13_1 = var_40_1
                        k_5 = k_2
                        i = i_1
                        r11_4 = var_60_1
                    
                    int32_t k_3 = k
                    int32_t k_6 = k
                    int32_t k_1 = k_3
                    
                    if (k != 0)
                        uint64_t r8_2
                        
                        do
                            r8_2 = zx.q(k_6 - 1)
                            uint64_t rcx_5 = r8_2 * 5
                            
                            if (*(rsi_1 + (rcx_5 << 2) + 0x12) - 8 u<= 1)
                                break
                            
                            if (((*(rsi_1 + (rcx_5 << 2) + 0x10) & 0x20) == 0
                                    || (1 & *(rsi_1 + (rcx_5 << 2) + 0xc) u>> 5) != 0) && (
                                    1 << ((*(rsi_1 + (rcx_5 << 2) + 0x10)).b & 0x1f) & 0x780fccc) == 0)
                                break
                            
                            k_6 = r8_2.d
                            r15_1 += *(r13_1 + r8_2 * 0x14)
                        while (r8_2.d != 0)
                        r11_4 = var_60_1
                        k_3 = k
                    
                    k_9 = k_5
                    k_8 = k_3
                    char const* const rax_10 = "cutting"
                    k_7 = k_6
                    k += 1
                    
                    if (i == 0)
                        rax_10 = "measuring"
                    
                    var_90 = rax_10
                    int32_t r8_3 = 0
                    var_98 = "%s stretch at (%d,%d,%d)"
                    var_a0 = 0
                    var_a8 = 0
                    int32_t r15_2 = r15_1 - r12_1
                    int32_t rcx_11 = r14_1 * r11_4
                    int32_t rax_12 = r15_2 * r11_4
                    
                    if (rax_12 s> rcx_11 && rcx_11 s> 0)
                        r8_3 = divs.dp.d(sx.q(rax_12), rcx_11) - 1
                    
                    int32_t r9_3 = r8_3 + 1
                    int32_t var_54_1 = r9_3
                    int32_t r12_2 = 0
                    
                    if ((r15_2 - r9_3 * r14_1) * r11_4 s> 0 && rbp_1 s> 0)
                        r8_3 = r9_3
                        var_54_1 = r9_3 + 1
                        int32_t rax_18 = ((r9_3 + 1) * r14_1 - r15_2) * r11_4
                        
                        if (rax_18 s> 0)
                            r12_2 = divs.dp.d(sx.q(rax_18), r9_3 * rbp_1)
                    
                    if (i != 0)
                        uint64_t k_10 = zx.q(k_2)
                        
                        if (k_10.d - k_6 u>= 2)
                            sub_142bf5c70(arg2, k_6, k_10.d)
                        
                        int32_t rbx_2 = 0
                        
                        if (k_10.d u<= k_1)
                            r10_1 = zx.q(var_68_1)
                        else
                            do
                                void* rax_23 = *(arg3 + 0x40)
                                k_10 = zx.q(k_10.d - 1)
                                uint64_t r14_2 = k_10 * 0x14
                                int32_t rax_24 = (*(rax_23 + 0x148))(arg3, *(arg3 + 0x48), 
                                    zx.q(*(r14_2 + rsi_1)), *(rax_23 + 0x38), 0, 0, 
                                    "%s stretch at (%d,%d,%d)", var_90, k_7, k_8, k_9)
                                int32_t r8_7 = var_54_1
                                r10_1 = zx.q(var_68_1)
                                
                                if (*(r14_2 + rsi_1 + 0x12) != 9)
                                    r8_7 = 1
                                
                                int32_t rdx_14 = 0
                                
                                if (r8_7 != 0)
                                    do
                                        int32_t rbx_3 = rbx_2 - rax_24
                                        rbx_2 = rbx_3 + r12_2
                                        
                                        if (rdx_14 == 0)
                                            rbx_2 = rbx_3
                                        
                                        r10_1 = zx.q(r10_1.d - 1)
                                        *(r14_2 + r13_1 + 8) = rbx_2
                                        rdx_14 += 1
                                        uint64_t rcx_21 = r10_1 * 5
                                        *(rsi_1 + (rcx_21 << 2)) = *(r14_2 + rsi_1)
                                        *(rsi_1 + (rcx_21 << 2) + 0x10) = *(r14_2 + rsi_1 + 0x10)
                                        *(r13_1 + (rcx_21 << 2)) = *(r14_2 + r13_1)
                                        *(r13_1 + (rcx_21 << 2) + 0x10) = *(r14_2 + r13_1 + 0x10)
                                    while (rdx_14 u< r8_7)
                                    
                                    var_68_1 = r10_1.d
                            while (k_10.d u> k_1)
                        
                        i = i_1
                        rcx = arg_20
                    else
                        r10_1 = zx.q(var_68_1)
                        rcx = arg_20 + r8_3 * rbp_1
                        arg_20 = rcx
                else
                    if (i == 1)
                        r10_1 = zx.q(r10_1.d - 1)
                        var_68_1 = r10_1.d
                        uint64_t rcx_1 = r10_1 * 5
                        *(rsi_1 + (rcx_1 << 2)) = *(rdx + rsi_1)
                        *(rsi_1 + (rcx_1 << 2) + 0x10) = *(rdx + rsi_1 + 0x10)
                        *(r13_1 + (rcx_1 << 2)) = *(rdx + r13_1)
                        *(r13_1 + (rcx_1 << 2) + 0x10) = *(rdx + r13_1 + 0x10)
                    
                    rcx = arg_20
                
                r11_4 = var_60_1
                j = k
                k -= 1
            while (j != 1)
            result = arg2
        
        if (i != 0)
            *(result + 0x60) = r8
        else
            int32_t rdx_15 = k_4 + rcx
            
            if (k_4 != neg.d(rcx) && rdx_15 u>= *(result + 0x68))
                result = sub_142bf4fb0(result, rdx_15)
                
                if (result.b == 0)
                    break
        
        r11_4 = var_60_1
        i += 1
        result = arg2
        rcx = arg_20
        i_1 = i
    while (i u<= 1)

return result
