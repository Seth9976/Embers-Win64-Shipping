// 函数: sub_14223d3c0
// 地址: 0x14223d3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
char var_1f8 = 0
uint64_t rax_2 = *arg1
int64_t rcx = sx.q(*(rax_2 + 0x7a0))
char var_1f7
float var_1a8[0x4]
float var_198[0x4]
int128_t* rax_5

if (rcx.d s< 0 || rcx.d s>= *(rax_2 + 0x808))
label_14223d458:
    arg2.o = data_143dbb0d0
    var_1a8 = data_143dbb0c0
    var_1f7 = 0
    rax_5 = &var_1a8
    float var_188_1[0x4] = data_143dbb0e0
    var_198 = arg2.o
else
    void* rbx_1 = *(*(rax_2 + 0x800) + (rcx << 3))
    
    if (sub_142222800(rbx_1, arg2).b == 0)
        goto label_14223d458
    
    if (sub_14221b2f0(rbx_1).b == 0)
        goto label_14223d458
    
    int64_t* rcx_3 = *arg1
    var_1f7 = 1
    int64_t r9_1 = *rcx_3
    rax_5 = (*(r9_1 + 0x700))(rcx_3, &var_1a8, *(rcx_3[0x100] + (sx.q(rcx_3[0xf4].d) << 3)), r9_1)

int32_t i = 0
float var_108[0x4] = *rax_5
arg2.o = rax_5[1]
int128_t var_f8 = arg2.o
int64_t* result = arg1[1]
float var_e8[0x4] = rax_5[2]

