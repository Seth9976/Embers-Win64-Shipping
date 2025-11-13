// 函数: sub_141dbd060
// 地址: 0x141dbd060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* r12_1 = arg2
uint64_t rax = (*(*arg2 + 0x690))(arg2)
uint64_t r13_1 = rax

if (rax == 0)
    return 

int32_t i_2 = 0
int32_t i = 0
float zmm6[0x4]
float var_48_1[0x4] = zmm6
float var_1f8
int64_t var_1f4
float var_1e8
float var_1e4
uint32_t var_1e0
uint128_t var_1dc
uint64_t var_1cc
int32_t var_1c4
int64_t var_1c0
char var_1ae
uint128_t var_198
void* var_178
uint128_t zmm7
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
uint32_t zmm14[0x4]
uint128_t zmm15

if (*(rax + 0x40) s> 0)
    zmm6 = 0x3f800000
    
    do
        float zmm6_1[0x4] =
            sub_141ebb770(sx.q(i) * 0x58 + *(r13_1 + 0x38), &var_178, &data_143dbb0c0, zmm6)
        uint128_t zmm0_1 = zx.o(data_143dbb1f8.q)
        int32_t rax_4 = data_143dbb200
        var_1f8 &= 0xfffffffe
        var_1ae &= 0xfe
        uint64_t var_18c_1 = zmm0_1.q
        int32_t var_190_1 = rax_4
        int32_t var_184_1 = rax_4
        zmm0_1.q = zmm0_1.q
        var_198 = zmm0_1
        int32_t var_1ec_1 = 0xffffffff
        var_1dc = zmm0_1
        var_1e8 = 0f
        var_1cc = var_18c_1
        var_1e4 = -nanf
        var_1e0 = 0
        var_1c0 = 0
        int64_t var_1b8_1 = 0
        char var_1af_1 = 0
        var_1f4 = 0
        var_1c4 = 0.d
        sub_141dd7400(&var_1f8, arg3)
        zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_141dd7840(&var_1f8, &var_178, &r12_1[0x38], zmm6_1)
        int32_t rcx_5 = arg1[8]
        arg1[8] = rcx_5 + 1
        
        if (rcx_5 + 1 s> arg1[9])
            sub_1405c5060(&arg1[6])
        
        sub_141db6cf0(sx.q(rcx_5) * 0x50 + *(arg1 + 0x18), &var_1f8)
        int32_t rax_8 = *arg1
        *arg1 = (((var_1f8 | rax_8) ^ rax_8) & 1) ^ rax_8
        uint32_t rcx_15 = zx.d(var_1ae) * 2
        rax = (zx.q(rcx_15) & 2) | zx.q(arg1[0x12])
        arg1[0x12] = (((rcx_15 | rax.d) ^ rax.d) & 4) ^ rax.d
        
        if (var_1c0 != 0)
            sub_140a74f90(var_1c0)
        
        i += 1
    while (i s< *(r13_1 + 0x40))
    
    r12_1 = arg2

zmm6 = 0x80000000
uint128_t var_58_1 = zmm7
float var_68_1[0x4] = zmm8
float var_78_1[0x4] = zmm9
float var_88_1[0x4] = zmm10
float var_98_1[0x4] = zmm11
float var_a8_1[0x4] = zmm12
float var_b8_1[0x4] = zmm13
uint32_t var_c8_1[0x4] = zmm14
uint128_t var_d8_1 = zmm15
int32_t i_3 = 0
int32_t var_208
float var_158[0x4]
int32_t var_128
int64_t var_f0
char var_de
float zmm0[0x4]
uint128_t zmm1
float zmm2[0x4]
uint32_t zmm5_1[0x4]

