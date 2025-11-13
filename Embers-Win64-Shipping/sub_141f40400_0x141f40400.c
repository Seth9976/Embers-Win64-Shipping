// 函数: sub_141f40400
// 地址: 0x141f40400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
float zmm9[0x4]
float var_68[0x4] = zmm9
float zmm10[0x4]
float var_78[0x4] = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
uint128_t zmm12
uint128_t var_98 = zmm12
int128_t zmm13
int128_t var_a8 = zmm13
float zmm14[0x4]
float var_b8[0x4] = zmm14
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
float zmm8[0x4] = *arg3
int64_t* rcx = arg1[0x18]
int128_t* rsi = arg3
int128_t* rdi = arg2
uint64_t var_188
uint128_t zmm0
float zmm1[0x4]
uint128_t zmm2
float zmm3[0x4]
uint128_t zmm4
uint128_t zmm5
uint128_t zmm15

if (rcx == 0)
    zmm11 = data_143f3b3e0
else
    float var_158[0x4]
    arg2, arg3 = (*(*rcx + 0x408))(rcx, &var_158, arg1[0x19], 0)
    zmm4 = zx.o(*(arg1 + 0x134))
    int32_t rax_3 = *(arg1 + 0x13c)
    zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_3[0].q), _mm_unpacklo_ps(zmm2, 0).q)
    float var_138[0x4]
    zmm2 = _mm_shuffle_ps(var_138, var_138, 0xaa)
    float temp0_6[0x4] = _mm_shuffle_ps(var_138, var_138, 0x55)
    zmm5 = _mm_min_ps(zmm5, 
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_138, zmm2.q), _mm_unpacklo_ps(temp0_6, 0)[0].q))
    var_188 = zmm4.q
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm5, data_143f3b4e0, 1)) == 0)
        char rcx_4 = *(arg1 + 0x14c)
        zmm10 = var_158
        zmm11 = data_143f3b3e0
        
        if ((rcx_4 & 4) == 0)
            zmm0 = *(rdi + 8)
            zmm2 = *(rdi + 4)
            float temp0_27[0x4] = __mulps_xmmps_memps(zmm10, data_143f3b3f0)
            float var_148[0x4]
            zmm7 = __subps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(*rdi, zmm0.q), _mm_unpacklo_ps(zmm2, 0).q), var_148)
            zmm5 = _mm_rcp_ps(var_138)
            zmm4 = _mm_shuffle_ps(temp0_27, temp0_27, 0xc9)
            zmm7 = __andps_xmmxud_memxud(zmm7, data_143f3b4c0)
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xd2)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), temp0_35)
            float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd2), zmm4)
            float temp0_40[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xff)
            float temp0_41[0x4] = _mm_sub_ps(temp0_39, zmm0)
            zmm0 = _mm_mul_ps(zmm5, zmm5)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            float temp0_44[0x4] = _mm_add_ps(temp0_41, temp0_41)
            zmm0 = _mm_mul_ps(zmm0, var_138)
            float temp0_46[0x4] = _mm_mul_ps(temp0_40, temp0_44)
            zmm5 = _mm_sub_ps(zmm5, zmm0)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0xd2), zmm4)
            float temp0_50[0x4] = _mm_add_ps(temp0_46, zmm7)
            zmm0 = _mm_mul_ps(zmm5, zmm5)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            zmm0 = _mm_mul_ps(zmm0, var_138)
            float temp0_55[0x4] =
                __cmpps_xmmps_memps_immb(_mm_and_ps(var_138, zmm11), data_143f3b530, 2)
            zmm5 = _mm_sub_ps(zmm5, zmm0)
            zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0xc9), temp0_35))
            zmm9 = _mm_and_ps(temp0_55, zmm5 ^ zx.o(0)) ^ zmm5
            zmm2 = _mm_mul_ps(_mm_add_ps(zmm2, temp0_50), zmm9)
            int32_t var_180_4 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
            *rdi = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
            *(rdi + 8) = var_180_4
        
        if ((rcx_4 & 8) == 0)
            float temp0_66[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x1b)
            zmm4 = zmm10 ^ 0x80000000
            _mm_shuffle_ps(zmm4, zmm4, 0xe1)
            zmm1 = _mm_shuffle_ps(zmm10, zmm10, 0x55) ^ 0x80000000
            zmm2 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
            zmm4.d = zmm1[0]
            float temp0_70[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
            _mm_shuffle_ps(zmm4, zmm4, 0xc6)
            zmm4.d = (zmm2 ^ 0x80000000).d
            float temp0_72[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x4e)
            _mm_shuffle_ps(zmm4, zmm4, 0x27)
            zmm4.d = temp0_70[0]
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0x39)
            var_188.o = zmm4
            float temp0_76[0x4] = _mm_mul_ps(temp0_66, _mm_shuffle_ps(zmm4, zmm4, 0))
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm8)
            float temp0_79[0x4] = __mulps_xmmps_memps(temp0_76, data_143f3b3b0)
            float temp0_80[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xb1)
            float temp0_81[0x4] = _mm_add_ps(temp0_79, zmm0)
            float temp0_83[0x4] = _mm_mul_ps(temp0_72, _mm_shuffle_ps(zmm4, zmm4, 0x55))
            float temp0_85[0x4] = _mm_mul_ps(temp0_80, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
            float temp0_86[0x4] = __mulps_xmmps_memps(temp0_83, data_143f3b3a0)
            float temp0_87[0x4] = __mulps_xmmps_memps(temp0_85, data_143f3b390)
            zmm8 = _mm_add_ps(_mm_add_ps(temp0_81, temp0_86), temp0_87)
    else
        zmm3 = *rdi
        int32_t rax_5 = *(arg1 + 0x13c)
        zmm1 = zmm4
        zmm0 = zmm1
        var_188 = zmm1.q
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm4.d = _mm_shuffle_ps(var_138, var_138, 0x55).d f* zmm0.d
        zmm0 = *rsi
        zmm5.d = var_138.d f* zmm1[0]
        float temp0_15[0x4] = _mm_unpacklo_ps(zmm3, (*(rdi + 8))[0].q)
        float var_128[0x4] = zmm0
        float var_118_1[0x4] = _mm_unpacklo_ps(temp0_15, _mm_unpacklo_ps(*(rdi + 4), 0).q)
        float temp0_18[0x4] = _mm_shuffle_ps(var_138, var_138, 0xaa)
        temp0_18[0] = temp0_18[0] f* rax_5
        zmm2 = _mm_unpacklo_ps(zmm4, 0)
        float var_108_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, temp0_18[0].q), zmm2.q)
        float var_f8[0x4]
        arg2, arg3, zmm8, zmm15 = sub_140ad7d70(&var_128, &var_f8, &var_158)
        char rcx_2 = *(arg1 + 0x14c)
        
        if ((rcx_2 & 4) == 0)
            uint128_t var_e8
            int32_t var_180_3 = _mm_shuffle_ps(var_e8, var_e8, 0xaa).d
            *rdi = (_mm_unpacklo_ps(var_e8, _mm_shuffle_ps(var_e8, var_e8, 0x55)[0].q)).q
            *(rdi + 8) = var_180_3
        
        if ((rcx_2 & 8) == 0)
            zmm8 = var_f8
        
        zmm11 = data_143f3b3e0

