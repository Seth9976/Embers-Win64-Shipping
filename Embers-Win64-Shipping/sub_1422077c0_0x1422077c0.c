// 函数: sub_1422077c0
// 地址: 0x1422077c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = *(arg2 + 0x18)
void* rdi = *(arg2 + 0x28)
uint32_t rax_1
int64_t r8_1

if ((*(rbx + 0x433) & 8) == 0 && data_143de5480 != 0)
    r8_1 = 0x620
    rax_1.b = GetCurrentThreadId() == data_143de5470

if ((*(rbx + 0x433) & 8) != 0 || data_143de5480 == 0 || rax_1.b != 0)
    r8_1 = 0x1c0

int32_t rcx = *(arg1 + 0x30)

if ((rcx.b & 2) != 0)
    float zmm7[0x4] = *(rbx + r8_1 + 0x20)
    _mm_shuffle_ps(zmm7, zmm7, 0x55)
    _mm_shuffle_ps(zmm7, zmm7, 0xaa)

int32_t rcx_1 = rcx & 1
float zmm6[0x4]
float var_38[0x4] = zmm6
char rdx = *(*(rdi + 0x30) + 0x59) & 1
float zmm10[0x4]
float var_78[0x4] = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm12[0x4]
float var_98[0x4] = zmm12
uint64_t result
float var_168[0x4]
void var_12c
float var_118[0x4]
float var_d8[0x4]
int64_t arg_8
float zmm0[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if ((*(arg1 + 0x80) & 1) == 0)
    if (rdx != 0)
        if (rcx_1 != 0)
            zmm2 = *(rbx + r8_1)
            zmm4 = data_143f50550
            float temp0_130[0x4] = _mm_add_ps(zmm2, zmm2)
            float temp0_131[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
            float temp0_132[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0x29)
            float temp0_133[0x4] = _mm_mul_ps(temp0_130, zmm2)
            float temp0_134[0x4] = _mm_mul_ps(temp0_131, temp0_132)
            float temp0_135[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            float temp0_136[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0x12)
            float temp0_137[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0x1a)
            float temp0_138[0x4] = _mm_mul_ps(temp0_135, temp0_136)
            float temp0_140[0x4] = _mm_add_ps(temp0_137, _mm_shuffle_ps(temp0_133, temp0_133, 1))
            float temp0_141[0x4] = _mm_add_ps(temp0_138, temp0_134)
            float temp0_142[0x4] = _mm_sub_ps(temp0_134, temp0_138)
            zmm3 = __andps_xmmxud_memxud(_mm_sub_ps(zmm4, temp0_140), data_143f50560)
            float temp0_145[0x4] = _mm_shuffle_ps(temp0_142, zmm3, 0x32)
            float temp0_147[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_141, zmm3, 0), temp0_145, 0x82)
            float temp0_148[0x4] = _mm_shuffle_ps(temp0_141, zmm3, 0x31)
            float temp0_150[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_142, zmm3, 0x10), temp0_148, 0x88)
            zmm0 = *(rbx + r8_1 + 0x10)
            zmm4[0].q = zmm0 u>> 0x40
            float temp0_151[0x4] = _mm_shuffle_ps(temp0_141, temp0_142, 0x12)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
            float temp0_153[0x4] = _mm_shuffle_ps(temp0_151, zmm3, 0xe8)
            float var_a8_1[0x4] = temp0_152
            var_d8 = temp0_147
            float var_c8_1[0x4] = temp0_150
            float var_b8_1[0x4] = temp0_153
            float zmm1_1[0x4] = sub_1408041d0(&var_d8, &var_118)
            int32_t rax_17 = *(arg2 + 0x118)
            int64_t rcx_18 = *(arg2 + 0xf8)
            result = zx.q(rax_17 - 1)
            int64_t r12_7 = *(arg2 + 0xf0)
            int32_t r13_7 = *(arg2 + 0x114)
            int64_t r15_7 = sx.q(result.d)
            arg_8 = rcx_18
            
            if (rax_17 - 1 s>= 0)
                zmm12 = var_118
                int64_t temp8_1
                
                do
                    void* rbx_24 = zx.q(zx.d(*(rcx_18 + (r15_7 << 1))) * r13_7) + r12_7
                    
                    if ((*(rbx_24 + 0x5c) & 0x4000000) == 0)
                        int64_t var_170_8 = 0
                        int64_t* rax_18
                        float zmm7_8[0x4]
                        float zmm8_8[0x4]
                        float zmm9_8[0x4]
                        rax_18, zmm6, zmm7_8, zmm8_8, zmm9_8, zmm10 = sub_141fe56b0(arg1 + 0x38, 
                            &var_12c, *(rbx_24 + 0xc), zmm1_1, (*(arg2 + 0x18)).d, nullptr)
                        rcx_18 = arg_8
                        int32_t var_15c_4 = 0
                        float zmm0_6[0x4] = zx.o(*rax_18)
                        result = zx.q(rax_18[1].d)
                        var_168[0] = zmm0_6[0]
                        float temp0_155[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
                        temp0_155[0] = _mm_shuffle_ps(zmm0_6, zmm0_6, 0x55)[0]
                        float temp0_157[0x4] = _mm_shuffle_ps(temp0_155, temp0_155, 0xc6)
                        temp0_157[0] = result.d[0]
                        float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xc9)
                        var_168 = temp0_158
                        float temp0_159[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xff)
                        float temp0_161[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_158, temp0_158, 0xaa), zmm10)
                        float var_108[0x4]
                        float temp0_163[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_158, temp0_158, 0x55), var_108)
                        float temp0_164[0x4] = _mm_mul_ps(temp0_159, zmm6)
                        float temp0_166[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_158, temp0_158, 0), zmm12)
                        float temp0_169[0x4] = _mm_add_ps(_mm_add_ps(temp0_164, temp0_161), 
                            _mm_add_ps(temp0_163, temp0_166))
                        zmm1_1 = zmm8_8
                        zmm7_8[0] = zmm7_8[0] * temp0_169[0]
                        zmm7_8[0] = zmm7_8[0] f* *(rbx_24 + 0x30)
                        *(rbx_24 + 0x30) = zmm7_8[0]
                        float temp0_170[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0x55)
                        zmm1_1[0] = zmm1_1[0] * temp0_170[0]
                        float temp0_171[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0xaa)
                        zmm9_8[0] = zmm9_8[0] * temp0_171[0]
                        zmm1_1[0] = zmm1_1[0] f* *(rbx_24 + 0x34)
                        zmm9_8[0] = zmm9_8[0] f* *(rbx_24 + 0x38)
                        *(rbx_24 + 0x34) = zmm1_1[0]
                        *(rbx_24 + 0x38) = zmm9_8[0]
                    
                    temp8_1 = r15_7
                    r15_7 -= 1
                while (temp8_1 - 1 s>= 0)
        else
            int32_t rax_16 = *(arg2 + 0x118)
            int64_t rcx_15 = *(arg2 + 0xf8)
            result = zx.q(rax_16 - 1)
            int64_t r12_6 = *(arg2 + 0xf0)
            int32_t r13_6 = *(arg2 + 0x114)
            int64_t r15_6 = sx.q(result.d)
            arg_8 = rcx_15
            
            if (rax_16 - 1 s>= 0)
                int64_t temp9_1
                
                do
                    void* rbx_21 = zx.q(zx.d(*(rcx_15 + (r15_6 << 1))) * r13_6) + r12_6
                    
                    if ((*(rbx_21 + 0x5c) & 0x4000000) == 0)
                        int64_t var_170_7 = 0
                        float zmm7_7
                        int32_t zmm8_7
                        int32_t zmm9_7
                        result, zmm7_7, zmm8_7, zmm9_7 = sub_141fe56b0(arg1 + 0x38, &var_12c, 
                            *(rbx_21 + 0xc), arg3, (*(arg2 + 0x18)).d, nullptr)
                        rcx_15 = arg_8
                        arg3 = *(result + 4)
                        zmm2 = *(result + 8)
                        float zmm0_5 = zmm7_7 f* *result
                        arg3[0] = arg3[0] f* zmm8_7
                        zmm0_5 = zmm0_5 f* *(rbx_21 + 0x30)
                        arg3[0] = arg3[0] f* *(rbx_21 + 0x34)
                        zmm2[0] = zmm2[0] f* zmm9_7
                        *(rbx_21 + 0x34) = arg3[0]
                        *(rbx_21 + 0x30) = zmm0_5
                        zmm2[0] = zmm2[0] f* *(rbx_21 + 0x38)
                        *(rbx_21 + 0x38) = zmm2[0]
                    
                    temp9_1 = r15_6
                    r15_6 -= 1
                while (temp9_1 - 1 s>= 0)
    else if (rcx_1 != 0)
        int32_t rax_15 = *(arg2 + 0x118)
        int64_t rcx_13 = *(arg2 + 0xf8)
        result = zx.q(rax_15 - 1)
        int64_t r12_5 = *(arg2 + 0xf0)
        int32_t r13_5 = *(arg2 + 0x114)
        int64_t r15_5 = sx.q(result.d)
        arg_8 = rcx_13
        
        if (rax_15 - 1 s>= 0)
            int64_t temp10_1
            
            do
                void* rbx_18 = zx.q(zx.d(*(rcx_13 + (r15_5 << 1))) * r13_5) + r12_5
                
                if ((*(rbx_18 + 0x5c) & 0x4000000) == 0)
                    int64_t var_170_6 = 0
                    float zmm7_6
                    float zmm8_6[0x4]
                    float zmm9_6
                    result, zmm7_6, zmm8_6, zmm9_6 = sub_141fe56b0(arg1 + 0x38, &var_12c, 
                        *(rbx_18 + 0xc), arg3, (*(arg2 + 0x18)).d, nullptr)
                    rcx_13 = arg_8
                    arg3 = zmm8_6
                    float zmm3_4 = *(result + 8)
                    float zmm0_4 = zmm7_6 f* *result f* *(rbx_18 + 0x30)
                    arg3[0] = arg3[0] * (*(result + 4))[0]
                    *(rbx_18 + 0x30) = zmm0_4
                    arg3[0] = arg3[0] f* *(rbx_18 + 0x34)
                    zmm0_4 = zmm9_6 * zmm3_4 f* *(rbx_18 + 0x38)
                    *(rbx_18 + 0x34) = arg3[0]
                    *(rbx_18 + 0x38) = zmm0_4
                
                temp10_1 = r15_5
                r15_5 -= 1
            while (temp10_1 - 1 s>= 0)
    else
        zmm2 = *(rbx + r8_1)
        zmm12 = *(rbx + r8_1 + 0x10)
        int32_t rax_13 = *(arg2 + 0x118)
        float temp0_89[0x4] = _mm_add_ps(zmm2, zmm2)
        int64_t rcx_11 = *(arg2 + 0xf8)
        int64_t r12_4 = *(arg2 + 0xf0)
        result = zx.q(rax_13 - 1)
        int32_t r13_4 = *(arg2 + 0x114)
        float temp0_90[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
        arg_8 = rcx_11
        float temp0_91[0x4] = _mm_mul_ps(temp0_89, zmm2)
        int64_t r15_4 = sx.q(result.d)
        float temp0_93[0x4] = _mm_mul_ps(temp0_90, _mm_shuffle_ps(temp0_89, temp0_89, 0x29))
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0x12)
        float temp0_95[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0x1a)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_94)
        float temp0_99[0x4] = _mm_add_ps(temp0_95, _mm_shuffle_ps(temp0_91, temp0_91, 1))
        float temp0_100[0x4] = _mm_add_ps(temp0_97, temp0_93)
        float temp0_101[0x4] = _mm_sub_ps(temp0_93, temp0_97)
        zmm2 = data_143f50550
        zmm2[0].q = zmm12 u>> 0x40
        float temp0_102[0x4] = _mm_sub_ps(zmm2, temp0_99)
        float temp0_103[0x4] = _mm_shuffle_ps(zmm12, zmm2, 0xc4)
        arg3 = __andps_xmmxud_memxud(temp0_102, data_143f50560)
        float temp0_105[0x4] = _mm_shuffle_ps(temp0_101, arg3, 0x32)
        _mm_shuffle_ps(_mm_shuffle_ps(temp0_100, arg3, 0), temp0_105, 0x82)
        float temp0_108[0x4] = _mm_shuffle_ps(temp0_100, arg3, 0x31)
        float temp0_109[0x4] = _mm_shuffle_ps(temp0_101, arg3, 0x10)
        float temp0_110[0x4] = _mm_shuffle_ps(temp0_100, temp0_101, 0x12)
        float temp0_111[0x4] = _mm_shuffle_ps(temp0_109, temp0_108, 0x88)
        _mm_shuffle_ps(temp0_110, arg3, 0xe8)
        
        if (rax_13 - 1 s>= 0)
            int64_t temp11_1
            
            do
                void* rbx_15 = zx.q(zx.d(*(rcx_11 + (r15_4 << 1))) * r13_4) + r12_4
                
                if ((*(rbx_15 + 0x5c) & 0x4000000) == 0)
                    int64_t var_170_5 = 0
                    int64_t* rax_14
                    float zmm7_5[0x4]
                    float zmm8_5[0x4]
                    float zmm9_5[0x4]
                    rax_14, zmm6, zmm7_5, zmm8_5, zmm9_5, zmm10 = sub_141fe56b0(arg1 + 0x38, 
                        &var_12c, *(rbx_15 + 0xc), arg3, (*(arg2 + 0x18)).d, nullptr)
                    rcx_11 = arg_8
                    int32_t var_15c_3 = 0
                    float zmm0_3[0x4] = zx.o(*rax_14)
                    result = zx.q(rax_14[1].d)
                    var_168[0] = zmm0_3[0]
                    float temp0_113[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
                    temp0_113[0] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55)[0]
                    float temp0_115[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xc6)
                    temp0_115[0] = result.d[0]
                    float temp0_116[0x4] = _mm_shuffle_ps(temp0_115, temp0_115, 0xc9)
                    var_168 = temp0_116
                    float temp0_117[0x4] = _mm_shuffle_ps(temp0_116, temp0_116, 0xff)
                    float temp0_119[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0xaa), zmm6)
                    float temp0_121[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0x55), temp0_111)
                    float temp0_122[0x4] = _mm_mul_ps(temp0_117, temp0_103)
                    float temp0_124[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0), zmm10)
                    float temp0_127[0x4] = _mm_add_ps(_mm_add_ps(temp0_122, temp0_119), 
                        _mm_add_ps(temp0_121, temp0_124))
                    arg3 = zmm8_5
                    zmm7_5[0] = zmm7_5[0] * temp0_127[0]
                    zmm7_5[0] = zmm7_5[0] f* *(rbx_15 + 0x30)
                    *(rbx_15 + 0x30) = zmm7_5[0]
                    float temp0_128[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0x55)
                    arg3[0] = arg3[0] * temp0_128[0]
                    float temp0_129[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xaa)
                    zmm9_5[0] = zmm9_5[0] * temp0_129[0]
                    arg3[0] = arg3[0] f* *(rbx_15 + 0x34)
                    zmm9_5[0] = zmm9_5[0] f* *(rbx_15 + 0x38)
                    *(rbx_15 + 0x34) = arg3[0]
                    *(rbx_15 + 0x38) = zmm9_5[0]
                
                temp11_1 = r15_4
                r15_4 -= 1
            while (temp11_1 - 1 s>= 0)
