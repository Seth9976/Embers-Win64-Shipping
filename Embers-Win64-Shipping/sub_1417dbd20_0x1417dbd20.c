// 函数: sub_1417dbd20
// 地址: 0x1417dbd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* rbx = *(arg1 + 0xc8)
void* rdx = nullptr

if (rbx != 0)
    int32_t rax_2 = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_2 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_1417dbd97:
        rbx = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_2 == rbx[1].d)
                rbx[1].d = rax_2 + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                if (rbx != 0)
                    rdx = *(arg1 + 0xc0)
                
                break
            
            rax_2 = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax_2 = rbx[1].d
                z_3 = false
            
            if (z_3)
                goto label_1417dbd97

int64_t* rcx_1 = *(rdx + 0x58)
float zmm13[0x4] = *(arg1 + 0x70)
float zmm14[0x4] = *(arg1 + 0x80)
float zmm15[0x4] = *(arg1 + 0x90)
float var_1a8[0x4] = zmm13
float var_198[0x4] = zmm14
float var_188[0x4] = zmm15
void var_f8
int128_t* rax_5 = (*(*rcx_1 + 0x78))(rcx_1, &var_f8)
float zmm1[0x4] = data_143ef8a30
uint32_t zmm5[0x4] = data_143ef8a40
arg2[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[2] = _mm_and_ps(data_143ef8a30, zmm5)
float zmm7[0x4] = rax_5[2]
float zmm6[0x4] = *rax_5

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm15, zmm7), data_143ef8ad0, 1)) == 0)
    zmm5 = rax_5[1]
    float temp0_134[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x4e)
    float temp0_137[0x4] = _mm_mul_ps(temp0_134, _mm_shuffle_ps(zmm6, zmm6, 0))
    float temp0_138[0x4] = _mm_mul_ps(zmm14, zmm7)
    float temp0_139[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_140[0x4] = __mulps_xmmps_memps(temp0_137, data_143ef8a90)
    float temp0_141[0x4] = _mm_mul_ps(zmm13, temp0_139)
    float temp0_142[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xd2)
    float temp0_143[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
    float temp0_144[0x4] = _mm_mul_ps(zmm15, zmm7)
    float temp0_145[0x4] = _mm_add_ps(temp0_140, temp0_141)
    float temp0_147[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm6, zmm6, 0x55))
    float temp0_149[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
    float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143ef8a80)
    float temp0_151[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xc9)
    float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143ef8a70)
    float temp0_153[0x4] = _mm_add_ps(temp0_145, temp0_150)
    arg2[2] = temp0_144
    *arg2 = _mm_add_ps(temp0_153, temp0_152)
    float temp0_155[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_156[0x4] = _mm_mul_ps(temp0_151, temp0_155)
    float temp0_157[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_159[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_142, temp0_157), temp0_156)
    float temp0_160[0x4] = _mm_add_ps(temp0_159, temp0_159)
    float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xd2)
    float temp0_162[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc9)
    float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_157)
    float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_155)
    float temp0_165[0x4] = _mm_mul_ps(temp0_160, temp0_139)
    arg2[1] = _mm_add_ps(
        _mm_add_ps(_mm_sub_ps(temp0_163, temp0_164), _mm_add_ps(temp0_165, temp0_138)), zmm5)