if (*(r13_1 + 0x50) s> 0)
    zmm2 = zx.o(0)
    int64_t rsi_1 = 0
    int32_t i_1
    
    do
        int64_t rax_12 = *(r13_1 + 0x48)
        zmm15 = data_143f38c20
        zmm8 = *(r12_1 + 0x1e0)
        zmm0 = zmm15
        zmm5_1 = data_143f38c30
        zmm7 = *(rsi_1 + rax_12 + 0x4c)
        uint32_t temp0_1[0x4] = _mm_and_ps(zmm15, zmm5_1)
        zmm0[0].q = zmm2 u>> 0x40
        zmm1 = zmm7 ^ zmm6
        float temp0_2[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
        zmm6 = *(r12_1 + 0x1c0)
        float temp0_3[0x4] = _mm_unpacklo_ps(zx.o(0), zmm1.q)
        float temp0_4[0x4] = _mm_min_ps(temp0_1, zmm8)
        float temp0_5[0x4] = _mm_unpacklo_ps(temp0_3, 0)
        zmm1 = data_143f38cd0
        uint32_t temp0_7 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_4, zmm1, 1))
        var_178.o = zmm1
        int64_t rax_14
        
        if (temp0_7 == 0)
            rax_14 = rax_12
            float temp0_137[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x1b)
            float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_137)
            zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            float temp0_141[0x4] = _mm_mul_ps(zmm8, temp0_5)
            float temp0_142[0x4] = __mulps_xmmps_memps(temp0_139, data_143f38c90)
            zmm5_1 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_144[0x4] = _mm_mul_ps(zmm8, temp0_1)
            float temp0_145[0x4] = _mm_mul_ps(zmm5_1, temp0_2)
            float temp0_146[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xd2)
            float var_138_2[0x4] = temp0_144
            float temp0_147[0x4] = _mm_add_ps(temp0_142, temp0_145)
            zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(temp0_2, temp0_2, 0x4e))
            float temp0_152[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(temp0_2, temp0_2, 0xb1))
            zmm1 = __mulps_xmmps_memps(zmm1, data_143f38c80)
            float temp0_154[0x4] = __mulps_xmmps_memps(temp0_152, data_143f38c70)
            float temp0_156[0x4] = _mm_add_ps(_mm_add_ps(temp0_147, zmm1), temp0_154)
            float temp0_157[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xc9)
            var_158 = temp0_156
            float temp0_158[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_159[0x4] = _mm_mul_ps(temp0_157, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_162[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_146, temp0_160), temp0_159)
            float temp0_163[0x4] = _mm_add_ps(temp0_162, temp0_162)
            zmm1 = _mm_shuffle_ps(temp0_163, temp0_163, 0xd2)
            float temp0_165[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc9)
            zmm1 = _mm_mul_ps(zmm1, temp0_160)
            float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_158)
            float temp0_168[0x4] = _mm_mul_ps(temp0_163, zmm5_1)
            uint128_t var_148_2 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(zmm1, temp0_167), _mm_add_ps(temp0_168, temp0_141)), 
                *(r12_1 + 0x1d0))
        else
            float temp0_8[0x4] = _mm_add_ps(zmm6, zmm6)
            float temp0_9[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
            _mm_mul_ps(zmm8, temp0_1)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x29), temp0_10)
            float temp0_14[0x4] = _mm_mul_ps(temp0_8, zmm6)
            float temp0_17[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x12), _mm_shuffle_ps(zmm6, zmm6, 0xff))
            float temp0_20[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0x1a), 
                _mm_shuffle_ps(temp0_14, temp0_14, 1))
            float temp0_21[0x4] = _mm_add_ps(temp0_17, zmm1)
            zmm1 = _mm_sub_ps(zmm1, temp0_17)
            float temp0_23[0x4] = _mm_add_ps(temp0_2, temp0_2)
            float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm8)
            float temp0_25[0x4] = _mm_mul_ps(temp0_9, zmm1)
            float temp0_26[0x4] = _mm_mul_ps(temp0_23, temp0_2)
            zmm1 = _mm_mul_ps(_mm_sub_ps(zmm15, temp0_20), zmm8)
            zmm8 = *(r12_1 + 0x1d0)
            zmm1 = _mm_and_ps(zmm1, zmm5_1)
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_25, zmm1, 0x32)
            float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm1, 0), temp0_30, 0x82)
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_24, zmm1, 0x31)
            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm1, 0x10), temp0_33, 0x88)
            zmm0 = zmm15
            float temp0_37[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, temp0_25, 0x12), zmm1, 0xe8)
            zmm1 = _mm_shuffle_ps(temp0_23, temp0_23, 0x29)
            zmm0[0].q = zmm8 u>> 0x40
            float temp0_39[0x4] = _mm_shuffle_ps(zmm8, zmm0, 0xc4)
            zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(temp0_2, temp0_2, 4))
            float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0x1a), 
                _mm_shuffle_ps(temp0_26, temp0_26, 1))
            float temp0_45[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
            float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x12), temp0_45)
            float temp0_48[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
            float temp0_49[0x4] = _mm_add_ps(temp0_47, zmm1)
            zmm1 = _mm_sub_ps(zmm1, temp0_47)
            float temp0_51[0x4] = _mm_mul_ps(temp0_49, temp0_1)
            float temp0_52[0x4] = _mm_mul_ps(temp0_48, zmm1)
            zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm15, temp0_44), temp0_1), zmm5_1)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_52, zmm1, 0x32)
            float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, zmm1, 0), temp0_56, 0x82)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_51, zmm1, 0x31)
            zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, zmm1, 0x10), temp0_59, 0x88)
            float temp0_63[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, temp0_52, 0x12), zmm1, 0xe8)
            zmm1 = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
            zmm0 = zmm15
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
            zmm1 = _mm_mul_ps(zmm1, temp0_37)
            float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm7)
            zmm0[0].q = temp0_5 u>> 0x40
            float temp0_68[0x4] = _mm_shuffle_ps(temp0_5, zmm0, 0xc4)
            float temp0_69[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0)
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xff), temp0_39)
            float temp0_73[0x4] = _mm_add_ps(temp0_67, _mm_mul_ps(temp0_69, temp0_32))
            float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_32)
            float temp0_76[0x4] = _mm_add_ps(temp0_73, zmm1)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_37)
            float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm7)
            zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            var_1f8.o = temp0_79
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
            float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_75)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, zmm7)
            zmm5_1 = _mm_mul_ps(zmm5_1, temp0_39)
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, zmm1)
            float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_32)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_37)
            float temp0_92[0x4] = _mm_add_ps(temp0_88, zmm5_1)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
            float temp0_94[0x4] = _mm_add_ps(temp0_85, temp0_89)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_39)
            float temp0_96[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0)
            var_1e8.o = temp0_92
            float temp0_97[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
            float temp0_98[0x4] = _mm_add_ps(temp0_94, zmm1)
            float temp0_99[0x4] = _mm_mul_ps(temp0_97, zmm7)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_37)
            float temp0_102[0x4] = _mm_mul_ps(temp0_96, temp0_32)
            float temp0_103[0x4] = _mm_add_ps(temp0_98, temp0_95)
            float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xff), temp0_39)
            var_1dc = temp0_103
            var_1cc:4.o = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_99, temp0_102), zmm1), temp0_105)
            zmm11, zmm15 = sub_1407740e0(&var_1f8, 0x322bcc77)
            float zmm2_1[0x4] = var_1f8
            uint32_t zmm0_2[0x4] = var_1f4:4.d
            float zmm4_2[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(var_178.o, zmm11, 2), data_143f38cc0 ^ zmm15)
                ^ data_143f38cc0
            zmm2_1[0] = zmm2_1[0] * zmm4_2[0]
            float zmm1_2 = var_1f4.d * zmm4_2[0]
            var_1f8 = zmm2_1[0]
            zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
            var_1f4.d = zmm1_2
            var_1f4:4.d = zmm0_2[0]
            zmm0_2 = var_1e0
            float temp0_111[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
            zmm1_2 = var_1e4 * temp0_111[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_111[0]
            float zmm3_1 = var_1e8 * temp0_111[0]
            zmm2_1 = var_1dc:4.d
            float temp0_112[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
            var_1e4 = zmm1_2
            var_1e0 = zmm0_2[0]
            zmm0_2 = var_1dc:0xc.d
            zmm1_2 = var_1dc:8.d * temp0_112[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_112[0]
            zmm2_1[0] = zmm2_1[0] * temp0_112[0]
            var_1dc:8.d = zmm1_2
            var_1dc:0xc.d = zmm0_2[0]
            var_1e8 = zmm3_1
            var_1dc:4.d = zmm2_1[0]
            sub_14077e4a0(&var_198, &var_1f8)
            uint128_t zmm5_2 = var_198
            float zmm6_2[0x4] = data_143f38cb0
            rax_14 = rax_12
            zmm1 = _mm_mul_ps(zmm5_2, zmm5_2)
            var_178.d = 0x322bcc77
            float var_138_1[0x4] = zmm11
            zmm7 = *(rsi_1 + rax_14 + 0x4c)
            zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
            uint128_t zmm4_3 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
            zmm1 = _mm_rsqrt_ps(zmm4_3)
            uint128_t zmm3_2 = _mm_mul_ps(zmm4_3, zmm6_2)
            float temp0_124[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3_2)), zmm1), 
                zmm1)
            float temp0_127[0x4] =
                _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_124, temp0_124), zmm3_2))
            uint128_t zmm0_3 = var_178.d
            zmm0_3 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_3, zmm0_3, 0), zmm4_3, 2)
            float temp0_131[0x4] = _mm_add_ps(_mm_mul_ps(temp0_127, temp0_124), temp0_124)
            float temp0_132[0x4] = _mm_unpacklo_ps(var_1c4, 0)
            zmm6_2 =
                _mm_and_ps(_mm_mul_ps(temp0_131, zmm5_2) ^ data_143f38ca0, zmm0_3) ^ data_143f38ca0
            uint128_t var_148_1 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_1cc:4.d, var_1c0.d.q), temp0_132[0].q)
            var_198 = zmm6_2
            var_158 = zmm6_2
        
        zmm7.d = zmm7.d f+ zmm7.d
        var_208.q = arg3
        sub_141db6e80(&var_128, *(rsi_1 + rax_14 + 0x48), zmm7, &var_158, var_208)
        int32_t rcx_24 = arg1[8]
        var_178.d = rcx_24
        arg1[8] = rcx_24 + 1
        
        if (rcx_24 + 1 s> arg1[9])
            sub_1405c5060(&arg1[6])
            rcx_24 = var_178.d
        
        sub_141db6cf0(sx.q(rcx_24) * 0x50 + *(arg1 + 0x18), &var_128)
        int32_t rax_17 = *arg1
        *arg1 = (((var_128 | rax_17) ^ rax_17) & 1) ^ rax_17
        uint32_t rdx_8 = zx.d(var_de) * 2
        rax = zx.q(arg1[0x12])
        int32_t rcx_38 = (((rdx_8 | rax.d) ^ rax.d) & 2) ^ rax.d
        arg1[0x12] = (((rdx_8 | rcx_38) ^ rcx_38) & 4) ^ rcx_38
        
        if (var_f0 != 0)
            sub_140a74f90(var_f0)
        
        rsi_1 += 0x50
        zmm6 = 0x80000000
        i_1 = i_3 + 1
        zmm2 = zx.o(0)
        i_3 = i_1
    while (i_1 s< *(r13_1 + 0x50))