else if (rdx != 0)
    if (rcx_1 != 0)
        arg3 = *(rbx + r8_1)
        zmm4 = data_143f50550
        float temp0_47[0x4] = _mm_shuffle_ps(arg3, arg3, 4)
        float temp0_48[0x4] = _mm_add_ps(arg3, arg3)
        float temp0_49[0x4] = _mm_mul_ps(temp0_48, arg3)
        float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x29), temp0_47)
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x12)
        float temp0_53[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0x1a)
        float temp0_55[0x4] = _mm_mul_ps(temp0_52, _mm_shuffle_ps(arg3, arg3, 0xff))
        float temp0_57[0x4] = _mm_add_ps(temp0_53, _mm_shuffle_ps(temp0_49, temp0_49, 1))
        float temp0_58[0x4] = _mm_add_ps(temp0_55, temp0_51)
        float temp0_59[0x4] = _mm_sub_ps(temp0_51, temp0_55)
        zmm3 = __andps_xmmxud_memxud(_mm_sub_ps(zmm4, temp0_57), data_143f50560)
        float temp0_62[0x4] = _mm_shuffle_ps(temp0_59, zmm3, 0x32)
        float temp0_64[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_58, zmm3, 0), temp0_62, 0x82)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_58, zmm3, 0x31)
        float temp0_67[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_59, zmm3, 0x10), temp0_65, 0x88)
        zmm0 = *(rbx + r8_1 + 0x10)
        zmm4[0].q = zmm0 u>> 0x40
        float temp0_68[0x4] = _mm_shuffle_ps(temp0_58, temp0_59, 0x12)
        float temp0_69[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_68, zmm3, 0xe8)
        float var_e8_1[0x4] = temp0_69
        var_118 = temp0_64
        float var_108_1[0x4] = temp0_67
        float var_f8_1[0x4] = temp0_70
        float zmm1[0x4] = sub_1408041d0(&var_118, &var_d8)
        int32_t rax_10 = *(arg2 + 0x118)
        int64_t rcx_9 = *(arg2 + 0xf8)
        result = zx.q(rax_10 - 1)
        int64_t r12_3 = *(arg2 + 0xf0)
        int32_t r13_3 = *(arg2 + 0x114)
        int64_t r15_3 = sx.q(result.d)
        arg_8 = rcx_9
        
        if (rax_10 - 1 s>= 0)
            zmm12 = var_d8
            int64_t temp12_1
            
            do
                void* rbx_12 = zx.q(zx.d(*(rcx_9 + (r15_3 << 1))) * r13_3) + r12_3
                
                if ((*(rbx_12 + 0x5c) & 0x4000000) == 0)
                    int64_t var_170_4 = 0
                    int64_t* rax_11
                    float zmm7_4[0x4]
                    int128_t zmm8_4
                    float zmm9_4[0x4]
                    rax_11, zmm6, zmm7_4, zmm8_4, zmm9_4, zmm10 = sub_141fe56b0(arg1 + 0x38, 
                        &var_12c, *(rbx_12 + 0xc), zmm1, (*(arg2 + 0x18)).d, nullptr)
                    rcx_9 = arg_8
                    int32_t var_15c_2 = 0
                    float zmm0_2[0x4] = zx.o(*rax_11)
                    int32_t rax_12 = rax_11[1].d
                    var_168[0] = zmm0_2[0]
                    float temp0_71[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
                    temp0_71[0] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)[0]
                    float temp0_73[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xc6)
                    temp0_73[0] = rax_12.d
                    float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xc9)
                    var_168 = temp0_74
                    float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xff)
                    float temp0_76[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xaa)
                    float temp0_77[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0x55)
                    float temp0_78[0x4] = _mm_mul_ps(temp0_76, zmm10)
                    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0), zmm12)
                    float temp0_81[0x4] = _mm_mul_ps(temp0_75, zmm6)
                    float var_c8[0x4]
                    float temp0_82[0x4] = _mm_mul_ps(temp0_77, var_c8)
                    float temp0_85[0x4] =
                        _mm_add_ps(_mm_add_ps(temp0_81, temp0_78), _mm_add_ps(temp0_82, temp0_80))
                    zmm1 = zmm9_4
                    zmm7_4[0] = zmm7_4[0] * temp0_85[0]
                    int128_t zmm2_1
                    zmm2_1.d = zmm8_4.d f* _mm_shuffle_ps(temp0_85, temp0_85, 0x55)[0]
                    float temp0_87[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)
                    zmm1[0] = zmm1[0] * temp0_87[0]
                    *(rbx_12 + 0x30) = (_mm_unpacklo_ps(zmm7_4, zmm2_1.q)).q
                    result = zx.q(zmm1[0])
                    *(rbx_12 + 0x38) = result.d
                
                temp12_1 = r15_3
                r15_3 -= 1
            while (temp12_1 - 1 s>= 0)
    else
        int32_t rax_8 = *(arg2 + 0x118)
        int64_t rcx_6 = *(arg2 + 0xf8)
        result = zx.q(rax_8 - 1)
        int64_t r12_2 = *(arg2 + 0xf0)
        int32_t r13_2 = *(arg2 + 0x114)
        int64_t r15_2 = sx.q(result.d)
        arg_8 = rcx_6
        
        if (rax_8 - 1 s>= 0)
            int64_t temp13_1
            
            do
                void* rbx_9 = zx.q(zx.d(*(rcx_6 + (r15_2 << 1))) * r13_2) + r12_2
                
                if ((*(rbx_9 + 0x5c) & 0x4000000) == 0)
                    int64_t var_170_3 = 0
                    int64_t* rax_9
                    float zmm7_3[0x4]
                    float zmm8_3[0x4]
                    float zmm9_3
                    rax_9, zmm7_3, zmm8_3, zmm9_3 = sub_141fe56b0(arg1 + 0x38, &var_12c, 
                        *(rbx_9 + 0xc), arg3, (*(arg2 + 0x18)).d, nullptr)
                    rcx_6 = arg_8
                    zmm7_3[0] = zmm7_3[0] f* *rax_9
                    zmm8_3[0] = zmm8_3[0] f* *(rax_9 + 4)
                    float result_2 = zmm9_3 f* rax_9[1].d
                    arg3 = _mm_unpacklo_ps(zmm7_3, zmm8_3[0].q)
                    *(rbx_9 + 0x30) = arg3.q
                    result = zx.q(result_2)
                    *(rbx_9 + 0x38) = result.d
                
                temp13_1 = r15_2
                r15_2 -= 1
            while (temp13_1 - 1 s>= 0)
