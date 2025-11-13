// 函数: sub_141f5cd90
// 地址: 0x141f5cd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1
void* rcx = *(arg1 + 0x430)
uint64_t* rbx = arg4
float (* r12)[0x4] = arg3
int64_t* r14 = arg2

if (rcx == 0)
    if (rbx != 0)
        *arg4 = data_143dbb1f8.q
        arg4[1].d = data_143dbb200
    
    *arg2 = 0
    return arg2

void* rdi = *(r13 + 0x548)

if (rdi == 0)
    rdi = *(rcx + 0x148)

if (arg6 != 0 && rdi == 0)
    if (rbx != 0)
        *arg4 = data_143dbb1f8.q
        arg4[1].d = data_143dbb200
    
    *arg2 = 0
    return arg2

uint128_t zmm0 = arg3[1].d
float temp0_1[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
float zmm6[0x4] = *(r13 + 0x1e0)
float temp0_2[0x4] = __mulps_xmmps_memps(data_143f3b980, *(r13 + 0x1c0))
void* var_158 = r13 + 0x1c0
float temp0_5[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, zmm0.q), temp0_1[0].q), *(r13 + 0x1d0))
float temp0_6[0x4] = _mm_rcp_ps(zmm6)
int32_t i_1 = 0xffffffff
float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float zmm8[0x4] = __andps_xmmxud_memxud(temp0_5, data_143f3b880)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_9)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_7)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
float temp0_15[0x4] = _mm_sub_ps(temp0_13, zmm0)
zmm0 = _mm_mul_ps(temp0_6, temp0_6)
float temp0_17[0x4] = _mm_add_ps(temp0_6, temp0_6)
float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
zmm0 = _mm_mul_ps(zmm0, zmm6)
float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
float temp0_21[0x4] = _mm_sub_ps(temp0_17, zmm0)
float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_7)
float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
zmm8 = arg5
zmm8[0] = zmm8[0] * zmm8[0]
zmm0 = _mm_mul_ps(temp0_21, temp0_21)
float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
zmm0 = _mm_mul_ps(zmm0, zmm6)
float temp0_29[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f3b860), data_143f3b970, 2)
float temp0_30[0x4] = _mm_sub_ps(temp0_26, zmm0)
float temp0_33[0x4] =
    _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9))
zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
float zmm7[0x4] = 0x7f7fc99e
float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)
int32_t var_f0_1 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa).d
*arg3 = (_mm_unpacklo_ps(temp0_36, _mm_shuffle_ps(temp0_36, temp0_36, 0x55)[0].q)).q
arg3[1].d = var_f0_1

if (sub_140d3e110(r13 + 0x438) != 0)
    r13 = sub_140d3c6e0(r13 + 0x438)

int64_t rax_8 = sx.q(*(r13 + 0x494))
int32_t i = 0
void* rcx_5 = ((rax_8 + 0x45) << 4) + r13
void* var_f8_1 = rcx_5

