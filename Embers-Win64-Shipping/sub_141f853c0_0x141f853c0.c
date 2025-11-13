// 函数: sub_141f853c0
// 地址: 0x141f853c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int128_t zmm6
int128_t var_28 = zmm6
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
float zmm8[0x4] = arg2[3]
int32_t i = 0
float zmm9[0x4] = arg2[2]
int64_t r11 = 0
float zmm10[0x4] = arg2[1]
float zmm11[0x4] = *arg2
int32_t var_fc = 0x3f800000
float var_118[0x4]
void var_e8

do
    int32_t j = 0
    int64_t r9 = 0
    
    do
        uint64_t rdx = 0
        
        do
            if (i == 0)
                zmm6 = 0x3f800000
            else
                zmm6 = zx.o(0)
            
            float zmm3[0x4]
            
            zmm3 = j == 0 ? 0x3f800000 : 0xbf800000
            
            float zmm1[0x4]
            
            zmm1 = rdx.d == 0 ? 0x3f800000 : 0xbf800000
            
            float zmm0[0x4] = data_142d3f660
            float var_108[0x4]
            var_108[0] = zmm1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(var_108, var_108, 0xe1)
            var_118 = zmm0
            temp0_1[0] = zmm3[0]
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            int64_t rcx_1 = (r11 + ((r9 + (rdx << 1)) << 1)) * 3
            temp0_2[0] = zmm6.d
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
            float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
            float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm8)
            float temp0_8[0x4] = _mm_mul_ps(temp0_4, zmm9)
            float temp0_9[0x4] = _mm_mul_ps(temp0_6, zmm10)
            float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0), zmm11)
            float zmm2[0x4] = 0x3f800000
            float temp0_14[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_8, temp0_7), _mm_add_ps(temp0_9, temp0_11))
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xff)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
            zmm2[0] = 1f / temp0_15[0]
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
            temp0_14[0] = temp0_14[0] * zmm2[0]
            temp0_16[0] = temp0_16[0] * zmm2[0]
            temp0_17[0] = temp0_17[0] * zmm2[0]
            *(&var_e8 + (rcx_1 << 2)) = (_mm_unpacklo_ps(temp0_14, temp0_16[0].q)).q
            void var_e0
            *(&var_e0 + (rcx_1 << 2)) = temp0_17[0]
            
            if (i == 0)
                zmm6 = 0x3f800000
            else
                zmm6 = zx.o(0)
            
            zmm3 = j == 0 ? 0x3f800000 : 0xbf800000
            
            uint64_t rax_4 = zx.q((rdx + 1).d)
            
            zmm1 = rax_4.d == 0 ? 0x3f800000 : 0xbf800000
            
            zmm0 = data_142d3f660
            temp0_3[0] = zmm1[0]
            var_118 = zmm0
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
            int64_t rcx_3 = (r11 + ((r9 + (rax_4 << 1)) << 1)) * 3
            temp0_19[0] = zmm3[0]
            rdx = zx.q(rdx.d + 2)
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
            temp0_20[0] = zmm6.d
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
            var_108 = temp0_21
            float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xff)
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
            float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm8)
            float temp0_26[0x4] = _mm_mul_ps(temp0_22, zmm9)
            float temp0_27[0x4] = _mm_mul_ps(temp0_24, zmm10)
            float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0), zmm11)
            zmm2 = 0x3f800000
            float temp0_32[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_26, temp0_25), _mm_add_ps(temp0_27, temp0_29))
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xff)
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x55)
            zmm2[0] = 1f / temp0_33[0]
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xaa)
            temp0_32[0] = temp0_32[0] * zmm2[0]
            temp0_34[0] = temp0_34[0] * zmm2[0]
            temp0_35[0] = temp0_35[0] * zmm2[0]
            *(&var_e8 + (rcx_3 << 2)) = (_mm_unpacklo_ps(temp0_32, temp0_34[0].q)).q
            *(&var_e0 + (rcx_3 << 2)) = temp0_35[0]
        while (rdx.d u< 2)
        
        j += 1
        r9 += 1
    while (j u< 2)
    
    i += 1
    r11 += 1
while (i u< 2)

sub_140acc920(&var_118, &arg_18)
void var_dc
(*(*arg1 + 0x30))(arg1, &var_e8, &var_dc, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
void var_b8
void var_ac
(*(*arg1 + 0x30))(arg1, &var_b8, &var_ac, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
void var_d0
void var_c4
(*(*arg1 + 0x30))(arg1, &var_d0, &var_c4, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
void var_a0
void var_94
(*(*arg1 + 0x30))(arg1, &var_a0, &var_94, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
(*(*arg1 + 0x30))(arg1, &var_e8, &var_d0, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
(*(*arg1 + 0x30))(arg1, &var_b8, &var_a0, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
(*(*arg1 + 0x30))(arg1, &var_dc, &var_c4, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
(*(*arg1 + 0x30))(arg1, &var_ac, &var_94, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
(*(*arg1 + 0x30))(arg1, &var_e8, &var_b8, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
(*(*arg1 + 0x30))(arg1, &var_d0, &var_a0, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
(*(*arg1 + 0x30))(arg1, &var_dc, &var_ac, &var_118, arg4, 0, 0, 0)
sub_140acc920(&var_118, &arg_18)
int64_t result = (*(*arg1 + 0x30))(arg1, &var_c4, &var_94, &var_118, arg4, 0, 0, 0)
__security_check_cookie(rax_1 ^ &var_158)
return result