else if (rcx_1 != 0)
    int32_t rax_6 = *(arg2 + 0x118)
    int64_t rcx_4 = *(arg2 + 0xf8)
    result = zx.q(rax_6 - 1)
    int64_t r12_1 = *(arg2 + 0xf0)
    int32_t r13_1 = *(arg2 + 0x114)
    int64_t r15_1 = sx.q(result.d)
    arg_8 = rcx_4
    
    if (rax_6 - 1 s>= 0)
        int64_t temp14_1
        
        do
            void* rbx_6 = zx.q(zx.d(*(rcx_4 + (r15_1 << 1))) * r13_1) + r12_1
            
            if ((*(rbx_6 + 0x5c) & 0x4000000) == 0)
                int64_t var_170_2 = 0
                int64_t* rax_7
                float zmm7_2[0x4]
                float zmm8_2[0x4]
                float zmm9_2
                rax_7, zmm7_2, zmm8_2, zmm9_2 = sub_141fe56b0(arg1 + 0x38, &var_12c, 
                    *(rbx_6 + 0xc), arg3, (*(arg2 + 0x18)).d, nullptr)
                rcx_4 = arg_8
                zmm7_2[0] = zmm7_2[0] f* *rax_7
                zmm8_2[0] = zmm8_2[0] f* *(rax_7 + 4)
                float result_1 = zmm9_2 f* rax_7[1].d
                arg3 = _mm_unpacklo_ps(zmm7_2, zmm8_2[0].q)
                *(rbx_6 + 0x30) = arg3.q
                result = zx.q(result_1)
                *(rbx_6 + 0x38) = result.d
            
            temp14_1 = r15_1
            r15_1 -= 1
        while (temp14_1 - 1 s>= 0)