if (*((rax_8 << 4) + r13 + 0x458) s> 0)
    char r8 = arg6
    int64_t* rdx = nullptr
    int64_t* var_108_1 = nullptr
    uint64_t rax_10
    rax_10.b = r8 ^ 1
    float (* r14_1)[0x4] = nullptr
    char arg_8 = rax_10.b
    int32_t i_2
    float zmm1[0x4]
    float zmm5[0x4]
    
    do
        if (r8 != 0)
            int64_t rbx_2 = *(rdx + *(*(arg1 + 0x430) + 0x1a8))
            void* const rcx_9
            
            if (*(rdi + 0x88) == *(rdi + 0xb4))
            label_141f5d0a0:
                rcx_9 = nullptr
            else
                int32_t rax_15 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                void* r8_1 = rdi + 0xb8
                void* rcx_7 = *(r8_1 + 8)
                
                if (rcx_7 != 0)
                    r8_1 = rcx_7
                
                int32_t rax_17 = *(r8_1 + (((sx.q(*(rdi + 0xc8)) - 1) & sx.q(rax_15)) << 2))
                
                if (rax_17 == 0xffffffff)
                label_141f5d0a0_1:
                    rcx_9 = nullptr
                else
                    int64_t r8_2 = *(rdi + 0x80)
                    
                    while (true)
                        int64_t rdx_4 = sx.q(rax_17) * 5
                        rcx_9 = r8_2 + (rdx_4 << 2)
                        
                        if (*(r8_2 + (rdx_4 << 2)) == rbx_2)
                            break
                        
                        rax_17 = *(rcx_9 + 0xc)
                        
                        if (rax_17 == 0xffffffff)
                            goto label_141f5d0a0_2
                    
                    if (rax_17 == 0xffffffff)
                    label_141f5d0a0_2:
                        rcx_9 = nullptr
            
            rdx = var_108_1
            rax_10 = rcx_9 + 8
            r8 = arg6
            rcx_5 = var_f8_1
            
            if (rcx_9 == 0)
                rax_10 = 0
            
            rax_10.b = rax_10 != 0
        
        if (rax_10.b == 0)
            i_2 = i_1
        else
            float temp0_58[0x4]
            
            if (not(zmm8[0] < 0f))
                int64_t rax_18 = *rcx_5
                float temp0_40[0x4] = __mulps_xmmps_memps(data_142d4cc00, *(r14_1 + rax_18 + 0x20))
                zmm5 = *(r14_1 + rax_18)
                float temp0_41[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                float temp0_42[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xd2), temp0_41)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xc9), temp0_42)
                float temp0_47[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                float temp0_48[0x4] = _mm_sub_ps(temp0_44, zmm0)
                float temp0_49[0x4] = _mm_add_ps(temp0_48, temp0_48)
                float temp0_50[0x4] = _mm_mul_ps(temp0_47, temp0_49)
                float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0xd2), temp0_41)
                zmm0 = _mm_shuffle_ps(temp0_49, temp0_49, 0xc9)
                float temp0_54[0x4] = _mm_add_ps(temp0_50, temp0_40)
                float temp0_57[0x4] =
                    _mm_add_ps(_mm_sub_ps(temp0_52, _mm_mul_ps(zmm0, temp0_42)), temp0_54)
                temp0_58 = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
                zmm0.d = temp0_57.d f* temp0_57[0]
                temp0_58[0] = temp0_58[0] * temp0_58[0]
                float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
                temp0_59[0] = temp0_59[0] * temp0_59[0]
                temp0_58[0] = temp0_58[0] f+ zmm0.d
                temp0_58[0] = temp0_58[0] + temp0_59[0]
            
            if (not(zmm8[0] < 0f) && temp0_58[0] <= zmm8[0])
                i_2 = i_1
            else
                float zmm3[0x4] = *r12
                float zmm4[0x4] = (*r12)[1]
                zmm1 = (*r12)[2]
                float zmm2[0x4] = *(*rcx_5 + r14_1 + 0x10)
                zmm3[0] = zmm3[0] - zmm2[0]
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm4[0] = zmm4[0] f- zmm0.d
                float temp0_61[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1[0] = zmm1[0] - temp0_61[0]
                zmm3[0] = zmm3[0] * zmm3[0]
                zmm4[0] = zmm4[0] * zmm4[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm4[0] = zmm4[0] + zmm3[0]
                zmm4[0] = zmm4[0] + zmm1[0]
                
                if (zmm4[0] >= zmm7[0])
                    i_2 = i_1
                else
                    i_2 = i
                    i_1 = i
                    zmm7 = zmm4
        
        rdx += 0xc
        i += 1
        r14_1 = &r14_1[3]
        var_108_1 = rdx
        rax_10 = zx.q(arg_8)
    while (i s< *((sx.q(*(r13 + 0x494)) << 4) + r13 + 0x458))
    
    rbx = arg4
    
    if (i_2 != 0xffffffff)
        int64_t i_3 = sx.q(i_2)
        
        if (rbx != 0)
            float (* rdi_3)[0x4] = i_3 * 0x30 + *rcx_5
            float (* rcx_10)[0x4] = var_158
            zmm5 = rdi_3[2]
            float zmm14[0x4] = rcx_10[2]
            zmm6 = *rcx_10
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm5, zmm14), data_143f3b8f0, 1)) == 0)
                float temp0_194[0x4] = _mm_mul_ps(rdi_3[1], zmm14)
                float temp0_195[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float temp0_196[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                float temp0_197[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_194, temp0_194, 0xc9), temp0_196)
                float temp0_202[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_194, temp0_194, 0xd2), temp0_195), zmm0)
                float temp0_203[0x4] = _mm_add_ps(temp0_202, temp0_202)
                float temp0_204[0x4] = _mm_mul_ps(temp0_197, temp0_203)
                zmm0 = _mm_shuffle_ps(temp0_203, temp0_203, 0xc9)
                float temp0_207[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_203, temp0_203, 0xd2), temp0_195)
                zmm0 = _mm_mul_ps(zmm0, temp0_196)
                float temp0_209[0x4] = _mm_add_ps(temp0_204, temp0_194)
                zmm5 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_207, zmm0), temp0_209), 
                    rcx_10[1])
            else
                float zmm9[0x4] = rcx_10[1]
                float temp0_65[0x4] = _mm_add_ps(zmm6, zmm6)
                zmm0 = _mm_shuffle_ps(zmm6, zmm6, 4)
                float temp0_67[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float zmm12[0x4] = data_143f3b870
                float temp0_68[0x4] = _mm_mul_ps(temp0_65, zmm6)
                float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0x29), zmm0)
                float temp0_71[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x12)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0x1a), 
                    _mm_shuffle_ps(temp0_68, temp0_68, 1))
                float temp0_76[0x4] = _mm_mul_ps(temp0_71, _mm_shuffle_ps(zmm6, zmm6, 0xff))
                float temp0_77[0x4] = _mm_add_ps(temp0_76, temp0_70)
                float temp0_78[0x4] = _mm_sub_ps(temp0_70, temp0_76)
                float temp0_79[0x4] = _mm_mul_ps(temp0_77, zmm14)
                float temp0_80[0x4] = _mm_mul_ps(temp0_67, temp0_78)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm12, zmm0), zmm14), 
                    data_143f3b880)
                zmm0 = _mm_shuffle_ps(temp0_80, zmm1, 0x32)
                float temp0_86[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_79, zmm1, 0), zmm0, 0x82)
                zmm0 = _mm_shuffle_ps(temp0_79, zmm1, 0x31)
                float temp0_89[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_80, zmm1, 0x10), zmm0, 0x88)
                float temp0_91[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_79, temp0_80, 0x12), zmm1, 0xe8)
                zmm1 = *rdi_3
                zmm0.q = zmm9 u>> 0x40
                float temp0_92[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_93[0x4] = _mm_shuffle_ps(zmm9, zmm0, 0xc4)
                zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_95[0x4] = _mm_mul_ps(temp0_92, zmm1)
                float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0x29), zmm0)
                float temp0_98[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                zmm0 = _mm_shuffle_ps(temp0_95, temp0_95, 0x1a)
                float temp0_101[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0x12), temp0_98)
                zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_95, temp0_95, 1))
                float temp0_104[0x4] = _mm_add_ps(temp0_101, temp0_97)
                float temp0_105[0x4] = _mm_sub_ps(temp0_97, temp0_101)
                float temp0_106[0x4] = _mm_sub_ps(zmm12, zmm0)
                float temp0_107[0x4] = _mm_mul_ps(temp0_104, zmm5)
                float temp0_108[0x4] = __mulps_xmmps_memps(temp0_106, rdi_3[2])
                float temp0_110[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_105)
                zmm1 = __andps_xmmxud_memxud(temp0_108, data_143f3b880)
                float temp0_114[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_107, zmm1, 0), 
                    _mm_shuffle_ps(temp0_110, zmm1, 0x32), 0x82)
                float temp0_115[0x4] = _mm_shuffle_ps(temp0_110, zmm1, 0x10)
                float temp0_116[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0x55)
                float temp0_118[0x4] =
                    _mm_shuffle_ps(temp0_115, _mm_shuffle_ps(temp0_107, zmm1, 0x31), 0x88)
                float temp0_119[0x4] = _mm_mul_ps(temp0_116, temp0_89)
                float temp0_120[0x4] = _mm_shuffle_ps(temp0_107, temp0_110, 0x12)
                zmm5 = rdi_3[1]
                float temp0_121[0x4] = _mm_shuffle_ps(temp0_120, zmm1, 0xe8)
                float temp0_123[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0xaa), temp0_91)
                zmm0.q = zmm5 u>> 0x40
                float temp0_124[0x4] = _mm_shuffle_ps(zmm5, zmm0, 0xc4)
                zmm0 = _mm_shuffle_ps(temp0_114, temp0_114, 0)
                float temp0_127[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0xff), temp0_93)
                float temp0_129[0x4] = _mm_add_ps(temp0_119, _mm_mul_ps(zmm0, temp0_86))
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0), temp0_86)
                float temp0_132[0x4] = _mm_add_ps(temp0_129, temp0_123)
                float temp0_134[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0xaa), temp0_91)
                float temp0_135[0x4] = _mm_add_ps(temp0_132, temp0_127)
                float temp0_137[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0x55), temp0_89)
                float temp0_138[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xff)
                float var_148[0x4] = temp0_135
                float temp0_139[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0x55)
                float temp0_140[0x4] = _mm_add_ps(temp0_137, zmm0)
                float temp0_141[0x4] = _mm_mul_ps(temp0_139, temp0_89)
                float temp0_142[0x4] = _mm_mul_ps(temp0_138, temp0_93)
                zmm0 = _mm_shuffle_ps(temp0_121, temp0_121, 0)
                float temp0_144[0x4] = _mm_add_ps(temp0_140, temp0_134)
                zmm0 = _mm_mul_ps(zmm0, temp0_86)
                float temp0_147[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_121, temp0_121, 0xaa), temp0_91)
                float temp0_148[0x4] = _mm_add_ps(temp0_144, temp0_142)
                float temp0_149[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xff)
                float temp0_150[0x4] = _mm_add_ps(temp0_141, zmm0)
                float temp0_151[0x4] = _mm_mul_ps(temp0_149, temp0_93)
                zmm0 = _mm_shuffle_ps(temp0_124, temp0_124, 0)
                int96_t var_138_1 = temp0_148[0].12
                float temp0_153[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0x55)
                float temp0_154[0x4] = _mm_add_ps(temp0_150, temp0_147)
                float temp0_155[0x4] = _mm_mul_ps(temp0_153, temp0_89)
                float temp0_157[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xaa), temp0_91)
                zmm0 = _mm_mul_ps(zmm0, temp0_86)
                float temp0_159[0x4] = _mm_add_ps(temp0_154, temp0_151)
                float temp0_161[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xff), temp0_93)
                float temp0_162[0x4] = _mm_add_ps(temp0_155, zmm0)
                int96_t var_128_1 = temp0_159[0].12
                int96_t var_118_1 = _mm_add_ps(_mm_add_ps(temp0_162, temp0_157), temp0_161)[0].12
                int128_t zmm12_1
                int64_t zmm13_1
                float zmm14_1[0x4]
                float zmm15_1[0x4]
                zmm12_1, zmm13_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_148, 0x322bcc77)
                float zmm2_1[0x4] = var_148[0]
                zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, _mm_mul_ps(rdi_3[2], zmm14_1), 2), 
                    data_143f3b8e0 ^ zmm12_1) ^ data_143f3b8e0
                zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                float zmm0_1[0x4] = var_148[2]
                float zmm1_1 = var_148[1] * zmm15_1[0]
                zmm0_1[0] = zmm0_1[0] * zmm15_1[0]
                var_148[0] = zmm2_1[0]
                float temp0_168[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                var_148[1] = zmm1_1
                zmm1_1 = var_138_1:4.d * temp0_168[0]
                var_148[2] = zmm0_1[0]
                zmm0_1 = var_138_1:8.d
                zmm0_1[0] = zmm0_1[0] * temp0_168[0]
                float zmm3_1 = var_138_1.d * temp0_168[0]
                zmm2_1 = var_128_1.d
                var_138_1:4.d = zmm1_1
                var_138_1:8.d = zmm0_1[0]
                zmm0_1 = var_128_1:8.d
                float temp0_169[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                zmm1_1 = var_128_1:4.d * temp0_169[0]
                zmm0_1[0] = zmm0_1[0] * temp0_169[0]
                zmm2_1[0] = zmm2_1[0] * temp0_169[0]
                var_128_1:4.d = zmm1_1
                var_128_1:8.d = zmm0_1[0]
                var_138_1.d = zmm3_1
                var_128_1.d = zmm2_1[0]
                sub_14077e4a0(&var_158, &var_148)
                float zmm6_1[0x4] = var_158.o
                zmm5 = data_143f3b8d0
                float temp0_170[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                arg_8.d = 0x322bcc77
                float temp0_172[0x4] =
                    _mm_add_ps(temp0_170, _mm_shuffle_ps(temp0_170, temp0_170, 0x4e))
                float temp0_174[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_172, temp0_172, 0x39), temp0_172)
                float temp0_175[0x4] = _mm_rsqrt_ps(temp0_174)
                float temp0_176[0x4] = _mm_mul_ps(temp0_174, zmm5)
                float temp0_181[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_175, temp0_175), temp0_176)), 
                        temp0_175), 
                    temp0_175)
                float temp0_184[0x4] =
                    _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_181, temp0_181), temp0_176))
                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_174, 2)
                float temp0_188[0x4] = _mm_add_ps(_mm_mul_ps(temp0_184, temp0_181), temp0_181)
                float temp0_189[0x4] = _mm_unpacklo_ps(var_118_1:4.d, zmm13_1)
                var_158.o = _mm_and_ps(_mm_mul_ps(temp0_188, zmm6_1) ^ data_143f3b8c0, zmm0)
                    ^ data_143f3b8c0
                zmm5 =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_1.d, var_118_1:8.d.q), temp0_189[0].q)
            
            int32_t var_150_1 = _mm_shuffle_ps(zmm5, zmm5, 0xaa).d
            *rbx = (_mm_unpacklo_ps(zmm5, _mm_shuffle_ps(zmm5, zmm5, 0x55)[0].q)).q
            rbx[1].d = var_150_1
        
        *arg2 = *(*(*(arg1 + 0x430) + 0x1a8) + i_3 * 0xc)
        return arg2
    
    r14 = arg2

if (rbx != 0)
    *rbx = data_143dbb1f8.q
    rbx[1].d = data_143dbb200

*r14 = 0
return r14
