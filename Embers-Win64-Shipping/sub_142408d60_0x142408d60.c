// 函数: sub_142408d60
// 地址: 0x142408d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0x40) != 0)
    void* rax_9 = sub_142411e90(arg2, *(*(arg2 + 0x18) + (sx.q(*(arg2 + 0x20)) << 2) - 4))
    int64_t rsi_2 = 0
    void* r15_3 = sx.q(*(arg2 + 0x30)) * 0x50 + *(arg2 + 0x28)
    void*** r13_2
    
    if (*(rax_9 + 0x10) s<= 0)
    label_142408fc4:
        void*** rax_13 = j_sub_140a82f30(0x20)
        
        if (rax_13 == 0)
            r13_2 = nullptr
        else
            r13_2 =
                sub_1423fb0c0(rax_13, *(arg2 + 0x90), *(arg1 + 0x40), r15_3 - 0x50, *(arg1 + 0x18))
        
        int64_t r15_4 = sx.q(*(rax_9 + 0x10))
        int32_t rax_15 = (r15_4 + 1).d
        *(rax_9 + 0x10) = rax_15
        
        if (rax_15 s> *(rax_9 + 0x14))
            sub_1405a4d70(rax_9 + 8)
        
        *(*(rax_9 + 8) + (r15_4 << 3)) = r13_2
    else
        int64_t* rcx_13 = *(*(rax_9 + 8) + (sx.q(*(rax_9 + 0x10)) << 3) - 8)
        void*** rax_11 = (*(*rcx_13 + 0x28))(rcx_13)
        r13_2 = rax_11
        
        if (rax_11 == 0)
            goto label_142408fc4
        
        int64_t* rax_12 = rax_11[1]
        
        if (*rax_12 != *(arg1 + 0x40) || rax_12[0xa].d != *(r15_3 - 0x10))
            goto label_142408fc4
    
    result = *(arg2 + 0x68)
    int32_t rbx_2
    
    if (result == 0)
        rbx_2 = -1
    else
        rbx_2 = *(result + 0x18)
    
    int64_t i_5 = sx.q(*(arg1 + 0x58))
    int64_t* rcx_20 = &r13_2[1][0x8d]
    
    if (i_5.d s> *(rcx_20 + 0xc))
        result = sub_14241ebf0(rcx_20, i_5.d)
    
    int64_t i_3 = i_5
    
    if (i_5.d s> 0)
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int128_t zmm7
        int128_t var_48_1 = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        int128_t zmm10
        int128_t var_78_1 = zmm10
        int128_t zmm11
        int128_t var_88_1 = zmm11
        int64_t i
        
        do
            int128_t* rax_17 = *(arg1 + 0x50)
            void* rdi_2 = r13_2[1]
            zmm6 = *(rax_17 + rsi_2)
            int64_t r15_5 = sx.q(*(rdi_2 + 0x470))
            zmm7 = *(rax_17 + rsi_2 + 0x10)
            zmm8 = *(rax_17 + rsi_2 + 0x20)
            zmm9 = *(rax_17 + rsi_2 + 0x30)
            zmm10 = *(rax_17 + rsi_2 + 0x40)
            zmm11 = *(rax_17 + rsi_2 + 0x50)
            int32_t rax_18 = (r15_5 + 1).d
            *(rdi_2 + 0x470) = rax_18
            
            if (rax_18 s> *(rdi_2 + 0x474))
                sub_14241eb50(rdi_2 + 0x468)
            
            result = *(rdi_2 + 0x468)
            rsi_2 += 0x60
            int128_t* rcx_22 = r15_5 * 0x64
            *(rcx_22 + result) = zmm6
            *(rcx_22 + result + 0x10) = zmm7
            *(rcx_22 + result + 0x20) = zmm8
            *(rcx_22 + result + 0x30) = zmm9
            *(rcx_22 + result + 0x40) = zmm10
            *(rcx_22 + result + 0x50) = zmm11
            *(rcx_22 + result + 0x60) = rbx_2
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    int64_t r9_1 = *(arg1 + 0x38)
    void* r8_1 = *(arg1 + 0x48)
    int32_t var_b8 = var_b8 & 0xfffffffe
    char var_f8_1 = 1
    int32_t rax = *(arg1 + 0x14)
    int128_t var_b4
    __builtin_memset(&var_b4, 0, 0x20)
    void* rax_1 = sub_14240fbe0(arg2, 1, r8_1, r9_1, rax, &var_b8, 1)
    void* rax_2 = *(arg2 + 0x68)
    int32_t rbx_1
    
    if (rax_2 == 0)
        rbx_1 = -1
    else
        rbx_1 = *(rax_2 + 0x18)
    
    int64_t i_4 = sx.q(*(arg1 + 0x58))
    result = sub_141eab450(rax_1, (i_4 * 3).d)
    
    if (*(arg1 + 0x48) == 0)
        result = sub_141eab3b0(rax_1, i_4.d, *(arg1 + 0x38), *(arg1 + 0x14))
    
    int64_t i_2 = i_4
    
    if (i_4.d s> 0)
        int32_t* rsi_1 = nullptr
        int64_t i_1
        
        do
            void* rdi = *(arg1 + 0x50)
            int32_t var_e0_1 = 0
            int32_t var_dc_1 = 0x3f800000
            int32_t zmm1_1 = *(rsi_1 + rdi + 4)
            int32_t var_e8 = *(rsi_1 + rdi)
            int32_t var_e4_1 = zmm1_1
            int32_t rax_3 =
                sub_141e93fc0(rax_1, &var_e8, rdi + 8 + rsi_1, rdi + 0x10 + rsi_1, rbx_1)
            int32_t zmm1_2 = *(rsi_1 + rdi + 0x24)
            int32_t var_d8 = *(rsi_1 + rdi + 0x20)
            int32_t var_d4_1 = zmm1_2
            int32_t var_d0_1 = 0
            int32_t var_cc_1 = 0x3f800000
            int32_t rax_4 =
                sub_141e93fc0(rax_1, &var_d8, rdi + 0x28 + rsi_1, rdi + 0x30 + rsi_1, rbx_1)
            int32_t zmm1_3 = *(rsi_1 + rdi + 0x44)
            int32_t var_c8 = *(rsi_1 + rdi + 0x40)
            int32_t var_c4_1 = zmm1_3
            int32_t var_c0_1 = 0
            int32_t var_bc_1 = 0x3f800000
            int32_t rax_5 =
                sub_141e93fc0(rax_1, &var_c8, rdi + 0x48 + rsi_1, rdi + 0x50 + rsi_1, rbx_1)
            int64_t rcx_6 = *(arg1 + 0x48)
            int32_t rax_6 = *(arg1 + 0x14)
            int32_t var_108_4
            int32_t* var_100_1
            
            if (rcx_6 == 0)
                var_b8 &= 0xfffffffe
                var_f8_1.q = &var_b8
                var_100_1.d = rax_6
                var_108_4.q = *(arg1 + 0x38)
                int128_t var_b4_1
                __builtin_memset(&var_b4_1, 0, 0x20)
                result = sub_141e93b40(rax_1, rax_3, rax_4, rax_5, var_108_4, var_100_1.d, var_f8_1)
            else
                var_100_1.d = rax_6
                var_108_4.q = rcx_6
                result = sub_141e93ae0(rax_1, rax_3, rax_4, rax_5, var_108_4, var_100_1.d)
            rsi_1 = &rsi_1[0x18]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
