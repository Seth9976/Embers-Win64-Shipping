// 函数: sub_1415e3610
// 地址: 0x1415e3610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
*arg1 = 0x3f800000
void* rdi = arg2
arg1[1].d = 0
arg1[3].d = 0x7f7fffff
float var_88[0x3][0x4]
float (* rax_3)[0x4] = sub_140ad7d70(arg3, &var_88, arg5)
char rcx_1 = *(rdi + 8)
void* rdx_1 = rdi
float zmm2[0x4] = *rax_3

if (rcx_1 != 0x81)
    rdx_1 = nullptr

float zmm7[0x4] = rax_3[1]
int128_t zmm0 = rax_3[2]
int32_t var_218 = 0x7f7fffff
float var_178[0x4] = zmm2
float var_168[0x4] = zmm7
int128_t var_158 = zmm0
int32_t var_210
int32_t var_20c
int32_t var_208
int32_t var_200
int32_t var_1fc
int32_t var_1f8

if (rdx_1 == 0)
    void* const rax_10 = rdi
    
    if (rcx_1 != 0x41)
        rax_10 = nullptr
    
    float rax_13
    float zmm4_3[0x4]
    
    if (rax_10 == 0)
        if (rcx_1 != 1)
            rdi = nullptr
        
        if (rdi != 0 && sub_1415d1410(arg4, rdi, &var_178, arg6, &var_210, &var_200, &var_218) != 0)
            arg1[3].d = var_218[0]
            float zmm5_4[0x4] = *arg5
            float temp0_108[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_210, var_208[0].q), 
                    _mm_unpacklo_ps(var_20c, 0)[0].q), 
                arg5[2])
            float temp0_109[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xd2)
            float temp0_110[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xc9)
            float temp0_111[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xff)
            float temp0_113[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0xc9), temp0_109)
            float temp0_116[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0xd2), temp0_110), temp0_113)
            float temp0_117[0x4] = _mm_add_ps(temp0_116, temp0_116)
            float temp0_118[0x4] = _mm_mul_ps(temp0_111, temp0_117)
            float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0xc9), temp0_109)
            float temp0_121[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0xd2)
            float temp0_122[0x4] = _mm_add_ps(temp0_118, temp0_108)
            float zmm6_4[0x4] = var_200
            float temp0_126[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_121, temp0_110), temp0_120), temp0_122), 
                arg5[1])
            float var_190_1 = _mm_shuffle_ps(temp0_126, temp0_126, 0xaa)[0]
            *(arg1 + 0xc) =
                (_mm_unpacklo_ps(temp0_126, _mm_shuffle_ps(temp0_126, temp0_126, 0x55)[0].q)).q
            float temp0_132[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_4, var_1f8[0].q), 
                _mm_unpacklo_ps(var_1fc, 0)[0].q)
            *(arg1 + 0x14) = var_190_1
            zmm5_4 = *arg5
            float temp0_133[0x4] = _mm_shuffle_ps(temp0_132, temp0_132, 0xc9)
            float temp0_134[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xd2)
            float temp0_135[0x4] = _mm_mul_ps(temp0_133, temp0_134)
            float temp0_136[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xc9)
            float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xd2), temp0_136)
            float temp0_139[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xff)
            float temp0_140[0x4] = _mm_sub_ps(temp0_138, temp0_135)
            float temp0_141[0x4] = _mm_add_ps(temp0_140, temp0_140)
            float temp0_142[0x4] = _mm_mul_ps(temp0_139, temp0_141)
            float temp0_143[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xc9)
            float temp0_144[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xd2)
            float temp0_145[0x4] = _mm_mul_ps(temp0_143, temp0_134)
            float temp0_146[0x4] = _mm_mul_ps(temp0_144, temp0_136)
            float temp0_147[0x4] = _mm_add_ps(temp0_142, temp0_132)
            zmm4_3 = _mm_add_ps(_mm_sub_ps(temp0_146, temp0_145), temp0_147)
            rax_13 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)[0]
            *arg1 = (_mm_unpacklo_ps(zmm4_3, _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)[0].q)).q
            arg1[1].d = rax_13
    else
        void* rdx_5 = *(rax_10 + 0x10)
        
        if (rdx_5 != 0
                && sub_1415d1410(arg4, rdx_5, &var_178, arg6, &var_210, &var_200, &var_218) != 0)
            arg1[3].d = var_218[0]
            float zmm5_3[0x4] = *arg5
            float temp0_62[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_210, var_208[0].q), 
                    _mm_unpacklo_ps(var_20c, 0)[0].q), 
                arg5[2])
            float temp0_63[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            float temp0_64[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xd2)
            float temp0_65[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xc9), temp0_64)
            float temp0_70[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xd2), temp0_63), temp0_67)
            float temp0_71[0x4] = _mm_add_ps(temp0_70, temp0_70)
            float temp0_72[0x4] = _mm_mul_ps(temp0_65, temp0_71)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xc9), temp0_64)
            float temp0_75[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xd2)
            float temp0_76[0x4] = _mm_add_ps(temp0_72, temp0_62)
            float zmm6_3[0x4] = var_200
            float temp0_80[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_75, temp0_63), temp0_74), temp0_76), arg5[1])
            float var_1a8_1 = _mm_shuffle_ps(temp0_80, temp0_80, 0xaa)[0]
            *(arg1 + 0xc) =
                (_mm_unpacklo_ps(temp0_80, _mm_shuffle_ps(temp0_80, temp0_80, 0x55)[0].q)).q
            float temp0_86[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_3, var_1f8[0].q), 
                _mm_unpacklo_ps(var_1fc, 0)[0].q)
            *(arg1 + 0x14) = var_1a8_1
            zmm5_3 = *arg5
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xc9)
            float temp0_88[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xd2)
            float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_88)
            float temp0_90[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xd2), temp0_90)
            float temp0_93[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
            float temp0_94[0x4] = _mm_sub_ps(temp0_92, temp0_89)
            float temp0_95[0x4] = _mm_add_ps(temp0_94, temp0_94)
            float temp0_96[0x4] = _mm_mul_ps(temp0_93, temp0_95)
            float temp0_97[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xc9)
            float temp0_98[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xd2)
            float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_88)
            float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_90)
            float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_86)
            zmm4_3 = _mm_add_ps(_mm_sub_ps(temp0_100, temp0_99), temp0_101)
            rax_13 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)[0]
            *arg1 = (_mm_unpacklo_ps(zmm4_3, _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)[0].q)).q
            arg1[1].d = rax_13