if (result[1].d s> 0)
    int64_t rcx_4 = 0
    int128_t zmm13 = zx.o(0)
    float zmm14[0x4] = 0x3f800000
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    uint32_t zmm12[0x4]
    uint32_t var_98_1[0x4] = zmm12
    float zmm15[0x4]
    float var_c8_1[0x4] = zmm15
    int64_t var_1d8_1 = 0
    
    do
        uint64_t r14_1 = zx.q(*(*result + rcx_4))
        uint64_t r12_1 = r14_1 * 3
        int64_t r15_1 = sx.q(sub_142249710(*arg1[2], *(*(*(*arg1 + 0x430) + 0x1a8) + (r12_1 << 2))))
        char rax_9
        void* rbx_2
        
        if (r15_1.d != 0xffffffff)
            rbx_2 = *(*(*arg1 + 0x800) + (r15_1 << 3))
            
            if (sub_142222800(rbx_2, arg2) == 0)
                rax_9 = 0
            else if (sub_14221b2f0(rbx_2) == 0)
                rax_9 = 0
            else
                rax_9 = 1
        
        float var_138[0x4]
        float zmm0[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        float zmm4[0x4]
        float zmm5[0x4]
        uint32_t zmm9[0x4]
        uint32_t zmm10[0x4]
        
        if (r15_1.d == 0xffffffff || rax_9 == 0)
            zmm12 = data_143f515c0
        label_14223d9e3:
            zmm11 = data_143f515b0
        label_14223d9eb:
            int64_t* rcx_24 = arg1[8]
            
            if (r14_1.d s< rcx_24[1].d)
                if (r14_1.d != 0)
                    void* rax_25 = *arg1
                    
                    if ((*(rax_25 + 0x719) & 8) != 0 || r15_1.d == 0xffffffff)
                        goto label_14223da7a
                    
                    void* rbx_4 = *(*(rax_25 + 0x800) + (r15_1 << 3))
                    char rax_27 = sub_142222800(rbx_4, arg2)
                    char rax_28
                    
                    if (rax_27 != 0)
                        rax_28 = sub_14221b2f0(rbx_4)
                    
                    if (rax_27 != 0 && rax_28 != 0)
                        zmm12 = data_143f515c0
                        zmm11 = data_143f515b0
                    label_14223da7a:
                        int64_t* r8_7 = arg1[4]
                        
                        if (r14_1.d s< r8_7[1].d)
                            arg2.o = data_143f519a0
                            uint64_t rbx_6 = r14_1 * 6
                            int64_t* r9_3 = arg1[8]
                            float var_1b8_1[0x4] = arg2.o
                            int64_t rcx_30 = *r8_7
                            float (* rdx_13)[0x4] =
                                sx.q(*(*(*(*arg1 + 0x430) + 0x1a8) + (r12_1 << 2) + 8)) * 0x30
                                + *r9_3
                            zmm8 = *(rcx_30 + (rbx_6 << 3) + 0x20)
                            zmm6 = rdx_13[2]
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm8, zmm6), arg2.o, 1))
                                    == 0)
                                zmm4 = *rdx_13
                                zmm2 = *(rcx_30 + (rbx_6 << 3))
                                zmm3 = *(rcx_30 + (rbx_6 << 3) + 0x10)
                                float temp0_209[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                                arg2.o = zmm4
                                float temp0_211[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_209)
                                arg2.o = _mm_shuffle_ps(arg2.o, zmm4, 0x55)
                                float temp0_213[0x4] = _mm_mul_ps(zmm3, zmm6)
                                float temp0_214[0x4] =
                                    __mulps_xmmps_memps(temp0_211, data_143f51580)
                                float temp0_215[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                                zmm15 = _mm_mul_ps(zmm6, zmm8)
                                float temp0_218[0x4] =
                                    _mm_add_ps(temp0_214, _mm_mul_ps(temp0_215, zmm2))
                                arg2.o = _mm_mul_ps(arg2.o, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                                float temp0_223[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), 
                                    _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                                arg2.o = __mulps_xmmps_memps(arg2.o, data_143f51570)
                                float temp0_225[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                                float temp0_226[0x4] =
                                    __mulps_xmmps_memps(temp0_223, data_143f51560)
                                float temp0_227[0x4] = _mm_add_ps(temp0_218, arg2.o)
                                float temp0_228[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                                arg2.o = temp0_213
                                arg2.o = _mm_shuffle_ps(arg2.o, temp0_213, 0xd2)
                                arg2.o = _mm_mul_ps(arg2.o, temp0_228)
                                zmm6 = _mm_add_ps(temp0_227, temp0_226)
                                arg2.o = _mm_sub_ps(arg2.o, 
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_213, temp0_213, 0xc9), 
                                        temp0_225))
                                arg2.o = _mm_add_ps(arg2.o, arg2.o)
                                float temp0_236[0x4] = _mm_mul_ps(temp0_215, arg2.o)
                                float temp0_238[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(arg2.o, arg2.o, 0xd2), temp0_228)
                                float temp0_239[0x4] = _mm_shuffle_ps(arg2.o, arg2.o, 0xc9)
                                float temp0_240[0x4] = _mm_add_ps(temp0_236, temp0_213)
                                zmm7 = __addps_xmmps_memps(
                                    _mm_add_ps(
                                        _mm_sub_ps(temp0_238, _mm_mul_ps(temp0_239, temp0_225)), 
                                        temp0_240), 
                                    rdx_13[1])
                            else
                                zmm3 = *rdx_13
                                arg2.o = zmm3
                                float temp0_80[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                                arg2.o = _mm_add_ps(arg2.o, zmm3)
                                float temp0_82[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                                zmm15 = zmm8
                                zmm8 = rdx_13[1]
                                _mm_mul_ps(zmm15, zmm6)
                                float temp0_85[0x4] =
                                    _mm_mul_ps(temp0_82, _mm_shuffle_ps(arg2.o, arg2.o, 0x29))
                                float temp0_86[0x4] = _mm_mul_ps(arg2.o, zmm3)
                                arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0x12)
                                float temp0_89[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), arg2.o)
                                arg2.o = zmm11
                                float temp0_92[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_86, temp0_86, 0x1a), 
                                    _mm_shuffle_ps(temp0_86, temp0_86, 1))
                                zmm10 = _mm_add_ps(temp0_89, temp0_85)
                                float temp0_94[0x4] = _mm_sub_ps(temp0_85, temp0_89)
                                zmm3 = *(rcx_30 + (rbx_6 << 3))
                                arg2.o = _mm_sub_ps(arg2.o, temp0_92)
                                zmm10 = _mm_mul_ps(zmm10, zmm6)
                                float temp0_97[0x4] = _mm_mul_ps(temp0_80, temp0_94)
                                arg2.o = _mm_mul_ps(arg2.o, zmm6)
                                float temp0_99[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                                arg2.o = _mm_and_ps(arg2.o, zmm12)
                                float temp0_101[0x4] = _mm_shuffle_ps(temp0_97, arg2.o, 0x32)
                                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, arg2.o, 0), temp0_101, 
                                    0x82)
                                float temp0_104[0x4] = _mm_shuffle_ps(zmm10, arg2.o, 0x31)
                                float temp0_106[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_97, arg2.o, 0x10), temp0_104, 0x88)
                                zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, temp0_97, 0x12), 
                                    arg2.o, 0xe8)
                                arg2.o = zmm3
                                arg2.o = _mm_add_ps(arg2.o, zmm3)
                                zmm11[0].q = zmm8 u>> 0x40
                                float temp0_110[0x4] = _mm_shuffle_ps(zmm8, zmm11, 0xc4)
                                float temp0_111[0x4] = _mm_shuffle_ps(arg2.o, arg2.o, 0x29)
                                float temp0_112[0x4] = _mm_mul_ps(arg2.o, zmm3)
                                float temp0_113[0x4] = _mm_mul_ps(temp0_99, temp0_111)
                                zmm0 = *(rcx_30 + (rbx_6 << 3) + 0x20)
                                arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0x12)
                                float temp0_115[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
                                float temp0_117[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), arg2.o)
                                arg2.o = zmm11
                                float temp0_118[0x4] = _mm_add_ps(temp0_117, temp0_113)
                                float temp0_119[0x4] = _mm_sub_ps(temp0_113, temp0_117)
                                float temp0_120[0x4] = _mm_mul_ps(temp0_118, zmm0)
                                float temp0_123[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_112, temp0_112, 0x1a), 
                                    _mm_shuffle_ps(temp0_112, temp0_112, 1))
                                float temp0_124[0x4] = _mm_mul_ps(temp0_115, temp0_119)
                                arg2.o = _mm_sub_ps(arg2.o, temp0_123)
                                arg2.o =
                                    __mulps_xmmps_memps(arg2.o, *(rcx_30 + (rbx_6 << 3) + 0x20))
                                arg2.o = _mm_and_ps(arg2.o, zmm12)
                                float temp0_130[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_120, arg2.o, 0), 
                                    _mm_shuffle_ps(temp0_124, arg2.o, 0x32), 0x82)
                                float temp0_131[0x4] = _mm_shuffle_ps(temp0_124, arg2.o, 0x10)
                                float temp0_132[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0x55)
                                float temp0_134[0x4] = _mm_shuffle_ps(temp0_131, 
                                    _mm_shuffle_ps(temp0_120, arg2.o, 0x31), 0x88)
                                float temp0_135[0x4] = _mm_mul_ps(temp0_132, temp0_106)
                                float temp0_136[0x4] = _mm_shuffle_ps(temp0_120, temp0_124, 0x12)
                                zmm5 = *(rcx_30 + (rbx_6 << 3) + 0x10)
                                float temp0_137[0x4] = _mm_shuffle_ps(temp0_136, arg2.o, 0xe8)
                                arg2.o = temp0_130
                                arg2.o = _mm_shuffle_ps(arg2.o, temp0_130, 0xaa)
                                arg2.o = _mm_mul_ps(arg2.o, zmm10)
                                zmm11[0].q = zmm5 u>> 0x40
                                float temp0_140[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                                float temp0_141[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0)
                                float temp0_143[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_130, temp0_130, 0xff), temp0_110)
                                float temp0_145[0x4] =
                                    _mm_add_ps(temp0_135, _mm_mul_ps(temp0_141, zmm9))
                                float temp0_147[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_134, temp0_134, 0), zmm9)
                                float temp0_148[0x4] = _mm_add_ps(temp0_145, arg2.o)
                                arg2.o = temp0_134
                                arg2.o = _mm_shuffle_ps(arg2.o, temp0_134, 0xaa)
                                arg2.o = _mm_mul_ps(arg2.o, zmm10)
                                float temp0_151[0x4] = _mm_add_ps(temp0_148, temp0_143)
                                float temp0_153[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_134, temp0_134, 0x55), temp0_106)
                                float temp0_154[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xff)
                                var_1a8 = temp0_151
                                float temp0_155[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0x55)
                                float temp0_156[0x4] = _mm_add_ps(temp0_153, temp0_147)
                                float temp0_157[0x4] = _mm_mul_ps(temp0_155, temp0_106)
                                float temp0_158[0x4] = _mm_mul_ps(temp0_154, temp0_110)
                                float temp0_159[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0)
                                float temp0_160[0x4] = _mm_add_ps(temp0_156, arg2.o)
                                float temp0_161[0x4] = _mm_mul_ps(temp0_159, zmm9)
                                arg2.o = temp0_137
                                arg2.o = _mm_shuffle_ps(arg2.o, temp0_137, 0xaa)
                                arg2.o = _mm_mul_ps(arg2.o, zmm10)
                                float temp0_164[0x4] = _mm_add_ps(temp0_160, temp0_158)
                                float temp0_165[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xff)
                                float temp0_166[0x4] = _mm_add_ps(temp0_157, temp0_161)
                                float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_110)
                                float temp0_168[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0)
                                var_198 = temp0_164
                                float temp0_169[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0x55)
                                float temp0_170[0x4] = _mm_add_ps(temp0_166, arg2.o)
                                float temp0_171[0x4] = _mm_mul_ps(temp0_169, temp0_106)
                                arg2.o = temp0_140
                                arg2.o = _mm_shuffle_ps(arg2.o, temp0_140, 0xaa)
                                arg2.o = _mm_mul_ps(arg2.o, zmm10)
                                float temp0_174[0x4] = _mm_mul_ps(temp0_168, zmm9)
                                float temp0_175[0x4] = _mm_add_ps(temp0_170, temp0_167)
                                float temp0_177[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_140, temp0_140, 0xff), temp0_110)
                                float temp0_178[0x4] = _mm_add_ps(temp0_171, temp0_174)
                                int96_t var_188_3 = temp0_175[0].12
                                float temp0_179[0x4] = _mm_add_ps(temp0_178, arg2.o)
                                arg2.o = 0x322bcc77
                                int96_t var_178_1 = _mm_add_ps(temp0_179, temp0_177)[0].12
                                zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_1a8, arg2.o)
                                float zmm2_1[0x4] = var_1a8[0]
                                float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_1b8_1, zmm15, 2), 
                                    data_143f51990 ^ zmm11) ^ data_143f51990
                                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                                uint32_t zmm0_1[0x4] = var_1a8[2]
                                float zmm3_1 = var_198[0]
                                float zmm1_1 = var_1a8[1] * zmm4_1[0]
                                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                                var_1a8[0] = zmm2_1[0]
                                float temp0_183[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                                var_1a8[1] = zmm1_1
                                zmm1_1 = var_198[1] * temp0_183[0]
                                var_1a8[2] = zmm0_1[0]
                                zmm0_1 = var_198[2]
                                zmm0_1[0] = zmm0_1[0] f* temp0_183[0]
                                zmm3_1 = zmm3_1 * temp0_183[0]
                                zmm2_1 = var_188_3.d
                                float temp0_184[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                                var_198[1] = zmm1_1
                                var_198[2] = zmm0_1[0]
                                zmm0_1 = var_188_3:8.d
                                zmm1_1 = var_188_3:4.d * temp0_184[0]
                                zmm0_1[0] = zmm0_1[0] f* temp0_184[0]
                                zmm2_1[0] = zmm2_1[0] * temp0_184[0]
                                var_188_3:4.d = zmm1_1
                                var_188_3:8.d = zmm0_1[0]
                                var_198[0] = zmm3_1
                                var_188_3.d = zmm2_1[0]
                                uint32_t var_1c8[0x4]
                                sub_14077e4a0(&var_1c8, &var_1a8)
                                zmm5 = var_1c8
                                zmm6 = data_143f515a0
                                arg2.o = zmm5
                                r9_3 = arg1[8]
                                arg2.o = _mm_mul_ps(arg2.o, zmm5)
                                arg2.o = _mm_add_ps(arg2.o, _mm_shuffle_ps(arg2.o, arg2.o, 0x4e))
                                float temp0_189[0x4] =
                                    _mm_add_ps(_mm_shuffle_ps(arg2.o, arg2.o, 0x39), arg2.o)
                                arg2.o = _mm_rsqrt_ps(temp0_189)
                                float temp0_191[0x4] = _mm_mul_ps(temp0_189, zmm6)
                                float temp0_196[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6, 
                                            _mm_mul_ps(_mm_mul_ps(arg2.o, arg2.o), temp0_191)), 
                                        arg2.o), 
                                    arg2.o)
                                float temp0_199[0x4] = _mm_sub_ps(zmm6, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_196, temp0_196), temp0_191))
                                float temp0_201[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_189, 2)
                                float temp0_203[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_199, temp0_196), temp0_196)
                                float temp0_204[0x4] = _mm_unpacklo_ps(var_178_1:4.d, zmm13.q)
                                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_203, zmm5) ^ data_143f51590, 
                                    temp0_201) ^ data_143f51590
                                zmm7 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_178_1.d, var_178_1:8.d[0].q), 
                                    temp0_204[0].q)
                                var_1c8 = zmm6
                            
                            int64_t rax_36 = *r9_3
                            *(rax_36 + (rbx_6 << 3)) = zmm6
                            *(rax_36 + (rbx_6 << 3) + 0x10) = zmm7
                            *(rax_36 + (rbx_6 << 3) + 0x20) = zmm15
                            zmm5 = data_143f515a0
                            int64_t rcx_38 = *arg1[8]
                            zmm6 = *(rcx_38 + (rbx_6 << 3))
                            arg2.o = zmm6
                            arg2.o = _mm_mul_ps(arg2.o, zmm6)
                            arg2.o = _mm_add_ps(arg2.o, _mm_shuffle_ps(arg2.o, arg2.o, 0x4e))
                            float temp0_249[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(arg2.o, arg2.o, 0x39), arg2.o)
                            arg2.o = _mm_rsqrt_ps(temp0_249)
                            float temp0_251[0x4] = _mm_mul_ps(temp0_249, zmm5)
                            float temp0_256[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm5, 
                                        _mm_mul_ps(_mm_mul_ps(arg2.o, arg2.o), temp0_251)), 
                                    arg2.o), 
                                arg2.o)
                            float temp0_259[0x4] = _mm_sub_ps(zmm5, 
                                _mm_mul_ps(_mm_mul_ps(temp0_256, temp0_256), temp0_251))
                            float temp0_260[0x4] = _mm_cmpeq_ps(data_143f51a10, temp0_249, 2)
                            *(rcx_38 + (rbx_6 << 3)) = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_259, temp0_256), temp0_256), 
                                    zmm6) ^ data_143f51590, 
                                temp0_260) ^ data_143f51590
                    else if (var_1f7 != 0)
                        int64_t rbx_7 = *arg1[8]
                        float (* rax_35)[0x4]
                        rax_35, arg2, zmm13, zmm14 = sub_140ad7d70(
                            sub_142218c50(*(*(*arg1 + 0x800) + (r15_1 << 3)), &var_1a8, 1, 0), 
                            &var_138, &var_108)
                        uint64_t rcx_37 = r14_1 * 6
                        *(rbx_7 + (rcx_37 << 3)) = *rax_35
                        arg2.o = rax_35[1]
                        *(rbx_7 + (rcx_37 << 3) + 0x10) = arg2.o
                        *(rbx_7 + (rcx_37 << 3) + 0x20) = rax_35[2]
                else
                    int64_t* rax_23 = arg1[4]
                    
                    if (rax_23[1].d != r14_1.d)
                        float (* rax_24)[0x4] = *rax_23
                        float (* rcx_25)[0x4] = *rcx_24
                        *rcx_25 = *rax_24
                        arg2.o = rax_24[1]
                        rcx_25[1] = arg2.o
                        rcx_25[2] = rax_24[2]
        else
            sub_142218c50(rbx_2, &var_138, 1, 0)
            uint64_t rdx_7 = r14_1 << 6
            int64_t rcx_12 = *arg1[3]
            *(rdx_7 + rcx_12) = var_138
            int128_t var_128
            arg2.o = var_128
            *(rdx_7 + rcx_12 + 0x10) = arg2.o
            float var_118[0x4]
            *(rdx_7 + rcx_12 + 0x20) = var_118
            *(*arg1[3] + rdx_7 + 0x30) = 1
            void* r9_2 = *arg1
            
            if ((*(r9_2 + 0x719) & 0x40) == 0)
                zmm8 = *(rbx_2 + 0xcc)
            else
                zmm8 = zmm14
            
            bool cond:0_1 = zmm8[0] f<= zmm13.d
            zmm11 = data_143f515b0
            zmm7 = zx.o(0)
            zmm12 = data_143f515c0
            arg2.o = zmm11
            arg2.q = zmm7 u>> 0x40
            float temp0_1[0x4] = _mm_shuffle_ps(zx.o(0), arg2.o, 0xc4)
            arg2.o = zmm11
            arg2.o = _mm_and_ps(arg2.o, zmm12)
            float var_168[0x4] = temp0_1
            int128_t var_148_1 = arg2.o
            float var_158_1[0x4] = zmm7
            
            if (cond:0_1)
                goto label_14223d9eb
            
            void* rdx_8 = arg1[4]
            
            if (*(rdx_8 + 8) != 0)
                if (r14_1.d != 0)
                    int64_t rbx_3 = sx.q(*(*(*(r9_2 + 0x430) + 0x1a8) + (r12_1 << 2) + 8))
                    sub_1422567b0(arg1[3], rdx_8, rbx_3.d, r9_2, arg2.o, arg1[5], arg1[6])
                    float (* rcx_18)[0x4] = (rbx_3 << 6) + *arg1[3]
                    var_168 = *rcx_18
                    int128_t var_158_3 = rcx_18[1]
                    zmm0 = rcx_18[2]
                else
                    float (* rax_12)[0x4] = arg1[5]
                    var_168 = *rax_12
                    arg2.o = rax_12[1]
                    int128_t var_158_2 = arg2.o
                    zmm0 = rax_12[2]
                
                float var_148_2[0x4] = zmm0
                arg2, zmm7, zmm8, zmm9, zmm10, zmm13, zmm14 =
                    sub_140ad7d70(&var_138, &var_1a8, &var_168)
                zmm5 = var_1a8
                arg2.o = zmm5
                zmm12 = data_143f515c0
                uint64_t rcx_21 = r14_1 * 6
                zmm6 = data_143f515a0
                zmm0 = _mm_and_ps(data_143f515b0, zmm12)
                int32_t* rax_17 = arg1[7]
                float var_188_2[0x4] = zmm0
                arg2.o = _mm_mul_ps(arg2.o, zmm5)
                float var_1f0_1 = zmm8[0]
                arg2.o = _mm_add_ps(arg2.o, _mm_shuffle_ps(arg2.o, arg2.o, 0x4e))
                float temp0_8[0x4] = _mm_add_ps(_mm_shuffle_ps(arg2.o, arg2.o, 0x39), arg2.o)
                arg2.o = _mm_rsqrt_ps(temp0_8)
                float temp0_10[0x4] = _mm_mul_ps(temp0_8, zmm6)
                float temp0_15[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(arg2.o, arg2.o), temp0_10)), 
                        arg2.o), 
                    arg2.o)
                float temp0_18[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_15, temp0_15), temp0_10))
                float temp0_19[0x4] = _mm_cmpeq_ps(data_143f51a10, temp0_8, 2)
                zmm6 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_18, temp0_15), temp0_15), zmm5)
                        ^ data_143f51590, 
                    temp0_19) ^ data_143f51590
                var_1a8 = zmm6
                var_198[0] = var_198[0] f* *rax_17
                float temp0_24[0x4] = _mm_shuffle_ps(var_198, var_198, 0x55)
                temp0_24[0] = temp0_24[0] f* rax_17[1]
                float temp0_25[0x4] = _mm_shuffle_ps(var_198, var_198, 0xaa)
                temp0_25[0] = temp0_25[0] f* rax_17[2]
                int64_t* rax_18 = arg1[4]
                float temp0_26[0x4] = _mm_unpacklo_ps(temp0_24, zmm13.q)
                float temp0_27[0x4] = _mm_unpacklo_ps(var_198, temp0_25[0].q)
                int64_t rdx_10 = *rax_18
                float temp0_28[0x4] = _mm_unpacklo_ps(temp0_27, temp0_26[0].q)
                zmm3 = *(rdx_10 + (rcx_21 << 3) + 0x20)
                arg2.o = zmm3
                float temp0_29[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                arg2.o = _mm_shuffle_ps(arg2.o, zmm3, 0x55)
                float temp0_31[0x4] = _mm_unpacklo_ps(zmm3, temp0_29[0].q)
                zmm0 = _mm_and_ps(zmm8, zmm9)
                arg2.o = _mm_unpacklo_ps(arg2.o, zmm13.q)
                bool cond:1_1 = zmm0[0] f> zmm10[0]
                float temp0_34[0x4] = _mm_unpacklo_ps(temp0_31, arg2.q)
                
                if (cond:1_1)
                    zmm8[0] = zmm8[0] - zmm14[0]
                    
                    if (_mm_and_ps(zmm8, zmm9)[0] f> zmm10[0])
                        float temp0_36[0x4] =
                            __subps_xmmps_memps(temp0_28, *(rdx_10 + (rcx_21 << 3) + 0x10))
                        zmm4 = var_1f0_1
                        float temp0_37[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                        *(rdx_10 + (rcx_21 << 3) + 0x10) = __addps_xmmps_memps(
                            _mm_mul_ps(temp0_36, temp0_37), *(rdx_10 + (rcx_21 << 3) + 0x10))
                        *(rdx_10 + (rcx_21 << 3) + 0x20) = __addps_xmmps_memps(
                            _mm_mul_ps(
                                __subps_xmmps_memps(temp0_34, *(rdx_10 + (rcx_21 << 3) + 0x20)), 
                                temp0_37), 
                            *(rdx_10 + (rcx_21 << 3) + 0x20))
                        zmm3 = *(rdx_10 + (rcx_21 << 3))
                        zmm5 = data_143f515a0
                        float temp0_43[0x4] = _mm_sub_ps(zx.o(0), zmm3)
                        arg2.o = zmm3
                        arg2.o = _mm_mul_ps(arg2.o, zmm6)
                        arg2.o = _mm_add_ps(arg2.o, _mm_shuffle_ps(arg2.o, arg2.o, 0x4e))
                        zmm7 = _mm_and_ps(
                            _mm_cmpeq_ps(zmm7, 
                                _mm_add_ps(_mm_shuffle_ps(arg2.o, arg2.o, 0x39), arg2.o), 2), 
                            temp0_43 ^ zmm3)
                        float temp0_51[0x4] = _mm_sub_ps(data_143f515b0, temp0_37)
                        float temp0_52[0x4] = _mm_mul_ps(temp0_37, zmm6)
                        float temp0_54[0x4] =
                            _mm_add_ps(_mm_mul_ps(zmm7 ^ temp0_43, temp0_51), temp0_52)
                        arg2.o = temp0_54
                        arg2.o = _mm_mul_ps(arg2.o, temp0_54)
                        arg2.o = _mm_add_ps(arg2.o, _mm_shuffle_ps(arg2.o, arg2.o, 0x4e))
                        float temp0_59[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(arg2.o, arg2.o, 0x39), arg2.o)
                        arg2.o = _mm_rsqrt_ps(temp0_59)
                        float temp0_61[0x4] = _mm_mul_ps(temp0_59, zmm5)
                        float temp0_66[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(arg2.o, arg2.o), temp0_61)), 
                                arg2.o), 
                            arg2.o)
                        float temp0_69[0x4] =
                            _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_66, temp0_66), temp0_61))
                        float temp0_70[0x4] = _mm_cmpeq_ps(data_143f51a10, temp0_59, 2)
                        *(rdx_10 + (rcx_21 << 3)) = _mm_and_ps(
                            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_69, temp0_66), temp0_66), 
                                temp0_54) ^ data_143f51590, 
                            temp0_70) ^ data_143f51590
                    else
                        *(rdx_10 + (rcx_21 << 3)) = zmm6
                        *(rdx_10 + (rcx_21 << 3) + 0x10) = temp0_28
                        *(rdx_10 + (rcx_21 << 3) + 0x20) = temp0_34
                else
                    *(rdx_10 + (rcx_21 << 3)) = *(rdx_10 + (rcx_21 << 3))
                    arg2.o = *(rdx_10 + (rcx_21 << 3) + 0x10)
                    *(rdx_10 + (rcx_21 << 3) + 0x10) = arg2.o
                    *(rdx_10 + (rcx_21 << 3) + 0x20) = *(rdx_10 + (rcx_21 << 3) + 0x20)
                
                if (var_1f8 == 0)
                    float* rax_20 = arg1[6]
                    zmm2 = *(*arg1[4] + 0x20)
                    arg2.o = zmm2
                    zmm2[0] = zmm2[0] * *rax_20
                    arg2.o = _mm_shuffle_ps(arg2.o, zmm2, 0x55)
                    arg2.d = arg2.d f* rax_20[1]
                    *rax_20 = zmm2[0]
                    float temp0_76[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    temp0_76[0] = temp0_76[0] * rax_20[2]
                    rax_20[1] = arg2.d
                    rax_20[2] = temp0_76[0]
                    int32_t* rax_21 = arg1[6]
                    arg2.o = *rax_21
                    float var_1e8_1
                    
                    if (arg2.d f== zmm13.d)
                        var_1e8_1 = 3.39999995e+38f
                    else
                        zmm14[0] = zmm14[0] f/ arg2.d
                        var_1e8_1 = zmm14[0]
                    
                    arg2.o = rax_21[1]
                    
                    if (arg2.d f== zmm13.d)
                        int32_t var_1e4_2 = 0x7f7fc99e
                    else
                        zmm14[0] = zmm14[0] f/ arg2.d
                        float var_1e4_1 = zmm14[0]
                    
                    arg2.o = rax_21[2]
                    float var_1e0_1
                    
                    if (arg2.d f== zmm13.d)
                        var_1e0_1 = 3.39999995e+38f
                    else
                        zmm14[0] = zmm14[0] f/ arg2.d
                        var_1e0_1 = zmm14[0]
                    
                    int64_t* rcx_23 = arg1[7]
                    var_1f8 = 1
                    *rcx_23 = var_1e8_1.q
                    rcx_23[1].d = var_1e0_1
                
                goto label_14223d9e3
        i += 1
        result = arg1[1]
        rcx_4 = var_1d8_1 + 2
        var_1d8_1 = rcx_4
    while (i s< result[1].d)

__security_check_cookie(rax_1 ^ &var_228)
return result
