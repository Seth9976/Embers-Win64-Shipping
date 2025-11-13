// 函数: sub_142297d50
// 地址: 0x142297d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint64_t rbx = zx.q(arg5)
int32_t zmm5 = arg4

if (rbx.d != 0)
    arg4 = *(arg2 + 8)
    int128_t zmm4 = 0x3f800000
    int32_t i = 1
    int128_t zmm11
    zmm11.d = (*(arg3 + 8)).d f- arg4
    int128_t zmm14 = *arg2
    int128_t zmm9
    zmm9.d = (*arg3).d f- zmm14.d
    int128_t zmm15 = *(arg2 + 4)
    int128_t zmm1
    zmm1.d = zmm11.d f* zmm11.d
    uint128_t zmm10
    zmm10.d = (*(arg3 + 4)).d f- zmm15.d
    int32_t var_d0_1 = arg4
    arg5 = zmm14.d
    int32_t var_d8_1 = zmm15.d
    int32_t var_d4_1 = arg4
    uint128_t zmm2
    zmm2.d = zmm10.d f* zmm10.d
    int128_t zmm13
    zmm13.d = 1f / float.s(rbx)
    zmm2.d = zmm2.d f+ zmm9.d f* zmm9.d
    zmm2.d = zmm2.d f+ zmm1.d
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2.d)
    
    if (rbx.d u>= 1)
        int128_t zmm6
        int128_t var_18_1 = zmm6
        int128_t zmm7
        int128_t var_28_1 = zmm7
        int128_t zmm8
        int128_t var_38_1 = zmm8
        temp0_1[0] = temp0_1[0] f* zmm5
        zmm2 = _mm_cvtepi32_ps(zx.o(arg8))
        int32_t var_cc_1 = zmm2.d
        
        do
            zmm1.d = float.s(zx.q(i))
            int64_t rax_2 = *arg1
            zmm1.d = zmm1.d f* zmm13.d
            float zmm0 = zmm1.d f+ zmm1.d
            zmm8.d = zmm1.d f* zmm9.d
            zmm7 = zmm1
            zmm1.d = zmm1.d f* zmm11.d
            zmm7.d = zmm7.d f* zmm10.d
            zmm8.d = zmm8.d f+ zmm14.d
            zmm0 = zmm0 f- zmm4.d
            zmm1.d = zmm1.d f+ arg4
            zmm7.d = zmm7.d f+ zmm15.d
            int32_t var_b4_1 = var_d4_1
            int32_t var_c8 = zmm8.d
            int32_t var_c4_1 = zmm7.d
            zmm6.d = zmm4.d f- zmm0 * zmm0
            float var_bc = arg5
            zmm6.d = zmm6.d f* temp0_1[0]
            zmm6.d = zmm6.d f+ zmm1.d
            result = (*(rax_2 + 0x30))(arg1, &var_bc, &var_c8, arg6, 0, arg7, zmm2.d, 0, var_d8_1, 
                var_d0_1, var_c8, zmm6.d, var_d8_1.d)
            arg4 = var_d0_1
            i += 1
            zmm4 = 0x3f800000
            zmm2 = var_cc_1
            arg5 = zmm8.d
            var_d8_1 = zmm7.d
            var_d4_1 = zmm6.d
        while (i u<= rbx.d)

return result