i_3 = 0

if (*(r13_1 + 0x60) s> 0)
    int64_t var_1a8_2 = 0
    var_178 = &r12_1[0x38]
    int64_t rdi_1 = 0
    
    do
        zmm0 = zx.o(data_143dbb1f8.q)
        int32_t rax_20 = data_143dbb200
        zmm1 = zmm0
        int64_t rsi_2 = *(r13_1 + 0x58)
        int64_t var_18c_2 = zmm0.q
        int32_t var_190_2 = rax_20
        zmm0 = var_198
        int32_t rdi_2 = *(rdi_1 + rsi_2 + 0x38)
        var_1f8 &= 0xfffffffe
        var_1ae &= 0xfe
        zmm0[0].q = zmm1.q
        int32_t var_184_2 = rax_20
        var_198 = zmm0
        var_1dc = zmm0
        int32_t var_1ec_2 = 0xffffffff
        var_1cc = var_18c_2
        var_1e8 = 0f
        var_1e4 = -nanf
        var_1e0 = 0
        var_1c0 = 0
        int64_t var_1b8_2 = 0
        char var_1af_2 = 0
        var_1f4 = 0
        var_1c4 = 0.d
        sub_141dd7400(&var_1f8, arg3)
        var_208 = 0
        zmm6 = sub_141dd7d10(&var_1f8, *(var_1a8_2 + rsi_2 + 0x30), 0, rdi_2, 0, var_178)
        int64_t rsi_3 = sx.q(arg1[8])
        int32_t rax_23 = (rsi_3 + 1).d
        arg1[8] = rax_23
        
        if (rax_23 s> arg1[9])
            sub_1405c5060(&arg1[6])
        
        sub_141db6cf0(rsi_3 * 0x50 + *(arg1 + 0x18), &var_1f8)
        int32_t rax_24 = *arg1
        *arg1 = (((var_1f8 | rax_24) ^ rax_24) & 1) ^ rax_24
        uint32_t rdx_17 = zx.d(var_1ae) * 2
        int32_t rax_26 = arg1[0x12]
        int32_t rcx_56 = (((rdx_17 | rax_26) ^ rax_26) & 2) ^ rax_26
        arg1[0x12] = (((rdx_17 | rcx_56) ^ rcx_56) & 4) ^ rcx_56
        
        if (var_1c0 != 0)
            sub_140a74f90(var_1c0)
        
        rdi_1 = var_1a8_2 + 0xb0
        rax = zx.q(i_3 + 1)
        var_1a8_2 = rdi_1
        i_3 = rax.d
    while (rax.d s< *(r13_1 + 0x60))
    
    r12_1 = arg2

