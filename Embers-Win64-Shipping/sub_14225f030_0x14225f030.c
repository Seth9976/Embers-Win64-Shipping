// 函数: sub_14225f030
// 地址: 0x14225f030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4] = arg4
float zmm14[0x4] = arg3
void arg_8
char* result = (*(*arg1 + 0x178))(arg1, &arg_8)

if ((*result & 1) == 0)
    (*(*arg1 + 0x100))(arg1)
    void var_d8
    void* rax_3 = (*(*arg1 + 0xf0))(arg1, &var_d8)
    int64_t r8_1 = *arg1
    void var_bc
    int64_t r9_1
    result, r9_1 = (*(r8_1 + 0xa0))(arg1, &var_bc, r8_1)
    int128_t zmm9 = *(rax_3 + 0x10)
    int128_t zmm6 = *(rax_3 + 0x14)
    zmm9.d = zmm9.d f+ zmm9.d
    int128_t zmm8 = *(rax_3 + 0x18)
    zmm6.d = zmm6.d f+ zmm6.d
    arg3 = *(result + 4)
    zmm8.d = zmm8.d f+ zmm8.d
    int128_t zmm4_1 = *(result + 0xc)
    float zmm10[0x4] = *result
    float zmm5_1[0x4] = *(result + 8)
    float zmm0 = arg3[0] f* zmm6.d
    arg3[0] = arg3[0] f* zmm8.d
    zmm5_1[0] = zmm5_1[0] f* zmm8.d
    zmm5_1[0] = zmm5_1[0] f* zmm9.d
    int128_t zmm7
    zmm7.d = zmm4_1.d f* zmm4_1.d
    zmm10[0] = zmm10[0] f* zmm9.d
    zmm7.d = zmm7.d f- 0.5f
    zmm10[0] = zmm10[0] + zmm0
    arg3[0] = arg3[0] - zmm5_1[0] f* zmm6.d
    zmm10[0] = zmm10[0] + zmm5_1[0]
    arg3[0] = arg3[0] f* zmm4_1.d
    zmm10[0] = zmm10[0] * zmm10[0]
    arg3[0] = arg3[0] + zmm7.d f* zmm9.d
    zmm5_1[0] = zmm5_1[0] * zmm10[0]
    zmm0 = zmm10[0]
    zmm10[0] = zmm10[0] f* zmm6.d
    arg3[0] = arg3[0] + zmm10[0]
    arg3[0] = arg3[0] f* zmm9.d
    zmm5_1[0] = zmm5_1[0] - zmm0 f* zmm8.d
    arg3[0] = arg3[0] * zmm10[0]
    zmm10[0] = zmm10[0] - arg3[0]
    zmm0 = zmm7.d
    zmm7.d = zmm7.d f* zmm8.d
    arg3[0] = arg3[0] f+ *(result + 0x10)
    zmm5_1[0] = zmm5_1[0] f* zmm4_1.d
    zmm10[0] = zmm10[0] f* zmm4_1.d
    arg3[0] = arg3[0] f- *arg2
    zmm10[0] = zmm10[0] f+ zmm7.d
    zmm5_1[0] = zmm5_1[0] + zmm0 f* zmm6.d
    zmm10[0] = zmm10[0] + zmm5_1[0]
    zmm5_1[0] = zmm5_1[0] + arg3[0]
    zmm10[0] = zmm10[0] f+ *(result + 0x18)
    zmm5_1[0] = zmm5_1[0] f+ *(result + 0x14)
    zmm10[0] = zmm10[0] f- arg2[2]
    zmm5_1[0] = zmm5_1[0] f- arg2[1]
    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
    zmm0 = arg3[0] * arg3[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm5_1[0] = zmm5_1[0] + zmm0
    zmm5_1[0] = zmm5_1[0] + zmm10[0]
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm5_1[0])
    
    if (not(temp0_1[0] > zmm14[0]))
        float zmm1[0x4] = 0x3f800000
        
        if (not(temp0_1[0] <= 0f))
            zmm0 = 1f / temp0_1[0]
            arg3[0] = arg3[0] * zmm0
            zmm5_1[0] = zmm5_1[0] * zmm0
            zmm10[0] = zmm10[0] * zmm0
        
        if (arg5 == 1)
            temp0_1[0] = temp0_1[0] / zmm14[0]
            zmm1[0] = 1f - temp0_1[0]
            zmm1[0] = zmm1[0] * zmm13[0]
            zmm13 = zmm1
        
        int64_t rax_4 = *arg1
        arg3[0] = arg3[0] * zmm13[0]
        r9_1.b = 1
        zmm5_1[0] = zmm5_1[0] * zmm13[0]
        zmm10[0] = zmm10[0] * zmm13[0]
        float var_e8 = arg3[0]
        float var_e4_1 = zmm5_1[0]
        return (*(rax_4 + 0x148))(arg1, &var_e8, zx.q(zx.d(arg6) + 1), r9_1, var_e8, zmm10[0])

return result
