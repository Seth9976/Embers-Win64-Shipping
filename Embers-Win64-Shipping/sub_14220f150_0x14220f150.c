// 函数: sub_14220f150
// 地址: 0x14220f150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* rsi = nullptr
uint64_t var_210 = 0
int32_t result_1 = 0
sub_142259140(*arg1 + 0xf0, &var_210)
int32_t rbx = 0
int32_t rdi = 0

if (result_1 s> 0)
    do
        char rax_3 = sub_14226e880(var_210 + (sx.q(rdi) << 3))
        
        if (rax_3 == 0)
            rbx = 2
            break
        
        if (rax_3 == 3)
            rbx = 1
        
        rdi += 1
    while (rdi s< result_1)

uint32_t zmm14[0x4] = 0x7fffffff
float zmm10[0x4] = 0x38d1b717
*arg1[1] = rbx
int128_t* rdx_1 = arg1[2]
uint32_t zmm1[0x4] = *rdx_1
int32_t rcx_4 = *arg1[1]

if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f))
    zmm1 = 0x38d1b717

uint32_t zmm15[0x4] = *(rdx_1 + 4)

if (not(_mm_and_ps(zmm15, 0x7fffffff)[0] f> 9.99999994e-09f))
    zmm15 = 0x38d1b717

uint32_t zmm7[0x4] = *(rdx_1 + 8)
uint32_t var_240 = zmm7[0]

if (not(_mm_and_ps(zmm7, 0x7fffffff)[0] f> 9.99999994e-09f))
    zmm7 = 0x38d1b717
    var_240 = 0x38d1b717