if (*(r13_1 + 0x30) s<= 0)
    return 

zmm2 = zx.o(0)
i_3.q = 0
int64_t rsi_4 = 0

do
    int64_t rax_28 = *(r13_1 + 0x28)
    zmm14 = data_143f38c20
    zmm8 = *(r12_1 + 0x1e0)
    zmm0 = zmm14
    zmm5_1 = data_143f38c30
    zmm9 = *(rsi_4 + rax_28 + 0x3c)
    zmm13 = _mm_and_ps(zmm14, zmm5_1)
    zmm15 = data_143f38cd0
    zmm7 = *(r12_1 + 0x1c0)
    zmm0[0].q = zmm2 u>> 0x40
    float temp0_174[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
    float temp0_175[0x4] = _mm_unpacklo_ps(zx.o(0), (zmm9 ^ zmm6).q)
    uint32_t temp0_178 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm8), zmm15, 1))
    zmm0 = zmm7
    float temp0_179[0x4] = _mm_unpacklo_ps(temp0_175, 0)
    
    if (temp0_178 == 0)
        float temp0_309[0x4] = _mm_shuffle_ps(zmm0, zmm7, 0)
        float temp0_311[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0x1b), temp0_309)
        zmm1 = _mm_shuffle_ps(temp0_174, temp0_174, 0x4e)
        float temp0_313[0x4] = _mm_mul_ps(zmm8, temp0_179)
        float temp0_314[0x4] = __mulps_xmmps_memps(temp0_311, data_143f38c90)
        zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
        float temp0_316[0x4] = _mm_mul_ps(zmm8, zmm13)
        float temp0_317[0x4] = _mm_mul_ps(zmm5_1, temp0_174)
        float temp0_318[0x4] = _mm_shuffle_ps(temp0_313, temp0_313, 0xd2)
        float temp0_319[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xb1)
        float var_138_4[0x4] = temp0_316
        float temp0_320[0x4] = _mm_add_ps(temp0_314, temp0_317)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm7, zmm7, 0x55))
        float temp0_324[0x4] = _mm_mul_ps(temp0_319, _mm_shuffle_ps(zmm7, zmm7, 0xaa))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f38c80)
        float temp0_326[0x4] = _mm_shuffle_ps(temp0_313, temp0_313, 0xc9)
        float temp0_327[0x4] = __mulps_xmmps_memps(temp0_324, data_143f38c70)
        float temp0_328[0x4] = _mm_add_ps(temp0_320, zmm1)
        zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
        float temp0_330[0x4] = _mm_mul_ps(temp0_326, zmm1)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        float temp0_332[0x4] = _mm_add_ps(temp0_328, temp0_327)
        float temp0_334[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_318, zmm7), temp0_330)
        var_158 = temp0_332
        float temp0_335[0x4] = _mm_add_ps(temp0_334, temp0_334)
        float temp0_336[0x4] = _mm_shuffle_ps(temp0_335, temp0_335, 0xd2)
        float temp0_337[0x4] = _mm_shuffle_ps(temp0_335, temp0_335, 0xc9)
        float temp0_338[0x4] = _mm_mul_ps(temp0_336, zmm7)
        float temp0_339[0x4] = _mm_mul_ps(temp0_337, zmm1)
        float temp0_340[0x4] = _mm_mul_ps(temp0_335, zmm5_1)
        float var_148_4[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_338, temp0_339), _mm_add_ps(temp0_340, temp0_313)), 
            *(r12_1 + 0x1d0))
    else
        float temp0_180[0x4] = _mm_shuffle_ps(zmm0, zmm7, 4)
        float temp0_181[0x4] = _mm_add_ps(zmm7, zmm7)
        float temp0_182[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        float zmm3[0x4] = zmm7
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
        _mm_mul_ps(zmm8, zmm13)
        float temp0_185[0x4] = _mm_mul_ps(zmm3, temp0_181)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_181, temp0_181, 0x29), temp0_180)
        float temp0_188[0x4] = _mm_shuffle_ps(temp0_181, temp0_181, 0x12)
        float temp0_189[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0x1a)
        float temp0_190[0x4] = _mm_mul_ps(temp0_188, zmm7)
        float temp0_192[0x4] = _mm_add_ps(temp0_189, _mm_shuffle_ps(temp0_185, temp0_185, 1))
        float temp0_193[0x4] = _mm_add_ps(temp0_190, zmm1)
        zmm1 = _mm_sub_ps(zmm1, temp0_190)
        float temp0_195[0x4] = _mm_add_ps(temp0_174, temp0_174)
        float temp0_196[0x4] = _mm_mul_ps(temp0_193, zmm8)
        float temp0_197[0x4] = _mm_mul_ps(temp0_182, zmm1)
        float temp0_198[0x4] = _mm_mul_ps(temp0_195, temp0_174)
        zmm1 = _mm_mul_ps(_mm_sub_ps(zmm14, temp0_192), zmm8)
        zmm8 = *(r12_1 + 0x1d0)
        zmm1 = _mm_and_ps(zmm1, zmm5_1)
        float temp0_202[0x4] = _mm_shuffle_ps(temp0_197, zmm1, 0x32)
        float temp0_204[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_196, zmm1, 0), temp0_202, 0x82)
        float temp0_205[0x4] = _mm_shuffle_ps(temp0_196, zmm1, 0x31)
        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_197, zmm1, 0x10), temp0_205, 0x88)
        zmm0 = zmm14
        float temp0_209[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_196, temp0_197, 0x12), zmm1, 0xe8)
        zmm1 = _mm_shuffle_ps(temp0_195, temp0_195, 0x29)
        zmm0[0].q = zmm8 u>> 0x40
        float temp0_211[0x4] = _mm_shuffle_ps(zmm8, zmm0, 0xc4)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(temp0_174, temp0_174, 4))
        float temp0_214[0x4] = _mm_shuffle_ps(temp0_198, temp0_198, 0x1a)
        float temp0_215[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xff)
        float temp0_217[0x4] = _mm_add_ps(temp0_214, _mm_shuffle_ps(temp0_198, temp0_198, 1))
        float temp0_219[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_195, temp0_195, 0x12), temp0_215)
        float temp0_220[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
        float temp0_221[0x4] = _mm_add_ps(temp0_219, zmm1)
        zmm1 = _mm_sub_ps(zmm1, temp0_219)
        float temp0_223[0x4] = _mm_mul_ps(temp0_221, zmm13)
        float temp0_224[0x4] = _mm_mul_ps(temp0_220, zmm1)
        zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm14, temp0_217), zmm13), zmm5_1)
        float temp0_228[0x4] = _mm_shuffle_ps(temp0_224, zmm1, 0x32)
        float temp0_230[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_223, zmm1, 0), temp0_228, 0x82)
        float temp0_231[0x4] = _mm_shuffle_ps(temp0_223, zmm1, 0x31)
        zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_224, zmm1, 0x10), temp0_231, 0x88)
        float temp0_235[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_223, temp0_224, 0x12), zmm1, 0xe8)
        zmm1 = _mm_shuffle_ps(temp0_230, temp0_230, 0xaa)
        zmm0 = zmm14
        float temp0_237[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0x55)
        zmm1 = _mm_mul_ps(zmm1, temp0_209)
        float temp0_239[0x4] = _mm_mul_ps(temp0_237, zmm7)
        zmm0[0].q = temp0_179 u>> 0x40
        float temp0_240[0x4] = _mm_shuffle_ps(temp0_179, zmm0, 0xc4)
        float temp0_241[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0)
        float temp0_243[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xff), temp0_211)
        float temp0_245[0x4] = _mm_add_ps(temp0_239, _mm_mul_ps(temp0_241, temp0_204))
        float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_204)
        float temp0_248[0x4] = _mm_add_ps(temp0_245, zmm1)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_209)
        float temp0_251[0x4] = _mm_add_ps(temp0_248, temp0_243)
        float temp0_253[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm7)
        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        var_1f8.o = temp0_251
        float temp0_255[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0x55)
        float temp0_256[0x4] = _mm_add_ps(temp0_253, temp0_247)
        float temp0_257[0x4] = _mm_mul_ps(temp0_255, zmm7)
        zmm5_1 = _mm_mul_ps(zmm5_1, temp0_211)
        float temp0_259[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0)
        float temp0_260[0x4] = _mm_add_ps(temp0_256, zmm1)
        float temp0_261[0x4] = _mm_mul_ps(temp0_259, temp0_204)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0xaa), temp0_209)
        float temp0_264[0x4] = _mm_add_ps(temp0_260, zmm5_1)
        float temp0_265[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0xff)
        float temp0_266[0x4] = _mm_add_ps(temp0_257, temp0_261)
        float temp0_267[0x4] = _mm_mul_ps(temp0_265, temp0_211)
        float temp0_268[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0)
        var_1e8.o = temp0_264
        float temp0_269[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0x55)
        float temp0_270[0x4] = _mm_add_ps(temp0_266, zmm1)
        float temp0_271[0x4] = _mm_mul_ps(temp0_269, zmm7)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0xaa), temp0_209)
        float temp0_274[0x4] = _mm_mul_ps(temp0_268, temp0_204)
        float temp0_275[0x4] = _mm_add_ps(temp0_270, temp0_267)
        float temp0_277[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0xff), temp0_211)
        var_1dc = temp0_275
        var_1cc:4.o = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_271, temp0_274), zmm1), temp0_277)
        zmm11, zmm14, zmm15 = sub_1407740e0(&var_1f8, 0x322bcc77)
        float zmm2_2[0x4] = var_1f8
        uint32_t zmm0_4[0x4] = var_1f4:4.d
        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm11, 2), data_143f38cc0 ^ zmm14) ^ data_143f38cc0
        zmm2_2[0] = zmm2_2[0] f* zmm15.d
        zmm0_4[0] = zmm0_4[0] f* zmm15.d
        var_1f8 = zmm2_2[0]
        var_1f4.d = var_1f4.d f* zmm15.d
        var_1f4:4.d = zmm0_4[0]
        zmm0_4 = var_1e0
        float temp0_283[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        float zmm1_3 = var_1e4 * temp0_283[0]
        zmm0_4[0] = zmm0_4[0] f* temp0_283[0]
        float zmm3_3 = var_1e8 * temp0_283[0]
        zmm2_2 = var_1dc:4.d
        var_1e4 = zmm1_3
        var_1e0 = zmm0_4[0]
        zmm0_4 = var_1dc:0xc.d
        zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm0_4[0] = zmm0_4[0] f* zmm15.d
        zmm2_2[0] = zmm2_2[0] f* zmm15.d
        var_1dc:8.d = var_1dc:8.d f* zmm15.d
        var_1dc:0xc.d = zmm0_4[0]
        var_1e8 = zmm3_3
        var_1dc:4.d = zmm2_2[0]
        sub_14077e4a0(&var_198, &var_1f8)
        uint128_t zmm5_3 = var_198
        float zmm6_3[0x4] = data_143f38cb0
        zmm1 = _mm_mul_ps(zmm5_3, zmm5_3)
        int64_t* arg_10
        arg_10.d = 0x322bcc77
        float var_138_3[0x4] = zmm11
        zmm9 = *(rsi_4 + rax_28 + 0x3c)
        zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
        uint128_t zmm4_4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
        zmm1 = _mm_rsqrt_ps(zmm4_4)
        uint128_t zmm3_4 = _mm_mul_ps(zmm4_4, zmm6_3)
        float temp0_296[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_3, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3_4)), zmm1), zmm1)
        float temp0_299[0x4] =
            _mm_sub_ps(zmm6_3, _mm_mul_ps(_mm_mul_ps(temp0_296, temp0_296), zmm3_4))
        uint128_t zmm0_5 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_4, 2)
        float temp0_303[0x4] = _mm_add_ps(_mm_mul_ps(temp0_299, temp0_296), temp0_296)
        float temp0_304[0x4] = _mm_unpacklo_ps(var_1c4, 0)
        zmm6_3 = _mm_and_ps(_mm_mul_ps(temp0_303, zmm5_3) ^ data_143f38ca0, zmm0_5) ^ data_143f38ca0
        uint128_t var_148_3 =
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_1cc:4.d, var_1c0.d.q), temp0_304[0].q)
        var_198 = zmm6_3
        var_158 = zmm6_3
    
    var_208.q = arg3
    zmm9[0] = zmm9[0] + zmm9[0]
    sub_141db6e80(&var_128, zmm9, zmm9, &var_158, var_208)
    int64_t rsi_5 = sx.q(arg1[8])
    int32_t rax_31 = (rsi_5 + 1).d
    arg1[8] = rax_31
    
    if (rax_31 s> arg1[9])
        sub_1405c5060(&arg1[6])
    
    sub_141db6cf0(rsi_5 * 0x50 + *(arg1 + 0x18), &var_128)
    int32_t rax_32 = *arg1
    *arg1 = (((var_128 | rax_32) ^ rax_32) & 1) ^ rax_32
    uint32_t rdx_25 = zx.d(var_de) * 2
    rax = zx.q(arg1[0x12])
    int32_t rcx_74 = (((rdx_25 | rax.d) ^ rax.d) & 2) ^ rax.d
    arg1[0x12] = (((rdx_25 | rcx_74) ^ rcx_74) & 4) ^ rcx_74
    
    if (var_f0 != 0)
        sub_140a74f90(var_f0)
    
    i_2 += 1
    zmm6 = 0x80000000
    rsi_4 = i_3.q + 0x40
    zmm2 = zx.o(0)
    i_3.q = rsi_4
while (i_2 s< *(r13_1 + 0x30))
