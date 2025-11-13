// 函数: sub_142703550
// 地址: 0x142703550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x100)
int64_t var_118
float var_f8[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
zmm7, zmm8, zmm9 = sub_141e912d0(sub_14265a8f0(rcx, &var_f8, *(rcx + 0x30) - 1), &var_118)
int32_t arg_18 = 0
float zmm6[0x4] = zx.o(0)
int32_t arg_20 = 0
int64_t var_138
float zmm0_1[0x4]
float zmm1_1[0x4]
float zmm3_1[0x4]

if (sub_140d3e110(arg1 + 0x138) != 0 && ((*(*(arg1 + 0x100) + 0x98) u>> 2).b & 1) == 0
        && (*(arg1 + 0x1b9) & 4) != 0)
    int64_t* rcx_5 = *(arg1 + 0x140)
    float rax_7
    
    if (rcx_5 == 0)
        void* rcx_10 = *(sub_140d3c6e0(arg1 + 0x138) + 0x130)
        float var_130_2
        
        if (rcx_10 == 0)
            float rax_9 = data_143dbb200
            var_138 = data_143dbb1f8.q
            var_130_2 = rax_9
        else
            zmm1_1 = *(rcx_10 + 0x1d0)
            var_138.d = zmm1_1[0]
            float temp0_33[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_130_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            var_138:4.d = temp0_33[0]
        
        zmm0_1 = zx.o(var_138)
        rax_7 = var_130_2
    else
        float var_38_1[0x4] = zmm7
        float var_48_1[0x4] = zmm8
        float var_58_1[0x4] = zmm9
        (*(*rcx_5 + 0x38))(rcx_5, *(arg1 + 0xa0), arg1 + 0x18c, &var_138, &arg_18, &arg_20)
        void* rcx_7 = *(sub_140d3c6e0(arg1 + 0x138) + 0x130)
        
        if (rcx_7 == 0)
            zmm0_1 = data_142d3f660
        else
            zmm0_1 = *(rcx_7 + 0x1c0)
        
        int64_t* rcx_8 = *(arg1 + 0x140)
        float var_128[0x4]
        int128_t* rax_6 = (*(*rcx_8 + 0x18))(rcx_8, &var_128)
        float zmm4_1[0x4] = zmm0_1
        zmm0_1[0] = zmm0_1[0] * 2f
        int32_t var_bc_1 = 0x3f800000
        zmm6 = zmm0_1
        int32_t var_ec_1 = 0
        int32_t var_dc_1 = 0
        float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
        temp0_1[0] = temp0_1[0] * 2f
        int32_t var_cc_1 = 0
        temp0_2[0] = temp0_2[0] * 2f
        float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xff)
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        temp0_3[0] = temp0_3[0] * zmm0_1[0]
        temp0_3[0] = temp0_3[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] + temp0_2[0]
        zmm4_1[0] = zmm4_1[0] * temp0_2[0]
        temp0_2[0] = temp0_2[0] + zmm0_1[0]
        zmm6[0] = zmm6[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] + zmm0_1[0]
        temp0_3[0] = temp0_3[0] * temp0_2[0]
        zmm3_1 = *(rax_6 + 8)
        int128_t zmm14
        zmm14.d = 1f - temp0_1[0]
        float zmm13[0x4] = zmm4_1
        zmm0_1 = zmm6[0]
        zmm13[0] = zmm13[0] - temp0_3[0]
        zmm0_1[0] = zmm0_1[0] - temp0_3[0]
        temp0_2[0] = temp0_2[0] * temp0_1[0]
        temp0_3[0] = temp0_3[0] + zmm4_1[0]
        zmm4_1 = *(rax_6 + 4)
        zmm1_1 = var_138:4.d
        temp0_3[0] = temp0_3[0] + zmm6[0]
        zmm6 = *rax_6
        float arg_8 = zmm0_1[0]
        zmm0_1 = var_138.d
        float zmm12[0x4] = 0x3f800000
        int128_t zmm11
        zmm11.d = 1f - temp0_2[0]
        int32_t var_11c_1 = 0x3f800000
        float zmm5_1[0x4] = var_128
        zmm12[0] = 1f - temp0_1[0]
        zmm5_1[0] = zmm0_1[0]
        var_138 = 0
        float temp0_4[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        temp0_2[0] = temp0_2[0] - temp0_3[0]
        temp0_4[0] = zmm1_1[0]
        int32_t var_130_1 = 0
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
        temp0_3[0] = temp0_3[0] + temp0_2[0]
        int32_t var_130
        temp0_5[0] = var_130[0]
        float var_c8[0x4]
        var_c8[0] = zmm6[0]
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
        var_128 = temp0_6
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
        float temp0_8[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
        temp0_8[0] = zmm4_1[0]
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
        zmm6 = zx.o(0)
        temp0_10[0] = zmm3_1[0]
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
        float temp0_13[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_10, temp0_10, 0xc9))
        float var_d8[0x4]
        var_d8[0] = temp0_3[0]
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0)
        float temp0_15[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
        temp0_15[0] = temp0_2[0]
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
        temp0_16[0] = zmm11.d
        float temp0_18[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_16, temp0_16, 0xc9))
        float var_e8[0x4]
        var_e8[0] = zmm13[0]
        float temp0_19[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
        temp0_19[0] = zmm12[0]
        float temp0_20[0x4] = _mm_add_ps(temp0_13, temp0_18)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
        temp0_21[0] = temp0_3[0]
        float temp0_23[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_21, temp0_21, 0xc9))
        zmm0_1 = var_f8
        zmm0_1[0] = zmm14.d
        float temp0_24[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
        temp0_24[0] = temp0_3[0]
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
        temp0_25[0] = arg_8[0]
        float temp0_29[0x4] = _mm_add_ps(temp0_20, 
            _mm_add_ps(temp0_23, _mm_mul_ps(temp0_14, _mm_shuffle_ps(temp0_25, temp0_25, 0xc9))))
        rax_7 = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)[0]
        zmm0_1 = _mm_unpacklo_ps(temp0_29, _mm_shuffle_ps(temp0_29, temp0_29, 0x55)[0].q)
    
    float var_110_1 = rax_7
    var_118 = zmm0_1.q

int32_t rax_10 = *(arg1 + 0x1ac)
void* rdx_4 = *(arg1 + 0x100)
uint8_t rax_12 = (*(rdx_4 + 0x98) u>> 2).b
var_138 = *(arg1 + 0x1a4)
float zmm2_1[0x4]

if ((rax_12 & 1) == 0)
    zmm2_1 = *(arg1 + 0x114)
else
    int64_t* rcx_13
    
    if (*(rdx_4 + 0x30) s<= 0)
        rcx_13 = &data_143b58088
    else
        rcx_13 = (sx.q(*(rdx_4 + 0x30) - 1) << 5) + *(rdx_4 + 0x28)
    
    zmm1_1 = zx.o(*rcx_13)
    zmm2_1 = var_138.d
    zmm0_1 = zmm1_1
    zmm3_1 = var_138:4.d
    zmm2_1[0] = zmm2_1[0] - zmm1_1[0]
    int32_t rax_15 = rcx_13[1].d
    zmm1_1 = rax_10
    float temp0_35[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    zmm3_1[0] = zmm3_1[0] - temp0_35[0]
    zmm1_1[0] = zmm1_1[0] f- rax_15
    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
    zmm3_1[0] = zmm3_1[0] + zmm2_1[0]
    zmm2_1 = *(arg1 + 0x114)
    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
    float temp0_36[0x4] = _mm_sqrt_ss(0, zmm3_1[0])
    zmm2_1[0] = zmm2_1[0] - temp0_36[0]
    zmm2_1 = __maxss_xmmss_memss(zmm2_1[0], *(arg1 + 0x110))

char rax_16 = *(arg1 + 0x1b9)

if ((rax_16 & 1) == 0)
    zmm0_1 = zx.o(0)
else
    zmm0_1 = *(arg1 + 0x11c)

if ((rax_16 & 2) != 0)
    zmm6 = arg_18

int32_t* var_150
var_150.d = zmm2_1[0]
return sub_142703ae0(arg1, &var_118, zmm6, arg_20, arg2, var_150.d, zmm0_1[0])
