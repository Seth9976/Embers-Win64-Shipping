// 函数: sub_1426c37e0
// 地址: 0x1426c37e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rbx = arg2[1].d
int32_t rbx_1 = rbx - 1
int128_t zmm13 = arg4
int128_t zmm14 = arg3

if (rbx - 1 s>= 0)
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
    char* r15_1 = sx.q(rbx_1)
    int64_t rsi_2 = r15_1 * 0x18
    int64_t r12_2 = sx.q(rbx_1 + 1) * 0x18
    int64_t r13_1 = rsi_2
    int32_t temp2_1
    
    do
        int64_t rax_1 = *arg2
        zmm11.d = zmm13.d f+ *(rsi_2 + rax_1 + 8)
        zmm10 = *(rsi_2 + rax_1 + 4)
        zmm9 = *(rsi_2 + rax_1)
        int32_t var_1cc = zmm9.d
        int32_t var_1c8_1 = zmm10.d
        int32_t var_1c4_1 = zmm11.d
        zmm8.d = zmm14.d f+ *(rsi_2 + rax_1 + 8)
        zmm7 = *(rsi_2 + rax_1 + 4)
        zmm6 = *(rsi_2 + rax_1)
        int32_t var_1c0 = zmm6.d
        int32_t var_1bc_1 = zmm7.d
        int32_t var_1b8_1 = zmm8.d
        void var_148
        memset(&var_148, 0, 0x88)
        zmm9.d = zmm9.d f- zmm6.d
        int32_t zmm1 = *(arg1 + 0xc)
        zmm10.d = zmm10.d f- zmm7.d
        int32_t var_1b0_1 = arg1[1].d
        zmm11.d = zmm11.d f- zmm8.d
        int32_t var_1a8_1 = arg1[2].d
        int32_t var_1d8 = zmm9.d
        int32_t var_1d4_1 = zmm10.d
        int32_t var_1d0_1 = zmm11.d
        int32_t var_1ac_1 = zmm1
        int32_t var_140_1 = 0x3f800000
        int32_t var_1b4 = 1
        void var_168
        float var_158[0x4]
        float (* rax_3)[0x4] = sub_140ade170(sub_140adf3c0(&var_1d8, &var_168), &var_158)
        void* rcx_4 = *arg1
        char rax_5 = (arg1[0x11].d).b
        float var_178[0x4] = *rax_3
        int32_t rcx_5
        int32_t zmm12_1
        result, rcx_5, zmm12_1, zmm13, zmm14 = sub_141ecd380(rcx_4, &var_148, &var_1c0, &var_1cc, 
            &var_178, rax_5, &var_1b4, &arg1[3], &data_143f3a660)
        
        if (result.b != 0)
            int64_t rax_6 = *arg2
            int32_t var_130
            uint128_t zmm0_3
            zmm0_3.d = var_130.d f+ zmm12_1
            int64_t var_190_1 = 0
            int32_t var_198_1 = zmm0_3.d
            int32_t var_138
            int32_t var_134
            zmm0_3.q = (_mm_unpacklo_ps(var_138, var_134)).q
            *(rsi_2 + rax_6) = zmm0_3
            uint128_t var_1a0 = zmm0_3
            *(rsi_2 + rax_6 + 0x10) = var_190_1
            result = zx.q(result.b)
        else if (*(arg1 + 0x8c) == 1)
            rcx_5 = arg2[1].d
            int32_t rax_8 = rcx_5 - rbx_1
            
            if (rax_8 != 1)
                int64_t rcx_6 = *arg2
                memmove(rcx_6 + r13_1, r12_2 + rcx_6, (rax_8 - 1) * 0x18)
                rcx_5 = arg2[1].d
            
            arg2[1].d = rcx_5 - 1
            result = zx.q(result.b)
        
        if (rbx_1 s>= 0 && rbx_1 s< arg1[0x13].d)
            bool cond:1_1 = result.b != 0
            result = arg1[0x12]
            rcx_5.b = cond:1_1
            *(r15_1 + result) = rcx_5.b
        
        r12_2 -= 0x18
        r13_1 -= 0x18
        r15_1 -= 1
        rsi_2 -= 0x18
        temp2_1 = rbx_1
        rbx_1 -= 1
    while (temp2_1 - 1 s>= 0)

return result
