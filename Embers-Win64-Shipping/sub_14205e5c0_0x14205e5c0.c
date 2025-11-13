// 函数: sub_14205e5c0
// 地址: 0x14205e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
int128_t zmm6
int128_t zmm7
int128_t zmm8
zmm6, zmm7, zmm8 = sub_142058770(arg1, arg2, 0, arg3)
void var_68
int32_t result = sub_1423633d0(*(arg1 + 0x440), &var_68)
int32_t rbx_1 = arg3[1].d
int32_t rbx_2 = rbx_1 - 1

if (rbx_1 - 1 s>= 0)
    int128_t var_28_1 = zmm6
    int32_t var_54
    zmm6 = var_54
    int128_t var_38_1 = zmm7
    int32_t var_58
    zmm7 = var_58
    int128_t var_48_1 = zmm8
    int32_t var_5c
    zmm8 = var_5c
    int64_t rbp_2 = sx.q(rbx_2) * 0x30
    result = rbx_2 + 1
    int64_t r15_1 = rbp_2
    int64_t r14_2 = sx.q(result) * 0x30
    int32_t temp2_1
    
    do
        int64_t r9_1 = *arg3
        float zmm0_1[0x4] = *(r9_1 + rbp_2 + 0x10)
        float zmm1_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
        float zmm3_1 = zmm0_1[0]
        float zmm2_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
        float zmm4_1 = zmm1_1[0]
        zmm0_1[0] = zmm0_1[0] f+ zmm8.d
        float zmm5_1 = zmm2_1[0] f+ zmm6.d
        zmm1_1[0] = zmm1_1[0] f- zmm7.d
        zmm2_1[0] = zmm2_1[0] f- zmm6.d
        
        if (zmm0_1[0] f< *rdi || zmm3_1 f- zmm8.d f> rdi[3] || zmm4_1 f+ zmm7.d f< rdi[1]
                || zmm1_1[0] f> rdi[4] || zmm5_1 f< rdi[2] || not(zmm2_1[0] f<= rdi[5]))
            int32_t rcx_2 = arg3[1].d
            int32_t rax_2 = rcx_2 - rbx_2
            
            if (rax_2 != 1)
                memmove(r15_1 + r9_1, r14_2 + r9_1, (rax_2 - 1) * 0x30)
                rcx_2 = arg3[1].d
            
            arg3[1].d = rcx_2 - 1
            result = sub_1407c4120(arg3)
            zmm6 = var_54
            zmm7 = var_58
            zmm8 = var_5c
        
        r14_2 -= 0x30
        r15_1 -= 0x30
        rbp_2 -= 0x30
        temp2_1 = rbx_2
        rbx_2 -= 1
    while (temp2_1 - 1 s>= 0)

return result