uint64_t var_170
int32_t var_168
int32_t rcx_3

if (_mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x1a0), zmm8, 0)) != 0xf)
    zmm5 = data_143f3b3d0
    float temp0_90[0x4] = _mm_mul_ps(zmm8, zmm8)
    float temp0_92[0x4] = _mm_add_ps(temp0_90, _mm_shuffle_ps(temp0_90, temp0_90, 0x4e))
    zmm4 = _mm_add_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0x39), temp0_92)
    float temp0_95[0x4] = _mm_rsqrt_ps(zmm4)
    float temp0_96[0x4] = _mm_mul_ps(zmm4, zmm5)
    zmm2 = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_95, temp0_95), temp0_96)), 
            temp0_95), 
        temp0_95)
    zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), temp0_96))
    zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
    var_188.o = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, zmm2), zmm2), zmm8) ^ data_143f3b3c0, zmm0)
        ^ data_143f3b3c0
    arg2, arg3 = sub_140adf5d0(&var_188, &var_170)
    rcx_3 = var_168
    zmm7 = zx.o(var_170)
    zmm11 = data_143f3b3e0
else
    zmm7 = zx.o(arg1[0x36])
    rcx_3 = arg1[0x37].d
    var_170 = zmm7.q
    var_168 = rcx_3

zmm0 = zx.o(*(arg1 + 0x11c))
zmm1 = *rdi
zmm1[0] = zmm1[0] f- zmm0.d
int32_t rax_9 = *(arg1 + 0x124)
var_188 = zmm0.q