uint32_t temp0_3[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
uint32_t temp0_4[0x4] = _mm_and_ps(zmm15, 0x7fffffff)
uint32_t temp0_5[0x4] = _mm_and_ps(zmm7, 0x7fffffff)
float zmm8[0x4] = zx.o(0)
uint32_t var_238
uint32_t var_230
uint32_t zmm13[0x4]

if (rcx_4 == 0)
    var_238 = zmm1[0]
    zmm13 = zmm1
    uint32_t var_234_3 = zmm15[0]
    var_230 = zmm7[0]
    var_240 = zmm7[0]
else if (rcx_4 == 1)
    zmm15 = _mm_max_ss(zmm15[0], zmm1[0])
    zmm13 = _mm_max_ss(temp0_4[0], temp0_3[0])
    
    if (not(zmm15[0] f>= 0f))
        zmm13 ^= data_142d3f780
    
    var_230 = zmm7[0]
    zmm15 = zmm13
    uint32_t var_234_2 = zmm13[0]
    var_238 = zmm13[0]
else if (rcx_4 != 2)
    zmm7 = var_230
    int32_t var_234
    zmm15 = var_234
    zmm13 = var_238
    var_240 = zmm7[0]
else
    zmm15 = _mm_max_ss(zmm15[0], zmm1[0])
    zmm13 = _mm_min_ss(temp0_4[0], temp0_3[0])
    zmm15 = _mm_max_ss(zmm15[0], zmm7[0])
    zmm13 = _mm_min_ss(zmm13[0], temp0_5[0])
    
    if (not(zmm15[0] f>= 0f))
        zmm13 ^= data_142d3f780
    
    var_238 = zmm13[0]
    zmm15 = zmm13
    uint32_t var_234_1 = zmm13[0]
    zmm7 = zmm13
    var_230 = zmm7[0]
    var_240 = zmm7[0]

int64_t* r12 = var_210
int64_t result = sx.q(result_1)
int64_t* var_198 = r12
uint32_t zmm11[0x4] = _mm_and_ps(zmm13, 0x7fffffff)
uint32_t zmm12[0x4] = _mm_and_ps(zmm15, 0x7fffffff)
uint32_t temp0_15[0x4] = _mm_and_ps(zmm7, 0x7fffffff)
uint32_t var_248 = zmm11[0]
void* r15 = &r12[result]
uint32_t var_244 = zmm12[0]
uint32_t var_228 = temp0_15[0]
void* var_1a8 = r15

if (r12 != r15)
    uint32_t zmm6[0x4] = 0x358637bd
    float zmm9[0x4] = 0x49742400
    
    do
        int32_t* var_220 = nullptr
        uint32_t var_108[0x4]
        sub_14226de10(&var_108, r12)
        char rax_6 = sub_14226e880(r12)
        int32_t* rax_7 = sub_14226f620(r12)
        void* const rbx_1
        
        if (rax_7 == 0 || *rax_7 != 6)
            rbx_1 = nullptr
        else
            rbx_1 = *(rax_7 + 8)
        
        void* rcx_9 = *arg1
        void* rax_8 = *(rcx_9 + 0xa0)
        
        if (rax_8 != 0)
            rcx_9 = rax_8
        
        int64_t* rdi_1 = *(rcx_9 + 0x120)
        
        if (rdi_1 != 0)
            int32_t var_200
            sub_1422159c0(rdi_1, &var_200, r12)
            int64_t rax_9 = sx.q(var_200)
            void* rax_12
            
            if (rax_9.d == 0xffffffff)
                rax_12 = nullptr
            else
                rax_12 = rax_9 * 0x60 + *rdi_1
            
            rsi = rax_12 + 0x10
            
            if (rax_12 == 0)
                rsi = nullptr
        
        uint32_t (* rsi_1)[0x4]
        
        if (rsi == 0)
            rsi_1 = &data_143dbb0c0
        else
            rsi_1 = rsi + 0x10
        
        void var_218
        sub_14226c680(&var_218, r12)
        uint64_t rax_13 = zx.q(rax_6)
        int32_t* rdi_2
        uint32_t zmm0_1[0x4]
        uint32_t zmm1_1[0x4]
        float zmm5_1[0x4]
        bool cond:3_1
        
        if (rax_13.d u<= 6)
            switch (rax_13)
                case 0
                    int32_t* rax_14 = sub_14183e350(&var_218)
                    rdi_2 = rax_14
                    zmm11[0] = zmm11[0] f* *(rbx_1 + 0x3c)
                    rax_14[1] = _mm_max_ss(zmm11[0], zmm10[0])[0]
                    zmm5_1 = *rsi_1
                    zmm6 = __mulps_xmmps_memps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(*(rbx_1 + 0x30), (*(rbx_1 + 0x38))[0].q), 
                            _mm_unpacklo_ps(*(rbx_1 + 0x34), zmm8[0].q)[0].q), 
                        rsi_1[2])
                    float temp0_21[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm1_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_23[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    float temp0_28[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm1_1), 
                        _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_21))
                    float temp0_29[0x4] = _mm_add_ps(temp0_28, temp0_28)
                    float temp0_30[0x4] = _mm_mul_ps(temp0_23, temp0_29)
                    float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xd2)
                    zmm0_1 = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
                    float temp0_33[0x4] = _mm_mul_ps(temp0_31, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, temp0_21)
                    float temp0_35[0x4] = _mm_add_ps(temp0_30, zmm6)
                    float temp0_38[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_33, zmm0_1), temp0_35), rsi_1[1])
                    float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)
                    float temp0_40[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)
                    temp0_38[0] = temp0_38[0] f* zmm13[0]
                    temp0_40[0] = temp0_40[0] f* zmm13[0]
                    temp0_39[0] = temp0_39[0] f* zmm13[0]
                    float var_f8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_38, temp0_40[0].q), 
                        _mm_unpacklo_ps(temp0_39, zmm8[0].q)[0].q)
                    
                    if (*rax_14 == 0 && (_fpclass(_mm_cvtps_pd(rax_14[1][0].q)[0].q) & 0x207) == 0)
                        cond:3_1 = zmm8[0] f>= rdi_2[1]
                    label_14220f581:
                        
                        if (not(cond:3_1))
                            char* rax_16 = arg1[3]
                            var_220 = rdi_2
                            *rax_16 = 1
                case 2
                    int32_t* rax_17 = sub_14183e350(&var_218)
                    zmm0_1 = *(rbx_1 + 0x48)
                    zmm0_1[0] = zmm0_1[0] f* 0.5f
                    rdi_2 = rax_17
                    zmm0_1[0] = zmm0_1[0] f* zmm11[0]
                    rax_17[1] = _mm_max_ss(zmm0_1[0], zmm10[0])[0]
                    zmm1_1 = *(rbx_1 + 0x4c)
                    zmm1_1[0] = zmm1_1[0] f* 0.5f
                    zmm1_1[0] = zmm1_1[0] f* zmm12[0]
                    rax_17[2] = _mm_max_ss(zmm1_1[0], zmm10[0])[0]
                    zmm0_1 = *(rbx_1 + 0x50)
                    zmm0_1[0] = zmm0_1[0] f* 0.5f
                    zmm0_1[0] = zmm0_1[0] f* var_228
                    rax_17[3] = _mm_max_ss(zmm0_1[0], zmm10[0])[0]
                    float var_138[0x4]
                    zmm7, zmm8 = sub_140ade170(rbx_1 + 0x3c, &var_138)
                    float zmm1_2[0x4] = data_143f51110
                    float zmm2_2[0x4] = *(rbx_1 + 0x34)
                    zmm11 = data_14399f668
                    zmm6 = rsi_1[2]
                    float zmm5_2[0x4] = var_138
                    float temp0_48[0x4] = _mm_unpacklo_ps(*(rbx_1 + 0x30), (*(rbx_1 + 0x38))[0].q)
                    zmm11 = _mm_unpacklo_ps(zmm11, data_14399f670[0].q)
                    float temp0_51[0x4] =
                        _mm_unpacklo_ps(temp0_48, _mm_unpacklo_ps(zmm2_2, zmm8[0].q)[0].q)
                    zmm11 = _mm_unpacklo_ps(zmm11, _mm_unpacklo_ps(data_14399f66c, zmm8[0].q)[0].q)
                    float var_1f8_1[0x4] = zmm5_2
                    var_198.o = zmm11
                    float var_188_1[0x4] = zmm1_2
                    uint32_t zmm0_2[0x4]
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm11, zmm6), zmm1_2, 1)) == 0)
                        float zmm3_2[0x4] = *rsi_1
                        float temp0_186[0x4] = __mulps_xmmps_memps(temp0_51, rsi_1[2])
                        zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0x1b), 
                            _mm_shuffle_ps(zmm3_2, zmm3_2, 0))
                        float temp0_190[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0x4e)
                        float temp0_191[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xb1)
                        float temp0_192[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0xd2)
                        zmm6 = __mulps_xmmps_memps(zmm6, data_143f51070)
                        float temp0_194[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xff)
                        zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(zmm5_2, temp0_194))
                        float temp0_198[0x4] =
                            _mm_mul_ps(temp0_190, _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55))
                        float temp0_200[0x4] =
                            _mm_mul_ps(temp0_191, _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa))
                        float temp0_201[0x4] = __mulps_xmmps_memps(temp0_198, data_143f51060)
                        zmm0_2 = _mm_shuffle_ps(temp0_186, temp0_186, 0xc9)
                        float temp0_203[0x4] = __mulps_xmmps_memps(temp0_200, data_143f51050)
                        zmm6 = _mm_add_ps(zmm6, temp0_201)
                        float temp0_205[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xd2)
                        zmm0_2 = _mm_mul_ps(zmm0_2, temp0_205)
                        float temp0_207[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
                        zmm6 = _mm_add_ps(zmm6, temp0_203)
                        float temp0_210[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_192, temp0_207), zmm0_2)
                        float temp0_211[0x4] = _mm_add_ps(temp0_210, temp0_210)
                        float temp0_212[0x4] = _mm_shuffle_ps(temp0_211, temp0_211, 0xd2)
                        zmm0_2 = _mm_shuffle_ps(temp0_211, temp0_211, 0xc9)
                        float temp0_214[0x4] = _mm_mul_ps(temp0_212, temp0_207)
                        zmm0_2 = _mm_mul_ps(zmm0_2, temp0_205)
                        float temp0_216[0x4] = _mm_mul_ps(temp0_211, temp0_194)
                        float temp0_217[0x4] = _mm_sub_ps(temp0_214, zmm0_2)
                        zmm0_2 = __mulps_xmmps_memps(zmm11, rsi_1[2])
                        zmm5_2 = __addps_xmmps_memps(
                            _mm_add_ps(temp0_217, _mm_add_ps(temp0_216, temp0_186)), rsi_1[1])
                    else
                        zmm1_2 = *rsi_1
                        zmm9 = rsi_1[1]
                        float temp0_57[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
                        zmm0_2 = _mm_mul_ps(zmm6, zmm11)
                        zmm11 = data_143f51030
                        float temp0_59[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                        uint32_t var_168_1[0x4] = zmm0_2
                        float temp0_60[0x4] = _mm_mul_ps(temp0_57, zmm1_2)
                        zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
                        float temp0_63[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x29), zmm0_2)
                        float temp0_64[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
                        zmm0_2 = _mm_shuffle_ps(temp0_60, temp0_60, 0x1a)
                        float temp0_67[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x12), temp0_64)
                        zmm0_2 = _mm_add_ps(zmm0_2, _mm_shuffle_ps(temp0_60, temp0_60, 1))
                        zmm12 = _mm_add_ps(temp0_67, temp0_63)
                        float temp0_71[0x4] = _mm_sub_ps(temp0_63, temp0_67)
                        float temp0_72[0x4] = _mm_sub_ps(zmm11, zmm0_2)
                        zmm12 = _mm_mul_ps(zmm12, zmm6)
                        float temp0_74[0x4] = _mm_mul_ps(temp0_59, temp0_71)
                        zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_72, zmm6), data_143f51040)
                        zmm0_2 = _mm_shuffle_ps(temp0_74, zmm1_2, 0x32)
                        float temp0_79[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1_2, 0), zmm0_2, 0x82)
                        zmm0_2 = _mm_shuffle_ps(zmm12, zmm1_2, 0x31)
                        float temp0_82[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_74, zmm1_2, 0x10), zmm0_2, 0x88)
                        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, temp0_74, 0x12), zmm1_2, 0xe8)
                        zmm11[0].q = zmm9 u>> 0x40
                        float temp0_85[0x4] = _mm_add_ps(var_1f8_1, var_1f8_1)
                        float temp0_86[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                        float temp0_87[0x4] = _mm_shuffle_ps(var_1f8_1, var_1f8_1, 4)
                        float temp0_88[0x4] = _mm_shuffle_ps(var_1f8_1, var_1f8_1, 0xff)
                        float temp0_89[0x4] = _mm_mul_ps(var_1f8_1, temp0_85)
                        float temp0_91[0x4] =
                            _mm_mul_ps(temp0_87, _mm_shuffle_ps(temp0_85, temp0_85, 0x29))
                        zmm0_2 = var_198.o
                        float temp0_93[0x4] =
                            _mm_mul_ps(temp0_88, _mm_shuffle_ps(temp0_85, temp0_85, 0x12))
                        float temp0_94[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc9)
                        zmm7 = _mm_add_ps(temp0_93, temp0_91)
                        float temp0_96[0x4] = _mm_sub_ps(temp0_91, temp0_93)
                        zmm7 = _mm_mul_ps(zmm7, zmm0_2)
                        zmm0_2 = _mm_add_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0x1a), 
                            _mm_shuffle_ps(temp0_89, temp0_89, 1))
                        float temp0_101[0x4] = _mm_mul_ps(temp0_94, temp0_96)
                        zmm1_2 = __andps_xmmxud_memxud(
                            __mulps_xmmps_memps(_mm_sub_ps(zmm11, zmm0_2), var_198.o), 
                            data_143f51040)
                        float temp0_107[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1_2, 0), 
                            _mm_shuffle_ps(temp0_101, zmm1_2, 0x32), 0x82)
                        zmm0_2 = _mm_shuffle_ps(zmm7, zmm1_2, 0x31)
                        float temp0_109[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0x55)
                        float temp0_111[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_101, zmm1_2, 0x10), zmm0_2, 0x88)
                        float temp0_112[0x4] = _mm_mul_ps(temp0_109, temp0_82)
                        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, temp0_101, 0x12), zmm1_2, 0xe8)
                        float temp0_116[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0xaa), zmm12)
                        zmm11[0].q = temp0_51 u>> 0x40
                        float temp0_117[0x4] = _mm_shuffle_ps(temp0_51, zmm11, 0xc4)
                        zmm0_2 = _mm_shuffle_ps(temp0_107, temp0_107, 0)
                        float temp0_120[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0xff), temp0_86)
                        float temp0_122[0x4] = _mm_add_ps(temp0_112, _mm_mul_ps(zmm0_2, temp0_79))
                        zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0), temp0_79)
                        float temp0_125[0x4] = _mm_add_ps(temp0_122, temp0_116)
                        float temp0_127[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0xaa), zmm12)
                        float temp0_128[0x4] = _mm_add_ps(temp0_125, temp0_120)
                        float temp0_130[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x55), temp0_82)
                        float temp0_131[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xff)
                        float var_1e8[0x4] = temp0_128
                        float temp0_132[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                        float temp0_133[0x4] = _mm_add_ps(temp0_130, zmm0_2)
                        float temp0_134[0x4] = _mm_mul_ps(temp0_132, temp0_82)
                        float temp0_135[0x4] = _mm_mul_ps(temp0_131, temp0_86)
                        zmm0_2 = _mm_shuffle_ps(zmm7, zmm7, 0)
                        float temp0_137[0x4] = _mm_add_ps(temp0_133, temp0_127)
                        zmm0_2 = _mm_mul_ps(zmm0_2, temp0_79)
                        float temp0_140[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm12)
                        float temp0_141[0x4] = _mm_add_ps(temp0_137, temp0_135)
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                        float temp0_143[0x4] = _mm_add_ps(temp0_134, zmm0_2)
                        zmm7 = _mm_mul_ps(zmm7, temp0_86)
                        zmm0_2 = _mm_shuffle_ps(temp0_117, temp0_117, 0)
                        int96_t var_1d8_1 = temp0_141[0].12
                        float temp0_146[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0x55)
                        float temp0_147[0x4] = _mm_add_ps(temp0_143, temp0_140)
                        float temp0_148[0x4] = _mm_mul_ps(temp0_146, temp0_82)
                        float temp0_150[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0xaa), zmm12)
                        zmm0_2 = _mm_mul_ps(zmm0_2, temp0_79)
                        float temp0_152[0x4] = _mm_add_ps(temp0_147, zmm7)
                        float temp0_154[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0xff), temp0_86)
                        float temp0_155[0x4] = _mm_add_ps(temp0_148, zmm0_2)
                        int96_t var_1c8_1 = temp0_152[0].12
                        int96_t var_1b8_1 =
                            _mm_add_ps(_mm_add_ps(temp0_155, temp0_150), temp0_154)[0].12
                        zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_1e8, 0x322bcc77)
                        float zmm4_3[0x4] = _mm_and_ps(
                            __cmpps_xmmps_memps_immb(var_188_1, var_168_1, 2), 
                            data_143f51100 ^ zmm11) ^ data_143f51100
                        float zmm2_3[0x4] = var_1e8[0]
                        float zmm1_3 = var_1e8[1]
                        uint32_t zmm0_3[0x4] = var_1e8[2]
                        zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                        zmm1_3 = zmm1_3 * zmm4_3[0]
                        zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
                        var_1e8[0] = zmm2_3[0]
                        float temp0_160[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                        var_1e8[1] = zmm1_3
                        zmm1_3 = var_1d8_1:4.d * temp0_160[0]
                        var_1e8[2] = zmm0_3[0]
                        zmm0_3 = var_1d8_1:8.d
                        zmm0_3[0] = zmm0_3[0] f* temp0_160[0]
                        float zmm3_3 = var_1d8_1.d * temp0_160[0]
                        zmm2_3 = var_1c8_1.d
                        float temp0_161[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                        var_1d8_1:4.d = zmm1_3
                        var_1d8_1:8.d = zmm0_3[0]
                        zmm0_3 = var_1c8_1:8.d
                        zmm1_3 = var_1c8_1:4.d * temp0_161[0]
                        zmm0_3[0] = zmm0_3[0] f* temp0_161[0]
                        zmm2_3[0] = zmm2_3[0] * temp0_161[0]
                        var_1c8_1:4.d = zmm1_3
                        var_1c8_1:8.d = zmm0_3[0]
                        var_1d8_1.d = zmm3_3
                        var_1c8_1.d = zmm2_3[0]
                        uint32_t var_178[0x4]
                        sub_14077e4a0(&var_178, &var_1e8)
                        zmm5_2 = var_178
                        zmm8 = zx.o(0)
                        zmm6 = data_143f50de0
                        zmm7 = var_240
                        zmm9 = 0x49742400
                        float temp0_162[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                        var_1f8_1[0] = 0x322bcc77
                        float temp0_164[0x4] =
                            _mm_add_ps(temp0_162, _mm_shuffle_ps(temp0_162, temp0_162, 0x4e))
                        float temp0_166[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_164, temp0_164, 0x39), temp0_164)
                        float temp0_167[0x4] = _mm_rsqrt_ps(temp0_166)
                        float temp0_168[0x4] = _mm_mul_ps(temp0_166, zmm6)
                        float temp0_173[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm6, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_167, temp0_167), temp0_168)), 
                                temp0_167), 
                            temp0_167)
                        zmm6 = _mm_sub_ps(zmm6, 
                            _mm_mul_ps(_mm_mul_ps(temp0_173, temp0_173), temp0_168))
                        zmm0_2 =
                            _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_166, 2)
                        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, temp0_173), temp0_173)
                        float temp0_181[0x4] = _mm_unpacklo_ps(var_1b8_1:4.d, 0)
                        zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5_2) ^ data_143f50dd0, zmm0_2)
                            ^ data_143f50dd0
                        zmm0_2 = var_168_1
                        zmm5_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1b8_1.d, var_1b8_1:8.d[0].q), 
                            temp0_181[0].q)
                        var_178 = zmm6
                    
                    var_108 = zmm6
                    float temp0_222[0x4] = _mm_unpacklo_ps(zmm15, zmm8[0].q)
                    uint32_t var_e8_1[0x4] = zmm0_2
                    float var_f8_2[0x4] = _mm_mul_ps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm7[0].q), temp0_222[0].q), zmm5_2)
                    char rax_19
                    
                    if (*rdi_2 == 3)
                        rax_19 = sub_142227dd0(&rax_17[1])
                    
                    if (*rdi_2 == 3 && rax_19 != 0 && not(zmm8[0] f>= rax_17[1])
                            && not(zmm8[0] f>= rdi_2[2]))
                        zmm10 = 0x38d1b717
                        zmm11 = var_248
                        zmm12 = var_244
                        cond:3_1 = zmm8[0] f>= rdi_2[3]
                        goto label_14220f581
                    
                    zmm10 = 0x38d1b717
                    zmm11 = var_248
                    zmm12 = var_244
                case 3
                    int32_t* rax_20 = sub_14183e350(&var_218)
                    zmm0_1 = *(rbx_1 + 0x48)
                    float zmm2_1[0x4] = zmm0_1
                    zmm2_1[0] = zmm2_1[0] f+ zmm0_1[0]
                    zmm1_1 = _mm_max_ss(zmm11[0], zmm12[0])
                    rdi_2 = rax_20
                    zmm2_1[0] = zmm2_1[0] f+ *(rbx_1 + 0x4c)
                    zmm1_1[0] = zmm1_1[0] f* zmm0_1[0]
                    zmm2_1[0] = zmm2_1[0] f* var_228
                    zmm1_1 = __maxss_xmmss_memss(zmm1_1[0], 0x3dcccccd)
                    zmm2_1[0] = zmm2_1[0] * 0.5f
                    zmm1_1 = _mm_max_ss(_mm_min_ss(zmm1_1[0], zmm2_1[0])[0], zmm10[0])
                    zmm2_1[0] = zmm2_1[0] f- zmm1_1[0]
                    rax_20[1] = zmm1_1[0]
                    rax_20[2] = _mm_max_ss(zmm2_1[0], zmm10[0])[0]
                    zmm5_1 = *rsi_1
                    zmm2_1 = *(rbx_1 + 0x34)
                    zmm6 = _mm_unpacklo_ps(*(rbx_1 + 0x30), (*(rbx_1 + 0x38))[0].q)
                    zmm1_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    zmm6 = __mulps_xmmps_memps(
                        _mm_unpacklo_ps(zmm6, _mm_unpacklo_ps(zmm2_1, zmm8[0].q)[0].q), rsi_1[2])
                    float temp0_236[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    float temp0_237[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_236)
                    float temp0_242[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm1_1), zmm0_1)
                    float temp0_243[0x4] = _mm_add_ps(temp0_242, temp0_242)
                    float temp0_244[0x4] = _mm_mul_ps(temp0_237, temp0_243)
                    float temp0_246[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_243, temp0_243, 0xd2), zmm1_1)
                    zmm0_1 = _mm_shuffle_ps(temp0_243, temp0_243, 0xc9)
                    float temp0_248[0x4] = _mm_add_ps(temp0_244, zmm6)
                    float temp0_252[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_246, _mm_mul_ps(zmm0_1, temp0_236)), 
                            temp0_248), 
                        rsi_1[1])
                    float temp0_253[0x4] = _mm_shuffle_ps(temp0_252, temp0_252, 0xaa)
                    zmm1_1 = _mm_shuffle_ps(temp0_252, temp0_252, 0x55)
                    zmm0_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_252, temp0_253[0].q), 
                        _mm_unpacklo_ps(zmm1_1, zmm8[0].q)[0].q)
                    float var_118[0x4]
                    float (* rax_21)[0x4]
                    rax_21, zmm7, zmm8 = sub_140ade170(rbx_1 + 0x3c, &var_118)
                    float zmm2_4[0x4] = data_143a2f140
                    float temp0_258[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x1b)
                    float zmm3_4[0x4] = *rax_21
                    float temp0_260[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_4, zmm3_4, 0), temp0_258)
                    float temp0_262[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_4, zmm3_4, 0xff), zmm2_4)
                    float temp0_263[0x4] = __mulps_xmmps_memps(temp0_260, data_143f51070)
                    float temp0_264[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 0x55)
                    float temp0_269[0x4] = _mm_add_ps(_mm_add_ps(temp0_263, temp0_262), 
                        __mulps_xmmps_memps(
                            _mm_mul_ps(temp0_264, _mm_shuffle_ps(zmm2_4, zmm2_4, 0x4e)), 
                            data_143f51060))
                    float temp0_272[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_4, zmm3_4, 0xaa), 
                        _mm_shuffle_ps(zmm2_4, zmm2_4, 0xb1))
                    float temp0_273[0x4] = _mm_unpacklo_ps(zmm15, zmm8[0].q)
                    float temp0_275[0x4] =
                        _mm_add_ps(temp0_269, __mulps_xmmps_memps(temp0_272, data_143f51050))
                    float temp0_278[0x4] = _mm_mul_ps(zmm0_1, 
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm7[0].q), temp0_273[0].q))
                    var_108 = temp0_275
                    float var_f8_4[0x4] = temp0_278
                    
                    if (*rdi_2 == 2 && (_fpclass(_mm_cvtps_pd(rdi_2[1][0].q)[0].q) & 0x207) == 0
                            && (_fpclass(_mm_cvtps_pd(rdi_2[2][0].q)[0].q) & 0x207) == 0
                            && not(zmm8[0] f>= rdi_2[1]))
                        cond:3_1 = zmm8[0] f>= rdi_2[2]
                        goto label_14220f581
                case 4
                    int32_t* rax_24 = sub_14183e350(&var_218)
                    bool cond:1_1 = zmm15[0] f<= zmm8[0]
                    zmm1_1 = data_143dbb0d0
                    var_108 = data_143dbb0c0
                    uint32_t var_e8_2[0x4] = data_143dbb0e0
                    uint32_t var_f8_5[0x4] = zmm1_1
                    
                    if (cond:1_1)
                        if (zmm7[0] f<= zmm8[0])
                            zmm0_1 = data_143306310
                        else
                            zmm0_1 = data_143306330
                        
                        var_108 = zmm0_1
                    else if (not(zmm7[0] f> zmm8[0]))
                        var_108 = data_143306320
                    
                    zmm15[0] = zmm15[0] f* zmm13[0]
                    zmm15[0] = zmm15[0] f* zmm7[0]
                    int64_t rax_25
                    
                    if (zmm15[0] f>= zmm8[0])
                        rax_25 = sub_140a54cc0(rbx_1)
                    else
                        rax_25 = Concurrency::details::VirtualProcessor::GetExecutingContext(rbx_1)
                    
                    *(rax_24 + 0x20) = rax_25
                    rax_24[3] = var_228[0]
                    rax_24[1] = zmm11[0]
                    rax_24[2] = zmm12[0]
                    uint32_t var_188_2[0x4] = *rsi_1
                    uint32_t var_188_3[0x4] = var_108
                    zmm1_1 = _mm_unpacklo_ps(zmm15, zmm8[0].q)
                    uint32_t var_f8_6[0x4] = _mm_mul_ps(var_f8_5, 
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm7[0].q), zmm1_1[0].q))
                    
                    if (*rax_24 == 4 && sub_142227dd0(&rax_24[1]) != 0
                            && sub_142227e30(&rax_24[4]) != 0)
                        int32_t zmm1_6 = rax_24[2]
                        int32_t zmm2_5 = rax_24[3]
                        int32_t zmm3_5 = rax_24[1]
                        
                        if (not(_mm_max_ss(_mm_max_ss(zmm1_6, zmm2_5), zmm3_5) f> zmm9[0])
                                && not(_mm_min_ss(_mm_min_ss(zmm1_6, zmm2_5), zmm3_5) f< zmm6[0])
                                && *(rax_24 + 0x20) != 0)
                            char* rax_28 = arg1[3]
                            var_220 = rax_24
                            *rax_28 = 1
                case 5
                    int32_t* rax_29 = sub_14183e350(&var_218)
                    
                    if (sub_140d3e110(*arg1 + 0x100) != 0)
                        void* rax_31 = sub_140d3c6e0(*arg1 + 0x100)
                        int64_t r15_1 = 0
                        int64_t* r14_3 = *(rax_31 + 0xd0)
                        uint64_t rax_34 = sx.q(*(rax_31 + 0xd8)) << 3 u>> 3
                        
                        if (r14_3 u> &r14_3[sx.q(*(rax_31 + 0xd8))])
                            rax_34 = 0
                        
                        if (rax_34 != 0)
                            do
                                if (*r14_3 == *(rax_29 + 0x28))
                                    rax_29[1] = zmm13[0]
                                    rax_29[2] = zmm15[0]
                                    rax_29[3] = zmm7[0]
                                    var_108 = *rsi_1
                                    float zmm4_1[0x4] = rsi_1[1]
                                    float var_f8_7[0x4] = zmm4_1
                                    uint32_t var_e8_3[0x4] = rsi_1[2]
                                    zmm0_1 = _mm_unpacklo_ps(zmm15, zmm8[0].q)
                                    float var_f8_8[0x4] = _mm_mul_ps(zmm4_1, 
                                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm7[0].q), 
                                            zmm0_1[0].q))
                                    
                                    if (*rax_29 == 5 && sub_142227dd0(&rax_29[1]) != 0
                                            && sub_142227e30(&rax_29[4]) != 0)
                                        float zmm3_1[0x4] = rax_29[2]
                                        uint32_t temp0_293[0x4] = _mm_and_ps(rax_29[3], zmm14)
                                        uint32_t zmm2_6[0x4] = rax_29[1]
                                        zmm3_1 = _mm_and_ps(zmm3_1, zmm14)
                                        uint32_t temp0_295[0x4] = _mm_and_ps(zmm2_6, zmm14)
                                        
                                        if (not(_mm_max_ss(_mm_max_ss(temp0_293[0], zmm3_1[0])[0], 
                                                temp0_295[0])[0] f> zmm9[0]) && not(_mm_min_ss(
                                                _mm_min_ss(temp0_293[0], zmm3_1[0])[0], 
                                                temp0_295[0])[0] f< zmm6[0]) && *(rax_29 + 0x28) != 0)
                                            char* rax_38 = arg1[3]
                                            var_220 = rax_29
                                            *rax_38 = 1
                                
                                r14_3 = &r14_3[1]
                                r15_1 += 1
                            while (r15_1 != rax_34)
                            
                            r12 = var_198
                        
                        r15 = var_1a8
        
        if (var_220 != 0)
            void* rcx_35 = *arg1
            uint32_t (* var_158)[0x4] = &var_108
            int32_t** var_150_1 = &var_220
            uint32_t (** var_140_1)[0x4] = &var_158
            int64_t (* var_148)(int64_t* arg1, int64_t* arg2) = sub_142211db0
            sub_14226a000(rcx_35, r12, &var_148)
            int64_t* rax_39 = arg1[4]
            *rax_39 = var_238.q
            rax_39[1].d = var_230
        
        result = sub_14225b2b0(&var_218)
        zmm6 = 0x358637bd
        r12 = &r12[1]
        var_198 = r12
        rsi = nullptr
    while (r12 != r15)
    
    r12 = var_210

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_268)
return result