else
    zmm2 = *(rbx + r8_1)
    zmm12 = *(rbx + r8_1 + 0x10)
    int32_t rax_3 = *(arg2 + 0x118)
    float temp0_3[0x4] = _mm_add_ps(zmm2, zmm2)
    int64_t rcx_2 = *(arg2 + 0xf8)
    int64_t r12 = *(arg2 + 0xf0)
    result = zx.q(rax_3 - 1)
    int32_t r13 = *(arg2 + 0x114)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
    arg_8 = rcx_2
    float temp0_5[0x4] = _mm_mul_ps(temp0_3, zmm2)
    int64_t r15 = sx.q(result.d)
    float temp0_7[0x4] = _mm_mul_ps(temp0_4, _mm_shuffle_ps(temp0_3, temp0_3, 0x29))
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x12)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x1a)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_8)
    float temp0_13[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_5, temp0_5, 1))
    float temp0_14[0x4] = _mm_add_ps(temp0_11, temp0_7)
    float temp0_15[0x4] = _mm_sub_ps(temp0_7, temp0_11)
    zmm2 = data_143f50550
    zmm2[0].q = zmm12 u>> 0x40
    float temp0_16[0x4] = _mm_sub_ps(zmm2, temp0_13)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm12, zmm2, 0xc4)
    arg3 = __andps_xmmxud_memxud(temp0_16, data_143f50560)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, arg3, 0x32)
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, arg3, 0), temp0_19, 0x82)
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_14, arg3, 0x31)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_15, arg3, 0x10)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_14, temp0_15, 0x12)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_22, 0x88)
    _mm_shuffle_ps(temp0_24, arg3, 0xe8)
    
    if (rax_3 - 1 s>= 0)
        int64_t temp15_1
        
        do
            void* rbx_3 = zx.q(zx.d(*(rcx_2 + (r15 << 1))) * r13) + r12
            
            if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
                int64_t var_170_1 = 0
                int64_t* rax_4
                int32_t zmm7_1
                int32_t zmm8_1
                int32_t zmm9_1
                rax_4, zmm6, zmm7_1, zmm8_1, zmm9_1, zmm10 = sub_141fe56b0(arg1 + 0x38, &var_12c, 
                    *(rbx_3 + 0xc), arg3, (*(arg2 + 0x18)).d, nullptr)
                rcx_2 = arg_8
                int32_t var_15c_1 = 0
                uint128_t zmm0_1 = zx.o(*rax_4)
                int32_t rax_5 = rax_4[1].d
                var_168[0] = zmm0_1.d
                arg3 = zmm0_1
                float temp0_27[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
                temp0_27[0] = _mm_shuffle_ps(arg3, arg3, 0x55)[0]
                float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc6)
                temp0_29[0] = rax_5[0]
                float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
                var_168 = temp0_30
                float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xff)
                zmm0_1 = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
                float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
                float temp0_34[0x4] = _mm_mul_ps(temp0_31, temp0_17)
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm6)
                float temp0_36[0x4] = _mm_mul_ps(temp0_33, temp0_25)
                float temp0_37[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0)
                float temp0_41[0x4] = _mm_add_ps(_mm_add_ps(temp0_34, zmm0_1), 
                    _mm_add_ps(temp0_36, _mm_mul_ps(temp0_37, zmm10)))
                arg3 = _mm_shuffle_ps(temp0_41, temp0_41, 0x55)
                float temp0_43[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xaa)
                arg3[0] = arg3[0] f* zmm8_1
                zmm0_1.d = temp0_41.d f* zmm7_1
                temp0_43[0] = temp0_43[0] f* zmm9_1
                *(rbx_3 + 0x30) = (_mm_unpacklo_ps(zmm0_1, arg3[0].q)).q
                result = zx.q(temp0_43[0])
                *(rbx_3 + 0x38) = result.d
            
            temp15_1 = r15
            r15 -= 1
        while (temp15_1 - 1 s>= 0)
return result
