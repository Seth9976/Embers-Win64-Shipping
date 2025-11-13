// 函数: sub_1417a4870
// 地址: 0x1417a4870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2[1].d)
void* r10 = *arg2
float zmm6[0x4] = data_14399f668
int64_t r8 = r9 * 3
int64_t rdx = *(r10 + 0x3c8)
float zmm8[0x4] = *(rdx + (r8 << 2))
float zmm7[0x4] = *((r9 << 4) + *(r10 + 0x3e0))
int64_t* rax_3 = *arg1
float temp0[0x4] = _mm_unpacklo_ps(*(rdx + (r8 << 2) + 4), 0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm8, (*(rdx + (r8 << 2) + 8)).q)
uint128_t zmm0 = data_14399f670
int32_t* rcx = *rax_3
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm6, zmm0.q)
int32_t r8_1 = rcx[4]
int64_t rax_4 = sx.q(*rcx)
int64_t rdx_1 = *(rcx + 8)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
void* rax_6

if (r8_1 == 1)
    rax_6 = rax_4 * 0xe0 + *(rdx_1 + 0x10)
else if (r8_1 != 2)
    rax_6 = rax_4 * 0x140 + *(rdx_1 + 0x30)
else
    rax_6 = rax_4 * 0xe0 + *(rdx_1 + 0x20)