else
    float zmm4_1 = *(arg4 + 0x34)
    float zmm5_1 = *(arg4 + 0x38)
    float zmm6_1 = *(arg4 + 0x3c)
    zmm0 = data_14399f670
    zmm7[0] = zmm7[0] * zmm4_1
    zmm4_1 = zmm4_1 f* *(rdx_1 + 0x28)
    float var_148_1[0x4] = zmm2
    float var_138_1[0x4] = zmm2
    float var_b8[0x4] = zmm2
    float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    temp0_1[0] = temp0_1[0] * zmm5_1
    zmm5_1 = zmm5_1 f* *(rdx_1 + 0x2c)
    float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, 0)
    float var_128_1[0x4] = zmm7
    float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    temp0_3[0] = temp0_3[0] * zmm6_1
    zmm6_1 = zmm6_1 f* *(rdx_1 + 0x30)
    void* rdx_2 = *(rdx_1 + 0x10)
    float var_a8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, temp0_3[0].q), temp0_2[0].q)
    float var_98_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    float var_1f0 = zmm4_1
    float var_1ec_1 = zmm5_1
    float var_1e8_1 = zmm6_1
    void** var_118
    sub_141703630(&var_118, rdx_2, &var_1f0, zx.o(0))
    uint128_t zmm3_2
    zmm3_2.d = arg6.d f+ *(arg4 + 0x40)
    void* rcx_3 = *(arg4 + 0x10)
    int32_t var_1d0_1 = *(arg4 + 0x30)
    int64_t var_1d8
    int64_t* var_220_1 = &var_1d8
    int32_t* var_228_1 = &var_218
    int32_t* var_230_1 = &var_200
    int32_t* var_238_1 = &var_210
    var_1d8 = *(arg4 + 0x28)
    char rax_5 =
        sub_1417afe90(rcx_3, &var_118, &var_b8, zmm3_2, var_238_1, var_230_1, var_228_1, var_220_1)
    var_118 = &data_142fc4df8
    int64_t* var_f8
    
    if (var_f8 != 0)
        var_f8[1].d -= 1
        
        if (var_f8[1].d == 1)
            (**var_f8)(var_f8)
            int32_t rsi_1 = *(var_f8 + 0xc)
            *(var_f8 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_f8 + 8))(var_f8, zx.q(rsi_1))
    
    if (rax_5 != 0)
        float zmm6_2[0x4] = var_210
        arg1[3].d = var_218[0]
        float zmm5_2[0x4] = *arg5
        float temp0_11[0x4] = _mm_unpacklo_ps(var_20c, 0)
        float temp0_14[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_2, var_208[0].q), temp0_11[0].q), arg5[2])
        float temp0_15[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
        float temp0_16[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
        float temp0_17[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
        float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_16)
        float temp0_22[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xd2), temp0_15), temp0_19)
        float temp0_23[0x4] = _mm_add_ps(temp0_22, temp0_22)
        float temp0_24[0x4] = _mm_mul_ps(temp0_17, temp0_23)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xd2)
        float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xc9), temp0_16)
        float temp0_28[0x4] = _mm_add_ps(temp0_24, temp0_14)
        zmm6_2 = var_200
        float temp0_32[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_25, temp0_15), temp0_27), temp0_28), arg5[1])
        float var_1c0_1 = _mm_shuffle_ps(temp0_32, temp0_32, 0xaa)[0]
        *(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_32, _mm_shuffle_ps(temp0_32, temp0_32, 0x55)[0].q)).q
        float temp0_36[0x4] = _mm_unpacklo_ps(var_1fc, 0)
        float temp0_38[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_2, var_1f8[0].q), temp0_36[0].q)
        *(arg1 + 0x14) = var_1c0_1
        zmm5_2 = *arg5
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc9)
        float temp0_40[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
        float temp0_41[0x4] = _mm_mul_ps(temp0_39, temp0_40)
        float temp0_42[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
        float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0xd2), temp0_42)
        float temp0_45[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
        float temp0_46[0x4] = _mm_sub_ps(temp0_44, temp0_41)
        float temp0_47[0x4] = _mm_add_ps(temp0_46, temp0_46)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, temp0_47)
        float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc9), temp0_40)
        float temp0_51[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xd2)
        float temp0_52[0x4] = _mm_add_ps(temp0_48, temp0_38)
        float temp0_55[0x4] =
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_51, temp0_42), temp0_50), temp0_52)
        float var_1b4_1 = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)[0]
        *arg1 = (_mm_unpacklo_ps(temp0_55, _mm_shuffle_ps(temp0_55, temp0_55, 0x55)[0].q)).q
        arg1[1].d = var_1b4_1
__security_check_cookie(rax_1 ^ &var_258)
return arg1