else
    float zmm8[0x4] = rax_5[1]
    float temp0_5[0x4] = _mm_add_ps(zmm6, zmm6)
    float zmm10[0x4] = data_143ef8a30
    float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
    float temp0_7[0x4] = _mm_mul_ps(zmm6, temp0_5)
    float temp0_9[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
    float temp0_10[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x1a)
    float temp0_14[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x12), _mm_shuffle_ps(zmm6, zmm6, 0xff))
    float temp0_16[0x4] = _mm_add_ps(temp0_11, _mm_shuffle_ps(temp0_7, temp0_7, 1))
    _mm_mul_ps(zmm7, zmm15)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_9)
    float temp0_19[0x4] = _mm_sub_ps(temp0_9, temp0_14)
    float temp0_20[0x4] = _mm_add_ps(zmm13, zmm13)
    float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm7)
    float temp0_22[0x4] = _mm_mul_ps(temp0_10, temp0_19)
    float temp0_23[0x4] = _mm_sub_ps(zmm10, temp0_16)
    float temp0_24[0x4] = _mm_mul_ps(zmm13, temp0_20)
    zmm1 = _mm_and_ps(_mm_mul_ps(temp0_23, zmm7), zmm5)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_22, zmm1, 0x32)
    float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0), temp0_27, 0x82)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x31)
    float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0x10), temp0_30, 0x88)
    float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1, 0xe8)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x29)
    zmm10[0].q = zmm8 u>> 0x40
    float temp0_36[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(zmm13, zmm13, 4))
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x1a)
    float temp0_40[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
    float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0x12), temp0_40)
    float temp0_44[0x4] = _mm_add_ps(temp0_39, _mm_shuffle_ps(temp0_24, temp0_24, 1))
    float temp0_45[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float var_178_1[0x4] = temp0_29
    float var_168_1[0x4] = temp0_32
    float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_38)
    float var_158_1[0x4] = temp0_34
    float temp0_47[0x4] = _mm_sub_ps(temp0_38, temp0_42)
    float var_148_1[0x4] = temp0_36
    float temp0_48[0x4] = _mm_mul_ps(temp0_46, zmm15)
    float temp0_49[0x4] = _mm_mul_ps(temp0_45, temp0_47)
    zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_44), zmm15), zmm5)
    float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
        _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), temp0_56, 0x88)
    float var_138_1[0x4] = temp0_55
    float temp0_60[0x4] = _mm_mul_ps(temp0_57, temp0_32)
    zmm10[0].q = zmm14 u>> 0x40
    float temp0_61[0x4] = _mm_shuffle_ps(zmm14, zmm10, 0xc4)
    float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0), temp0_29)
    float temp0_65[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, temp0_49, 0x12), zmm1, 0xe8)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)
    float temp0_67[0x4] = _mm_add_ps(temp0_60, temp0_63)
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xff), temp0_36)
    float temp0_70[0x4] = _mm_mul_ps(temp0_66, temp0_34)
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_29)
    float temp0_73[0x4] = _mm_add_ps(temp0_67, temp0_70)
    uint32_t var_128_1[0x4] = zmm5
    float var_118_1[0x4] = temp0_65
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), temp0_34)
    float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_69)
    float var_108_1[0x4] = temp0_61
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), temp0_32)
    float var_218[0x4] = temp0_76
    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0x55), temp0_32)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_72)
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), temp0_36)
    float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0), temp0_29)
    float temp0_86[0x4] = _mm_add_ps(temp0_81, temp0_75)
    float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_34)
    float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_85)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
    float temp0_91[0x4] = _mm_add_ps(temp0_86, zmm5)
    float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_36)
    float temp0_93[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
    float temp0_94[0x4] = _mm_add_ps(temp0_89, temp0_88)
    float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_29)
    int96_t var_208_1 = temp0_91[0].12
    float temp0_96[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xaa)
    float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0x55), temp0_32)
    float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_92)
    float temp0_100[0x4] = _mm_mul_ps(temp0_96, temp0_34)
    float temp0_101[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
    float temp0_102[0x4] = _mm_add_ps(temp0_98, temp0_95)
    float temp0_103[0x4] = _mm_mul_ps(temp0_101, temp0_36)
    int96_t var_1f8_1 = temp0_99[0].12
    int96_t var_1e8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_100), temp0_103)[0].12
    int128_t zmm10_1
    float zmm12_1[0x4]
    zmm10_1, zmm12_1 = sub_1407740e0(&var_218, 0x322bcc77)
    float zmm2_1[0x4] = var_218[0]
    float zmm1_1 = var_218[1]
    float zmm4_1[0x4] =
        _mm_and_ps(_mm_cmpeq_ps(data_143ef8ad0, zmm12_1, 2), data_143ef8ac0 ^ zmm10_1)
    uint32_t zmm0_1[0x4] = var_218[2]
    zmm4_1 ^= data_143ef8ac0
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    zmm1_1 = zmm1_1 * zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    var_218[0] = zmm2_1[0]
    float temp0_108[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_218[1] = zmm1_1
    zmm1_1 = var_208_1:4.d * temp0_108[0]
    var_218[2] = zmm0_1[0]
    zmm0_1 = var_208_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
    float zmm3_1 = var_208_1.d * temp0_108[0]
    zmm2_1 = var_1f8_1.d
    var_208_1:4.d = zmm1_1
    var_208_1:8.d = zmm0_1[0]
    zmm0_1 = var_1f8_1:8.d
    float var_1b8_1[0x4] = zmm4_1
    float temp0_109[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    zmm1_1 = var_1f8_1:4.d * temp0_109[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
    zmm2_1[0] = zmm2_1[0] * temp0_109[0]
    var_1f8_1:4.d = zmm1_1
    var_1f8_1:8.d = zmm0_1[0]
    var_208_1.d = zmm3_1
    var_1f8_1.d = zmm2_1[0]
    uint32_t var_1c8[0x4]
    sub_14077e4a0(&var_1c8, &var_218)
    uint32_t zmm5_1[0x4] = var_1c8
    float zmm6_1[0x4] = data_143ef8ab0
    uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
    uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
    zmm1_2 = _mm_rsqrt_ps(zmm4_2)
    uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6_1)
    float temp0_121[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), zmm1_2), 
        zmm1_2)
    float temp0_124[0x4] = _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), zmm3_2))
    uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
    zmm6_1 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_124, temp0_121), temp0_121), zmm5_1)
            ^ data_143ef8aa0, 
        zmm0_2) ^ data_143ef8aa0
    var_1c8 = zmm6_1
    *arg2 = zmm6_1
    arg2[2] = zmm12_1
    arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1e8_1.d, var_1e8_1:8.d[0].q), 
        _mm_unpacklo_ps(var_1e8_1:4.d, 0)[0].q)

float (* result)[0x4]

if (rbx == 0)
    result = arg2
else
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_3 = *rbx
        (*rdx_3)(rbx, rdx_3)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, zx.q(rsi_1), r8_1)
    
    result = arg2

__security_check_cookie(rax_1 ^ &var_248)
return result