uint128_t zmm4 = zx.o(*(rax_6 + 0x90))
int32_t rax_10 = *(rax_6 + 0x98)
float temp0_6[0x4] = __mulps_xmmps_memps(zmm7, data_143ef8270)
float zmm2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
uint128_t zmm5 = _mm_unpacklo_ps(zmm4, rax_10[0].q)
float temp0_9[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xd2)
zmm5 = _mm_unpacklo_ps(zmm5, temp0_9[0].q)
zmm4 = _mm_rcp_ps(temp0_5)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
zmm5 = _mm_sub_ps(zmm5, temp0_2)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
zmm5 = __andps_xmmxud_memxud(zmm5, data_143ef7f30)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_10)
float temp0_21[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_13), zmm0)
zmm0 = _mm_mul_ps(zmm4, zmm4)
zmm4 = _mm_add_ps(zmm4, zmm4)
float temp0_24[0x4] = _mm_add_ps(temp0_21, temp0_21)
zmm0 = _mm_mul_ps(zmm0, temp0_5)
float temp0_26[0x4] = _mm_mul_ps(temp0_15, temp0_24)
zmm4 = _mm_sub_ps(zmm4, zmm0)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xd2), temp0_13)
float temp0_30[0x4] = _mm_add_ps(temp0_26, zmm5)
zmm0 = _mm_mul_ps(zmm4, zmm4)
zmm4 = _mm_add_ps(zmm4, zmm4)
zmm0 = _mm_mul_ps(zmm0, temp0_5)
float temp0_35[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(temp0_5, data_143ef8260), data_143ef8250, 2)
zmm4 = _mm_sub_ps(zmm4, zmm0)
zmm0 = _mm_shuffle_ps(temp0_24, temp0_24, 0xc9)
zmm2 = data_1439b8e64
float temp0_39[0x4] = _mm_sub_ps(temp0_29, _mm_mul_ps(zmm0, temp0_10))
zmm6 = _mm_and_ps(temp0_35, zx.o(0) ^ zmm4) ^ zmm4
float zmm13[0x4] = _mm_mul_ps(_mm_add_ps(temp0_39, temp0_30), zmm6)
zmm0 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
int32_t var_1a0_1 = zmm0.d
int32_t var_118 = zmm0.d
float temp0_44[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
zmm0 = _mm_unpacklo_ps(zmm13, temp0_44[0].q)
uint64_t var_1d8 = zmm0.q
uint64_t var_1cc = zmm0.q
zmm0.d = zmm13.d f- zmm2[0]
float var_108 = temp0_44[0]
float zmm1[0x4] = var_1d8:4.d
zmm1[0] = zmm1[0] - zmm2[0]
var_1d8.d = zmm0.d
zmm0.d = var_1a0_1.d f- zmm2[0]
var_1d8:4.d = zmm1[0]
int32_t var_1d0_1 = zmm0.d
zmm1 = var_1cc:4.d
zmm0.d = zmm2.d f+ zmm13[0]
zmm1[0] = zmm1[0] + zmm2[0]
var_1cc.d = zmm0.d
var_1cc:4.d = zmm1[0]
zmm0.d = var_1a0_1.d f+ zmm2[0]
int32_t var_1c4_1 = zmm0.d
float (* result)[0x4] = *(r10 + 0x488)
void* rcx_1 = *(result + (r9 << 3))

if (rcx_1 != 0)
    int64_t* var_148
    sub_141736130(rcx_1, &var_148, &var_1d8, r9.b)
    int64_t* r12_1 = var_148
    int32_t var_140
    result = &r12_1[sx.q(var_140)]
    float (* result_2)[0x4] = result
    
    if (r12_1 != result)
        int64_t* rdx_3 = nullptr
        uint32_t zmm14[0x4] = data_143ef7f30
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        float zmm10[0x4]
        float var_88_1[0x4] = zmm10
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        float zmm15[0x4]
        float var_d8_1[0x4] = zmm15
        
        do
            result = *r12_1
            int64_t* result_4 = nullptr
            
            if ((*result)[3].b u>= 3)
                result_4 = result
            
            if (result_4 != 0)
                int64_t r10_1 = sx.q(result_4[1].d)
                void* r9_1 = *result_4
                float (* r8_3)[0x4] = *(*(r9_1 + 0x4b8) + (r10_1 << 3))
                
                if (r8_3 != 0)
                    int64_t* rax_14 = r8_3[3][0].q
                    
                    if (rax_14 != 0 && *(rax_14 + 0xc) u>= 3)
                        rdx_3 = rax_14
                
                float zmm0_1[0x4]
                float zmm1_1[0x4]
                float zmm2_1[0x4]
                
                if (rdx_3 == 0)
                    int64_t rbx_2 = *(r9_1 + 0x4d0)
                    void var_ec
                    result = sub_14173e060(**arg1, &var_ec)
                    zmm0_1 = (*result)[1]
                    zmm2_1 = *result
                    zmm1_1 = (*result)[2]
                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                    float temp0_254[0x4] = _mm_sqrt_ss(0, zmm2_1[0])
                    temp0_254[0] = temp0_254[0] f+ *(rbx_2 + (r10_1 << 2))
                    *(rbx_2 + (r10_1 << 2)) = temp0_254[0]
                    rdx_3 = nullptr
                else
                    zmm1_1 = data_143ef8240
                    zmm15 = r8_3[2]
                    float var_128_1[0x4] = zmm1_1
                    float (* rcx_4)[0x4] = sx.q(rdx_3[1].d) * 0x30 + *(*rdx_3 + 0x440)
                    zmm6 = rcx_4[2]
                    float zmm3[0x4]
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm6), zmm1_1, 1)) == 0)
                        float zmm4_1[0x4] = *rcx_4
                        zmm2_1 = *r8_3
                        zmm3 = r8_3[1]
                        float temp0_178[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                        float temp0_180[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), temp0_178)
                        float temp0_181[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                        float temp0_182[0x4] = _mm_mul_ps(zmm3, zmm6)
                        float temp0_183[0x4] = __mulps_xmmps_memps(temp0_180, data_143ef7f10)
                        float temp0_184[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                        zmm12 = _mm_mul_ps(zmm6, zmm15)
                        float temp0_187[0x4] = _mm_add_ps(temp0_183, _mm_mul_ps(temp0_184, zmm2_1))
                        float temp0_189[0x4] =
                            _mm_mul_ps(temp0_181, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
                        float temp0_192[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), 
                            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
                        float temp0_193[0x4] = __mulps_xmmps_memps(temp0_189, data_143ef7f00)
                        float temp0_194[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                        float temp0_195[0x4] = __mulps_xmmps_memps(temp0_192, data_143ef7ef0)
                        float temp0_196[0x4] = _mm_add_ps(temp0_187, temp0_193)
                        float temp0_197[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                        float temp0_199[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xd2), temp0_197)
                        zmm7 = _mm_add_ps(temp0_196, temp0_195)
                        float temp0_203[0x4] = _mm_sub_ps(temp0_199, 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xc9), temp0_194))
                        float temp0_204[0x4] = _mm_add_ps(temp0_203, temp0_203)
                        float temp0_205[0x4] = _mm_mul_ps(temp0_184, temp0_204)
                        float temp0_207[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0xd2), temp0_197)
                        float temp0_208[0x4] = _mm_shuffle_ps(temp0_204, temp0_204, 0xc9)
                        float temp0_209[0x4] = _mm_add_ps(temp0_205, temp0_182)
                        zmm8 = __addps_xmmps_memps(
                            _mm_add_ps(_mm_sub_ps(temp0_207, _mm_mul_ps(temp0_208, temp0_194)), 
                                temp0_209), 
                            rcx_4[1])
                    else
                        zmm1_1 = *rcx_4
                        zmm10 = data_143ef7f20
                        zmm8 = rcx_4[1]
                        float temp0_49[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                        float temp0_50[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                        float temp0_51[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                        _mm_mul_ps(zmm6, zmm15)
                        float temp0_53[0x4] = _mm_mul_ps(temp0_49, zmm1_1)
                        float temp0_55[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0x29), temp0_51)
                        float temp0_56[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                        float temp0_57[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x1a)
                        float temp0_59[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0x12), temp0_56)
                        float temp0_61[0x4] =
                            _mm_add_ps(temp0_57, _mm_shuffle_ps(temp0_53, temp0_53, 1))
                        float temp0_62[0x4] = _mm_add_ps(temp0_59, temp0_55)
                        float temp0_63[0x4] = _mm_sub_ps(temp0_55, temp0_59)
                        zmm3 = *r8_3
                        float temp0_64[0x4] = _mm_sub_ps(zmm10, temp0_61)
                        float temp0_65[0x4] = _mm_mul_ps(temp0_62, zmm6)
                        float temp0_66[0x4] = _mm_mul_ps(temp0_50, temp0_63)
                        float temp0_67[0x4] = _mm_mul_ps(temp0_64, zmm6)
                        float temp0_68[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                        zmm1_1 = _mm_and_ps(temp0_67, zmm14)
                        float temp0_70[0x4] = _mm_shuffle_ps(temp0_66, zmm1_1, 0x32)
                        float temp0_72[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, zmm1_1, 0), temp0_70, 0x82)
                        float temp0_73[0x4] = _mm_shuffle_ps(temp0_65, zmm1_1, 0x31)
                        float temp0_75[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_66, zmm1_1, 0x10), temp0_73, 0x88)
                        float temp0_77[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, temp0_66, 0x12), zmm1_1, 0xe8)
                        float temp0_78[0x4] = _mm_add_ps(zmm3, zmm3)
                        zmm10[0].q = zmm8 u>> 0x40
                        float temp0_79[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                        float temp0_80[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                        float temp0_81[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x29)
                        float temp0_82[0x4] = _mm_mul_ps(temp0_78, zmm3)
                        float temp0_83[0x4] = _mm_mul_ps(temp0_68, temp0_81)
                        float temp0_84[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x12)
                        float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_84)
                        float temp0_89[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0x1a), 
                            _mm_shuffle_ps(temp0_82, temp0_82, 1))
                        float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_83)
                        float temp0_91[0x4] = _mm_sub_ps(temp0_83, temp0_86)
                        float temp0_92[0x4] = _mm_sub_ps(zmm10, temp0_89)
                        float temp0_93[0x4] = _mm_mul_ps(temp0_90, zmm15)
                        float temp0_94[0x4] = _mm_mul_ps(temp0_80, temp0_91)
                        zmm1_1 = _mm_and_ps(_mm_mul_ps(temp0_92, zmm15), zmm14)
                        float temp0_99[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_93, zmm1_1, 0), 
                            _mm_shuffle_ps(temp0_94, zmm1_1, 0x32), 0x82)
                        float temp0_100[0x4] = _mm_shuffle_ps(temp0_94, zmm1_1, 0x10)
                        float temp0_101[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0x55)
                        float temp0_103[0x4] =
                            _mm_shuffle_ps(temp0_100, _mm_shuffle_ps(temp0_93, zmm1_1, 0x31), 0x88)
                        float temp0_104[0x4] = _mm_mul_ps(temp0_101, temp0_75)
                        float temp0_105[0x4] = _mm_shuffle_ps(temp0_93, temp0_94, 0x12)
                        float zmm5_1[0x4] = r8_3[1]
                        float temp0_106[0x4] = _mm_shuffle_ps(temp0_105, zmm1_1, 0xe8)
                        float temp0_108[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0xaa), temp0_77)
                        zmm10[0].q = zmm5_1 u>> 0x40
                        float temp0_109[0x4] = _mm_shuffle_ps(zmm5_1, zmm10, 0xc4)
                        float temp0_110[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0)
                        float temp0_112[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0xff), temp0_79)
                        float temp0_114[0x4] =
                            _mm_add_ps(temp0_104, _mm_mul_ps(temp0_110, temp0_72))
                        float temp0_116[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0), temp0_72)
                        float temp0_117[0x4] = _mm_add_ps(temp0_114, temp0_108)
                        float temp0_119[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xaa), temp0_77)
                        float temp0_120[0x4] = _mm_add_ps(temp0_117, temp0_112)
                        float temp0_122[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0x55), temp0_75)
                        float temp0_123[0x4] = _mm_shuffle_ps(temp0_103, temp0_103, 0xff)
                        float var_198[0x4] = temp0_120
                        float temp0_124[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0x55)
                        float temp0_125[0x4] = _mm_add_ps(temp0_122, temp0_116)
                        float temp0_126[0x4] = _mm_mul_ps(temp0_124, temp0_75)
                        float temp0_127[0x4] = _mm_mul_ps(temp0_123, temp0_79)
                        float temp0_128[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0)
                        float temp0_129[0x4] = _mm_add_ps(temp0_125, temp0_119)
                        float temp0_130[0x4] = _mm_mul_ps(temp0_128, temp0_72)
                        float temp0_132[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0xaa), temp0_77)
                        float temp0_133[0x4] = _mm_add_ps(temp0_129, temp0_127)
                        float temp0_134[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0xff)
                        float temp0_135[0x4] = _mm_add_ps(temp0_126, temp0_130)
                        float temp0_136[0x4] = _mm_mul_ps(temp0_134, temp0_79)
                        float temp0_137[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0)
                        int96_t var_188_1 = temp0_133[0].12
                        float temp0_138[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0x55)
                        float temp0_139[0x4] = _mm_add_ps(temp0_135, temp0_132)
                        float temp0_140[0x4] = _mm_mul_ps(temp0_138, temp0_75)
                        float temp0_142[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_109, temp0_109, 0xaa), temp0_77)
                        float temp0_143[0x4] = _mm_mul_ps(temp0_137, temp0_72)
                        float temp0_144[0x4] = _mm_add_ps(temp0_139, temp0_136)
                        float temp0_146[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_109, temp0_109, 0xff), temp0_79)
                        float temp0_147[0x4] = _mm_add_ps(temp0_140, temp0_143)
                        int96_t var_178_1 = temp0_144[0].12
                        int96_t var_168_1 =
                            _mm_add_ps(_mm_add_ps(temp0_147, temp0_142), temp0_146)[0].12
                        zmm10, zmm12, zmm13, zmm14 = sub_1407740e0(&var_198, 0x322bcc77)
                        float zmm2_2[0x4] = var_198[0]
                        float zmm1_2 = var_198[1]
                        float zmm4_2[0x4] =
                            _mm_and_ps(_mm_cmpeq_ps(var_128_1, zmm12, 2), data_143ef8230 ^ zmm10)
                            ^ data_143ef8230
                        zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                        uint32_t zmm0_2[0x4] = var_198[2]
                        zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
                        zmm1_2 = zmm1_2 * zmm4_2[0]
                        var_198[0] = zmm2_2[0]
                        float temp0_152[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                        var_198[2] = zmm0_2[0]
                        zmm0_2 = var_188_1:8.d
                        zmm0_2[0] = zmm0_2[0] f* temp0_152[0]
                        var_198[1] = zmm1_2
                        zmm1_2 = var_188_1:4.d * temp0_152[0]
                        float zmm3_1 = var_188_1.d * temp0_152[0]
                        zmm2_2 = var_178_1.d
                        float temp0_153[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                        var_188_1:8.d = zmm0_2[0]
                        zmm0_2 = var_178_1:8.d
                        var_188_1:4.d = zmm1_2
                        zmm0_2[0] = zmm0_2[0] f* temp0_153[0]
                        zmm2_2[0] = zmm2_2[0] * temp0_153[0]
                        zmm1_2 = var_178_1:4.d * temp0_153[0]
                        var_178_1:8.d = zmm0_2[0]
                        var_188_1.d = zmm3_1
                        var_178_1.d = zmm2_2[0]
                        var_178_1:4.d = zmm1_2
                        uint32_t var_138[0x4]
                        sub_14077e4a0(&var_138, &var_198)
                        zmm5_1 = var_138
                        zmm7 = data_143ef7ee0
                        r10_1 = zx.q(result_4[1].d)
                        r9_1 = *result_4
                        float temp0_154[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                        float temp0_156[0x4] =
                            _mm_add_ps(temp0_154, _mm_shuffle_ps(temp0_154, temp0_154, 0x4e))
                        float temp0_158[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_156, temp0_156, 0x39), temp0_156)
                        float temp0_159[0x4] = _mm_rsqrt_ps(temp0_158)
                        float temp0_160[0x4] = _mm_mul_ps(temp0_158, zmm7)
                        float temp0_165[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm7, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_159, temp0_159), temp0_160)), 
                                temp0_159), 
                            temp0_159)
                        float temp0_168[0x4] = _mm_sub_ps(zmm7, 
                            _mm_mul_ps(_mm_mul_ps(temp0_165, temp0_165), temp0_160))
                        float temp0_170[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_158, 2)
                        float temp0_172[0x4] =
                            _mm_add_ps(_mm_mul_ps(temp0_168, temp0_165), temp0_165)
                        float temp0_173[0x4] = _mm_unpacklo_ps(var_168_1:4.d, 0)
                        zmm7 = _mm_and_ps(_mm_mul_ps(temp0_172, zmm5_1) ^ data_143ef7ed0, temp0_170)
                            ^ data_143ef7ed0
                        zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_168_1.d, var_168_1:8.d[0].q), 
                            temp0_173[0].q)
                        var_138 = zmm7
                    float temp0_214[0x4] = __mulps_xmmps_memps(zmm7, data_143ef8270)
                    float temp0_217[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, var_118[0].q), 
                        _mm_unpacklo_ps(var_108, 0)[0].q)
                    float temp0_218[0x4] = _mm_shuffle_ps(temp0_214, temp0_214, 0xd2)
                    float temp0_219[0x4] = _mm_sub_ps(temp0_217, zmm8)
                    float temp0_220[0x4] = _mm_rcp_ps(zmm12)
                    zmm6 = _mm_and_ps(temp0_219, zmm14)
                    float temp0_222[0x4] = _mm_shuffle_ps(temp0_214, temp0_214, 0xc9)
                    float temp0_223[0x4] = _mm_shuffle_ps(temp0_214, temp0_214, 0xff)
                    float temp0_225[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_218)
                    float temp0_228[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_222), temp0_225)
                    float temp0_229[0x4] = _mm_mul_ps(temp0_220, temp0_220)
                    float temp0_230[0x4] = _mm_add_ps(temp0_220, temp0_220)
                    float temp0_231[0x4] = _mm_add_ps(temp0_228, temp0_228)
                    float temp0_232[0x4] = _mm_mul_ps(temp0_229, zmm12)
                    float temp0_233[0x4] = _mm_mul_ps(temp0_223, temp0_231)
                    float temp0_234[0x4] = _mm_sub_ps(temp0_230, temp0_232)
                    float temp0_236[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0xd2), temp0_222)
                    float temp0_237[0x4] = _mm_add_ps(temp0_233, zmm6)
                    float temp0_238[0x4] = _mm_mul_ps(temp0_234, temp0_234)
                    float temp0_239[0x4] = _mm_add_ps(temp0_234, temp0_234)
                    float temp0_240[0x4] = _mm_mul_ps(temp0_238, zmm12)
                    float temp0_242[0x4] = __cmpps_xmmps_memps_immb(
                        __andps_xmmxud_memxud(zmm12, data_143ef8260), data_143ef8250, 2)
                    float temp0_243[0x4] = _mm_sub_ps(temp0_239, temp0_240)
                    float temp0_244[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0xc9)
                    zmm2_1 = data_1439b8e64
                    float temp0_246[0x4] = _mm_sub_ps(temp0_236, _mm_mul_ps(temp0_244, temp0_218))
                    zmm12 = _mm_and_ps(temp0_242, zx.o(0) ^ temp0_243) ^ temp0_243
                    float temp0_249[0x4] = _mm_mul_ps(_mm_add_ps(temp0_246, temp0_237), zmm12)
                    float var_1a0_2 = _mm_shuffle_ps(temp0_249, temp0_249, 0xaa)[0]
                    float temp0_252[0x4] =
                        _mm_unpacklo_ps(temp0_249, _mm_shuffle_ps(temp0_249, temp0_249, 0x55)[0].q)
                    int64_t var_1c0 = temp0_252.q
                    zmm1_1 = var_1c0:4.d
                    int64_t var_1b4_1 = temp0_252.q
                    zmm1_1[0] = zmm1_1[0] - zmm2_1[0]
                    temp0_249[0] = temp0_249[0] - zmm2_1[0]
                    temp0_249[0] = temp0_249[0] + zmm2_1[0]
                    var_1c0:4.d = zmm1_1[0]
                    zmm1_1 = var_1a0_2
                    var_1c0.d = temp0_249[0]
                    zmm1_1[0] = zmm1_1[0] + zmm2_1[0]
                    zmm0_1 = var_1a0_2
                    zmm0_1[0] = zmm0_1[0] - zmm2_1[0]
                    var_1b4_1.d = temp0_249[0]
                    float var_1ac_2 = zmm1_1[0]
                    float var_1b8_2 = zmm0_1[0]
                    zmm0_1 = var_1b4_1:4.d
                    zmm0_1[0] = zmm0_1[0] + zmm2_1[0]
                    var_1b4_1:4.d = zmm0_1[0]
                    result = *(r9_1 + 0x488)
                    void* rcx_8 = *(result + (sx.q(r10_1.d) << 3))
                    
                    if (rcx_8 == 0)
                        rdx_3 = nullptr
                    else
                        float (** var_158)[0x4]
                        sub_141736130(rcx_8, &var_158, &var_1c0, r9_1.b)
                        float (** rsi_1)[0x4] = var_158
                        rdx_3 = nullptr
                        int32_t result_1
                        result = sx.q(result_1)
                        int64_t r15_1 = 0
                        void* rcx_9 = &rsi_1[result]
                        uint64_t r14_4 = (rcx_9 - rsi_1 + 7) u>> 3
                        
                        if (rsi_1 u> rcx_9)
                            r14_4 = 0
                        
                        if (r14_4 != 0)
                            do
                                result = *rsi_1
                                int64_t* result_3 = nullptr
                                
                                if ((*result)[3].b u>= 3)
                                    result_3 = result
                                
                                if (result_3 != 0)
                                    int64_t rdi_2 = sx.q(result_3[1].d)
                                    int64_t rbx_1 = *(*result_3 + 0x4d0)
                                    void var_f8
                                    result = sub_14173e060(**arg1, &var_f8)
                                    rdx_3 = nullptr
                                    zmm0_1 = (*result)[1]
                                    zmm2_1 = *result
                                    zmm1_1 = (*result)[2]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    float temp0_253[0x4] = _mm_sqrt_ss(0, zmm2_1[0])
                                    temp0_253[0] = temp0_253[0] f+ *(rbx_1 + (rdi_2 << 2))
                                    *(rbx_1 + (rdi_2 << 2)) = temp0_253[0]
                                
                                rsi_1 = &rsi_1[1]
                                r15_1 += 1
                            while (r15_1 != r14_4)
                            
                            rsi_1 = var_158
                        
                        if (rsi_1 == 0)
                            zmm14 = data_143ef7f30
                        else
                            result = sub_140a74f90(rsi_1)
                            zmm14 = data_143ef7f30
                            rdx_3 = nullptr
            
            r12_1 = &r12_1[1]
        while (r12_1 != result_2)
        
        r12_1 = var_148
    
    if (r12_1 != 0)
        return sub_140a74f90(r12_1)

return result