if (_mm_and_ps(zmm1, 0x7fffffff)[0] > 9.99999975e-05f)
    arg2.b = 0
else
    zmm0.d = (*(rdi + 4)).d f- var_188:4.d
    
    if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
        arg2.b = 0
    else
        zmm0.d = (*(rdi + 8)).d f- rax_9
        
        if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
            arg2.b = 0
        else
            arg2.b = 1

zmm6 = data_143f3b410
zmm5 = zx.o(arg1[0x25])
int32_t rax_10 = arg1[0x26].d
zmm12 = var_170:4.d
zmm14 = var_170.d
zmm13 = var_168
zmm8 = data_143f3b420
float temp0_114[0x4] = _mm_unpacklo_ps(zmm12, 0)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
var_188 = zmm5.q
zmm2 = _mm_unpacklo_ps(zmm0, 0)
zmm9 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, zmm13.q), temp0_114[0].q)
zmm5 = _mm_sub_ps(zmm9, _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, rax_10[0].q), zmm2.q))
zmm4 = _mm_and_ps(zmm6, zmm11)
zmm2 = _mm_div_ps(zmm5, zmm6)
float temp0_125[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm2))
zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm8, _mm_and_ps(zmm2, zmm11), 2), temp0_125 ^ zmm2)
zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm4), 
    _mm_min_ps(_mm_sub_ps(zmm5, _mm_mul_ps(zmm1 ^ temp0_125, zmm6)), zmm4))
float temp0_134[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
float temp0_135[0x4] = _mm_add_ps(zmm2, zmm6)
zmm3 = _mm_and_ps(temp0_134, temp0_135 ^ zmm2) ^ temp0_135
float temp0_137[0x4] = _mm_sub_ps(zmm3, zmm6)
zmm6 = data_143f3b400
zmm1 = _mm_and_ps(temp0_137 ^ zmm3, _mm_cmpeq_ps(zmm6, zmm3, 1)) ^ zmm3
arg3.b = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
    _mm_and_ps(zmm1, zmm11), 1)) != 0
uint32_t result

if (arg2.b == 0 || arg3.b != 0)
    int32_t rax_11 = *(rdi + 8)
    *(arg1 + 0x11c) = *rdi
    *(arg1 + 0x124) = rax_11
    
    if (arg3.b != 0)
        arg1[0x25] = zmm7.q
        arg1[0x26].d = rcx_3
        
        if (zmm14[0] f!= arg1[0x36].d || zmm12.d f!= *(arg1 + 0x1b4)
                || not(zmm13.d f== arg1[0x37].d))
            zmm5 = data_143f3b410
            zmm2 = _mm_div_ps(zmm9, zmm5)
            zmm4 = _mm_and_ps(zmm5, zmm11)
            float temp0_147[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm2))
            zmm8 = _mm_and_ps(_mm_cmpeq_ps(zmm8, _mm_and_ps(zmm2, zmm11), 2), temp0_147 ^ zmm2)
                ^ temp0_147
            float temp0_151[0x4] = _mm_sub_ps(zx.o(0), zmm4)
            zmm9 = _mm_min_ps(_mm_sub_ps(zmm9, _mm_mul_ps(zmm8, zmm5)), zmm4)
            float temp0_155[0x4] = _mm_max_ps(temp0_151, zmm9)
            zmm0 = _mm_add_ps(temp0_155, zmm5)
            zmm2 = _mm_and_ps(zmm0 ^ temp0_155, _mm_cmpeq_ps(zx.o(0), temp0_155, 2)) ^ zmm0
            zmm3 = _mm_and_ps(_mm_sub_ps(zmm2, zmm5) ^ zmm2, _mm_cmpeq_ps(zmm6, zmm2, 1)) ^ zmm2
            int32_t var_180_7 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
            arg1[0x36] = (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)).q
            arg1[0x37].d = var_180_7
            float (* rax_13)[0x4]
            rax_13, zmm6, zmm8 = sub_140ade170(&arg1[0x36], &var_188)
            *(arg1 + 0x1a0) = *rax_13
    
    var_188.o = *(arg1 + 0x1a0)
    sub_141f4d380(arg1, arg1[0x18], arg1[0x19], zx.d(arg4), zmm6, zmm8, zmm9, zmm11, zmm12, zmm15, 
        &var_188, arg5)
    
    if ((arg1[0x11].b & 1) != 0 && (*(arg1 + 0x8a) & 8) != 0)
        sub_141dee7a0(arg1)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_1b8)
return result
