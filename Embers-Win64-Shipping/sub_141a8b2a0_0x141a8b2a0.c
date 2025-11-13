// 函数: sub_141a8b2a0
// 地址: 0x141a8b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg3[0xf]
int64_t rcx = *arg3
int64_t r14 = 0
int64_t zmm1 = arg2[1].q
int64_t r9 = *(arg2 + 0xa8)
int64_t r12 = arg1[2]
int64_t arg_10 = rcx
int64_t result_1 = result
int128_t var_e8 = *arg2
int64_t var_d8 = zmm1
int64_t arg_18 = r9

if (r12 s> 0)
    int64_t r13_1 = var_e8.q
    
    do
        int64_t rdx = arg1[0xf]
        uint64_t i_1 = arg1[1]
        uint64_t i = i_1
        int64_t var_f8_1 = r9
        int64_t var_120_1 = rdx
        int32_t zmm2 = *(rcx + ((result * r14) << 2))
        int128_t var_d0_1 = *arg1
        int64_t var_c0_1 = arg1[2]
        int128_t var_b8_1 = *(arg1 + 0x18)
        var_e8:8.q = i_1
        int128_t zmm0 = *(arg1 + 0x30)
        int64_t r8 = *arg1 + ((rdx * r14) << 2)
        int64_t var_a8_1 = arg1[5]
        zmm1 = arg1[8]
        int64_t var_80_1 = arg1[0xa]
        int64_t var_78_1 = arg1[0xb]
        int64_t var_70_1 = arg1[0xc]
        int64_t var_68_1 = arg1[0xd]
        int64_t var_60_1 = arg1[0xe]
        int64_t var_130
        int64_t* var_150 = &var_130
        void var_118
        void* var_148_1 = &var_118
        void arg_8
        void* var_140_1 = &arg_8
        int128_t* var_138_1 = &var_e8
        var_e8.q = r8
        int64_t var_90_1 = zmm1
        int64_t var_58_1 = rdx
        int64_t var_50_1 = 0
        int64_t var_48_1 = r14
        int64_t var_40_1 = rdx
        var_130 = r8
        int128_t var_a0_1 = zmm0
        
        if ((r8.b & 3) == 0)
            uint64_t i_2 = zx.q((neg.q(r8 u>> 2)).d) & 3
            
            if (i_2 s< i_1)
                i = i_2
        
        uint64_t rax_8 = i_1 - i
        
        if (i_1 - i s< 0)
            rax_8 += 3
        
        int64_t rdi_1 = i + (rax_8 s>> 2 << 2)
        sub_141a8b5f0(&var_150, 0, i)
        
        for (; i s< rdi_1; i += 4)
            float zmm0_1[0x4] = zmm2
            int64_t rcx_4 = var_130
            zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
            float zmm1_1[0x4] = _mm_mul_ps(*(r13_1 + (i << 2)), zmm0_1)
            *(rcx_4 + (i << 2)) = _mm_sub_ps(*(rcx_4 + (i << 2)), zmm1_1)
        
        sub_141a8b5f0(&var_150, rdi_1, i_1)
        rcx = arg_10
        r14 += 1
        r9 = arg_18
        result = result_1
    while (r14 s< r12)

return result
