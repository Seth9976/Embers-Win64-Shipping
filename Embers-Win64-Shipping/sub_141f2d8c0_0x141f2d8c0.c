// 函数: sub_141f2d8c0
// 地址: 0x141f2d8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint128_t zmm6 = sub_141eb5100(arg1, arg2)
int64_t* rcx = &arg1[0xd]
*arg1 = &data_14309b408
arg1[0xb] = 0
arg1[0xc] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_2 = rcx[2]

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
rcx[1] = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
int32_t rax_3 = *(arg2 + 0xd8)
int64_t r15 = *(arg2 + 0xa0)
int64_t rdi = sx.q(rax_3 - 1)

if (rax_3 - 1 s>= 0)
    uint128_t var_38_1 = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_58_1 = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    int64_t temp1_1
    
    do
        void* rbx_1 = *(*(arg2 + 0xd0) + (rdi << 3))
        
        if (rbx_1 != 0 && *(rbx_1 + 0xa0) == r15 && sub_141ee7380(rbx_1) == 0
                && ((*(rbx_1 + 8) u>> 0x12).b & 1) == 0)
            int32_t rax_9 = *(rbx_1 + 0x13c)
            *(rbx_1 + 0x134)
            *(rbx_1 + 0x11c)
            int32_t rax_10 = *(rbx_1 + 0x124)
            int64_t var_c4 = *(rbx_1 + 0x128)
            int32_t var_bc_1 = *(rbx_1 + 0x130)
            float var_88[0x4]
            zmm6, zmm8 = sub_140ade170(&var_c4, &var_88)
            zmm9 = var_88
            uint128_t zmm2_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, rax_10), _mm_unpacklo_ps(zmm2_1, 0).q)
            uint128_t zmm0_2 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, rax_9), _mm_unpacklo_ps(zmm0_2, 0).q)
            int32_t var_a0
            sub_141eb8fd0(&arg1[0xb], &var_a0)
            uint32_t rcx_5 = (rbx_1 u>> 4).d
            int32_t rdx_3 = (0x9e3779b9 - rcx_5) ^ rcx_5 << 8
            int64_t* var_98
            *var_98 = rbx_1
            *(var_98 + 0x10) = zmm9
            int32_t r8_3 = neg.d(rcx_5 + rdx_3) ^ rdx_3 u>> 0xd
            int32_t rcx_8 = (rcx_5 - r8_3 - rdx_3) ^ r8_3 u>> 0xc
            int32_t rdx_6 = (rdx_3 - rcx_8 - r8_3) ^ rcx_8 << 0x10
            int32_t r8_6 = (r8_3 - rcx_8 - rdx_6) ^ rdx_6 u>> 5
            int32_t rcx_11 = (rcx_8 - r8_6 - rdx_6) ^ r8_6 u>> 3
            int32_t rdx_9 = (rdx_6 - rcx_11 - r8_6) ^ rcx_11 << 0xa
            *(var_98 + 0x20) = zmm7
            *(var_98 + 0x30) = zmm6
            var_98[8].d = 0xffffffff
            void var_c8
            sub_141ec1810(&arg1[0xb], &var_c8, (r8_6 - rcx_11 - rdx_9) ^ rdx_9 u>> 0xf, var_98, 
                var_a0, nullptr)
        
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
