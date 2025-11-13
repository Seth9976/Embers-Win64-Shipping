// 函数: sub_1420a4970
// 地址: 0x1420a4970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f21f == 0)
    return 

uint64_t rcx = zx.q(data_143f0f1a0)

if (((*(&data_143f025fc + sx.q(rcx.d) * 0x14) u>> 0x13).b & 1) == 0
        || not(test_bit(data_143f13cd8, rcx)))
    return 

uint64_t rax = arg1[0x2a]

if (*(rax + 8) s<= 0 || *(**rax + 0x208) == 0xffffffff)
    return 

int64_t rbx_1 = data_143f476e0
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

float arg_10 = (*(rbx_1 + (rcx_2 << 2)))[0]
(*(*arg1 + 0x188))(arg1)
void* rax_5 = arg1[0xc9]
float zmm12[0x4] = zx.o(0)
float arg_18 = 0f
float zmm1[0x4] = *(rax_5 + 0x1c0)
float zmm11[0x4] = *(rax_5 + 0x1d0)
int64_t i_4 = sx.q(*(rax_5 + 0x4a0))
float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
float temp0_5[0x4] = _mm_mul_ps(temp0_1, zmm1)
float temp0_8[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), _mm_shuffle_ps(zmm1, zmm1, 0xff))
zmm1 = *(rax_5 + 0x1e0)
float temp0_11[0x4] =
    _mm_add_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x1a), _mm_shuffle_ps(temp0_5, temp0_5, 1))
float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_4)
float temp0_14[0x4] = _mm_sub_ps(temp0_4, temp0_8)
float zmm3[0x4] = data_143f47560
float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
float temp0_17[0x4] = _mm_sub_ps(zmm3, temp0_11)
zmm3[0].q = zmm11 u>> 0x40
zmm11 = _mm_shuffle_ps(zmm11, zmm3, 0xc4)
float var_138_1[0x4] = zmm11
float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_17, zmm1), data_143f47570)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
float temp0_23[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
float zmm7[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_24, 0x88)
float var_158_1[0x4] = zmm7
float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
void*** rbx_2 = j_sub_140a82f30(0x20)

if (rbx_2 == 0)
    rbx_2 = nullptr
else
    *rbx_2 = &data_142efce08
    __builtin_memset(&rbx_2[1], 0, 0x14)

int64_t r15_1 = sx.q(arg1[0xea].d)
int32_t rax_7 = (r15_1 + 1).d
arg1[0xea].d = rax_7

if (rax_7 s> *(arg1 + 0x754))
    sub_1405a4d70(&arg1[0xe9])

int64_t rax_8 = arg1[0xe9]
float var_1a8 = 3.40282347e+38f
int32_t var_1a4_1 = 0x7f7fffff
int32_t var_1a0_1 = 0x7f7fffff
*(rax_8 + (r15_1 << 3)) = rbx_2
int64_t rbx_3 = sx.q(arg1[0xe6].d)
int32_t rax_9 = (rbx_3 + 1).d
arg1[0xe6].d = rax_9

if (rax_9 s> *(arg1 + 0x734))
    sub_140638a00(&arg1[0xe5])

int64_t rcx_6 = arg1[0xe5]
int64_t rdx_4 = rbx_3 * 3
float zmm0_1[0x4] = zx.o(var_1a8.q)
var_1a8 = -3.40282347e+38f
*(rcx_6 + (rdx_4 << 2)) = zmm0_1.q
*(rcx_6 + (rdx_4 << 2) + 8) = var_1a0_1
int64_t rbx_4 = sx.q(arg1[0xe8].d)
float var_1a4_2 = -3.40282347e+38f
float var_1a0_2 = -3.40282347e+38f
int32_t rax_11 = (rbx_4 + 1).d
arg1[0xe8].d = rax_11

if (rax_11 s> *(arg1 + 0x744))
    sub_140638a00(&arg1[0xe7])

int64_t rcx_8 = arg1[0xe7]
int64_t rdx_6 = rbx_4 * 3
int64_t i_2 = i_4
float zmm6[0x4]
float var_58_1[0x4] = zmm6
float zmm8[0x4]
float var_78_1[0x4] = zmm8
*(rcx_8 + (rdx_6 << 2)) = var_1a8.q
float zmm9[0x4]
float var_88_1[0x4] = zmm9
*(rcx_8 + (rdx_6 << 2) + 8) = var_1a0_2
float zmm10[0x4]
float var_98_1[0x4] = zmm10
int64_t i_3 = i_2
int64_t var_198
int64_t var_188
float var_178[0x4]
float var_168[0x4]

if (i_4.d s> 0)
    int32_t var_15c_1 = 0x3f800000
    int64_t r13_1 = 0
    int32_t var_16c_1 = 0x3f800000
    float temp0_106[0x4]
    int64_t i
    
    do
        void* rcx_9 = arg1[0xc9]
        float (* rax_12)[0x4] = *(rcx_9 + 0x498)
        zmm2 = *(rax_12 + r13_1)
        float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_32[0x4] = _mm_mul_ps(temp0_29, temp0_23)
        float temp0_33[0x4] = _mm_mul_ps(temp0_30, temp0_28)
        float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
        float temp0_39[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_31, zmm7), temp0_32), temp0_33), temp0_35)
        zmm2 = *(rax_12 + r13_1 + 0x10)
        float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_42[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_43[0x4] = _mm_mul_ps(temp0_40, temp0_23)
        float temp0_44[0x4] = _mm_mul_ps(temp0_41, temp0_28)
        float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
        float temp0_50[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_42, zmm7), temp0_43), temp0_44), temp0_46)
        zmm2 = *(rax_12 + r13_1 + 0x20)
        float temp0_51[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_53[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_23)
        float temp0_55[0x4] = _mm_mul_ps(temp0_53, temp0_28)
        float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_51, zmm7), temp0_54), temp0_55), temp0_57)
        zmm2 = *(rax_12 + r13_1 + 0x30)
        float temp0_62[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_63[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_64[0x4] = _mm_mul_ps(temp0_62, zmm7)
        float temp0_65[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_66[0x4] = _mm_mul_ps(temp0_63, temp0_23)
        float temp0_67[0x4] = _mm_mul_ps(temp0_65, temp0_28)
        float temp0_68[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_69[0x4] = _mm_add_ps(temp0_64, temp0_66)
        float temp0_70[0x4] = _mm_mul_ps(temp0_68, zmm11)
        float temp0_72[0x4] = _mm_add_ps(_mm_add_ps(temp0_69, temp0_67), temp0_70)
        temp0_72[3] = 0x3f800000
        rax, zmm8 = sub_141f633e0(rcx_9, &var_198, &var_1a8)
        zmm1 = var_198:4.d
        var_168[0] = var_198.d[0]
        float temp0_73[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
        temp0_73[0] = zmm1[0]
        int64_t var_188_1 = 0
        float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xc6)
        float var_190
        temp0_74[0] = var_190[0]
        int32_t var_180_1 = 0
        float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xc9)
        var_168 = temp0_75
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xaa)
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x55)
        r13_1 += 0x40
        float temp0_79[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_75, temp0_75, 0xff), temp0_72)
        var_188 = 0
        float temp0_80[0x4] = _mm_mul_ps(temp0_76, zmm8)
        int32_t var_180_2 = 0
        float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0), temp0_39)
        float temp0_83[0x4] = _mm_mul_ps(temp0_77, temp0_50)
        float temp0_84[0x4] = _mm_add_ps(temp0_79, temp0_80)
        zmm0_1 = var_1a8
        float temp0_85[0x4] = _mm_add_ps(temp0_83, temp0_82)
        var_178[0] = zmm0_1[0]
        float temp0_86[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
        float temp0_87[0x4] = _mm_add_ps(temp0_84, temp0_85)
        temp0_86[0] = var_1a4_2[0]
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xc6)
        temp0_88[0] = var_1a0_2[0]
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xc9)
        var_178 = temp0_89
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0x55)
        float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0), temp0_39)
        float temp0_94[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_89, temp0_89, 0xff), temp0_72)
        float temp0_95[0x4] = _mm_mul_ps(temp0_90, temp0_50)
        float temp0_96[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x55)
        float temp0_97[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xaa)
        float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0xaa), zmm8)
        float temp0_100[0x4] = _mm_add_ps(temp0_95, temp0_92)
        var_198.d = temp0_87[0]
        var_198:4.d = temp0_96[0]
        var_190 = temp0_97[0]
        float temp0_102[0x4] = _mm_add_ps(temp0_100, _mm_add_ps(temp0_94, temp0_99))
        var_1a8 = temp0_102[0]
        float temp0_103[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)
        float temp0_104[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0xaa)
        temp0_102[0] = temp0_102[0] - temp0_87[0]
        zmm7 = var_158_1
        var_1a4_2 = temp0_103[0]
        temp0_103[0] = temp0_103[0] - temp0_96[0]
        var_1a0_2 = temp0_104[0]
        temp0_104[0] = temp0_104[0] - temp0_97[0]
        temp0_102[0] = temp0_102[0] * temp0_102[0]
        temp0_103[0] = temp0_103[0] * temp0_103[0]
        temp0_104[0] = temp0_104[0] * temp0_104[0]
        temp0_102[0] = temp0_102[0] + temp0_103[0]
        temp0_102[0] = temp0_102[0] + temp0_104[0]
        float temp0_105[0x4] = _mm_sqrt_ss(0, temp0_102[0])
        temp0_105[0] = temp0_105[0] * 0.5f
        temp0_106 = _mm_max_ss(temp0_105[0], zmm12[0])
        zmm12 = temp0_106
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_3
    arg_18 = temp0_106[0]

zmm12[0] = zmm12[0] * arg_10
float rsi_1 = 0f
arg_10 = 0f

if (i_2 s<= 0)
    return 

float (* rcx_10)[0x4] = nullptr
int64_t r13_2 = 0
var_198 = 0
int64_t i_1

do
    if (rsi_1 s>= 0)
        rax = arg1[0xc9]
        
        if (rsi_1 s< *(rax + 0x4a0))
            int64_t rax_14 = *(rax + 0x498)
            int64_t var_148_1 = 0
            int32_t var_140_1 = 0
            zmm2 = *(rcx_10 + rax_14)
            float temp0_107[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_108[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_109[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_110[0x4] = _mm_mul_ps(temp0_108, temp0_28)
            float temp0_111[0x4] = _mm_mul_ps(temp0_107, temp0_23)
            float temp0_113[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
            float temp0_117[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_109, zmm7), temp0_111), temp0_110), 
                temp0_113)
            zmm2 = *(rcx_10 + rax_14 + 0x10)
            float temp0_118[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_119[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_120[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_121[0x4] = _mm_mul_ps(temp0_119, temp0_28)
            float temp0_122[0x4] = _mm_mul_ps(temp0_118, temp0_23)
            float temp0_124[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
            float temp0_128[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_120, zmm7), temp0_122), temp0_121), 
                temp0_124)
            zmm2 = *(rcx_10 + rax_14 + 0x20)
            float temp0_129[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_130[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_132[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm7)
            float temp0_133[0x4] = _mm_mul_ps(temp0_130, temp0_28)
            float temp0_134[0x4] = _mm_mul_ps(temp0_129, temp0_23)
            float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
            float temp0_139[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_132, temp0_134), temp0_133), temp0_136)
            zmm2 = *(rcx_10 + rax_14 + 0x30)
            float temp0_140[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_141[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_142[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_143[0x4] = _mm_mul_ps(temp0_140, zmm7)
            float temp0_144[0x4] = _mm_mul_ps(temp0_141, temp0_28)
            float temp0_145[0x4] = _mm_mul_ps(temp0_142, temp0_23)
            float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
            float temp0_150[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_143, temp0_145), temp0_144), temp0_147)
            zmm2 = data_142d3f660
            float temp0_151[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_154[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            temp0_150[3] = 0x3f800000
            float temp0_155[0x4] = __mulps_xmmps_memps(temp0_151, temp0_150)
            float temp0_156[0x4] = _mm_mul_ps(temp0_154, temp0_117)
            float temp0_157[0x4] = _mm_mul_ps(temp0_153, temp0_139)
            float temp0_158[0x4] = _mm_mul_ps(temp0_152, temp0_128)
            float temp0_161[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_155, temp0_157), _mm_add_ps(temp0_158, temp0_156))
            zmm0_1 = arg_18
            float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0x55)
            float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xaa)
            temp0_162[0] = temp0_162[0] - zmm0_1[0]
            temp0_163[0] = temp0_163[0] - zmm0_1[0]
            int64_t rbx_5 = 0
            temp0_161[0] = temp0_161[0] - zmm0_1[0]
            temp0_161[0] = temp0_161[0] + zmm0_1[0]
            temp0_162[0] = temp0_162[0] + zmm0_1[0]
            var_178[1] = temp0_162[0]
            temp0_163[0] = temp0_163[0] + zmm0_1[0]
            var_178[2] = temp0_163[0]
            var_178[0] = temp0_161[0]
            var_168[0] = temp0_161[0]
            var_168[1] = temp0_162[0]
            var_168[2] = temp0_163[0]
            int64_t rdx_12
            
            if (r13_2 s< 0)
            label_1420a51e7:
                r13_2 += 1
                void*** rax_16 = j_sub_140a82f30(0x20)
                void*** rbx_6 = rax_16
                
                if (rax_16 == 0)
                    rbx_6 = nullptr
                else
                    rbx_6[1] = 0
                    *rbx_6 = &data_142efce08
                    rbx_6[2] = 0
                    rbx_6[3].d = 0
                
                float rcx_17 = arg1[0xea].d
                arg1[0xea].d = rcx_17 i+ 1
                
                if (rcx_17 i+ 1 s> *(arg1 + 0x754))
                    sub_1405a4d70(&arg1[0xe9])
                
                *(arg1[0xe9] + (sx.q(rcx_17) << 3)) = rbx_6
                int64_t* rbx_7 = *(arg1[0xe9] + (r13_2 << 3))
                int32_t* rax_24 = j_sub_140a82f30(0x18)
                
                if (rax_24 != 0)
                    *rax_24 = rsi_1
                    *(rax_24 + 8) = 0
                    *(rax_24 + 0x10) = 0
                    void* rcx_20 = rbx_7[2]
                    
                    if (rcx_20 == 0)
                        rbx_7[1] = rax_24
                    else
                        *(rcx_20 + 8) = rax_24
                        *(rax_24 + 0x10) = rbx_7[2]
                    
                    rbx_7[2] = rax_24
                    (*(*rbx_7 + 8))(rbx_7, zx.q(rbx_7[3].d + 1))
                
                int64_t rbx_8 = sx.q(arg1[0xe6].d)
                int32_t rax_26 = (rbx_8 + 1).d
                arg1[0xe6].d = rax_26
                
                if (rax_26 s> *(arg1 + 0x734))
                    sub_140638a00(&arg1[0xe5])
                
                int64_t rcx_24 = arg1[0xe5]
                int64_t rdx_17 = rbx_8 * 3
                float rax_27 = var_178[2]
                *(rcx_24 + (rdx_17 << 2)) = var_178[0].q
                *(rcx_24 + (rdx_17 << 2) + 8) = rax_27
                int64_t rbx_9 = sx.q(arg1[0xe8].d)
                int32_t rax_28 = (rbx_9 + 1).d
                arg1[0xe8].d = rax_28
                
                if (rax_28 s> *(arg1 + 0x744))
                    sub_140638a00(&arg1[0xe7])
                
                zmm0_1 = zx.o(var_168[0].q)
                rdx_12 = rbx_9 * 3
                rax = zx.q(var_168[2])
            else
                void* rdx_8 = arg1[0xe5]
                float (* rax_15)[0x4] = arg1[0xe7]
                void* rcx_11 = rdx_8 + 4
                float (* rdx_9)[0x4] = rdx_8 - rax_15
                
                while (true)
                    zmm0_1 = *(rdx_9 + rax_15)
                    float temp0_164[0x4] = __maxss_xmmss_memss(temp0_161[0], *rax_15)
                    zmm3 = (*rax_15)[1]
                    float temp0_165[0x4] = _mm_min_ss(zmm0_1[0], temp0_161[0])
                    float zmm4_2[0x4] = (*rax_15)[2]
                    float temp0_166[0x4] = _mm_max_ss(zmm3[0], temp0_162[0])
                    float zmm5_2[0x4] = *(rcx_11 + 4)
                    float temp0_167[0x4] = _mm_max_ss(zmm4_2[0], temp0_163[0])
                    float temp0_168[0x4] = _mm_min_ss(zmm5_2[0], temp0_163[0])
                    float temp0_169[0x4] = __minss_xmmss_memss(temp0_162[0], *rcx_11)
                    var_1a8 = temp0_165[0]
                    var_188:4.d = temp0_166[0]
                    var_188.d = temp0_164[0]
                    temp0_164[0] = temp0_164[0] - temp0_165[0]
                    float var_180_3 = temp0_167[0]
                    temp0_166[0] = temp0_166[0] - temp0_169[0]
                    float var_1a4_3 = temp0_169[0]
                    temp0_167[0] = temp0_167[0] - temp0_168[0]
                    float var_1a0_3 = temp0_168[0]
                    temp0_164[0] = temp0_164[0] * temp0_164[0]
                    temp0_166[0] = temp0_166[0] * temp0_166[0]
                    temp0_167[0] = temp0_167[0] * temp0_167[0]
                    temp0_166[0] = temp0_166[0] + temp0_164[0]
                    temp0_166[0] = temp0_166[0] + temp0_167[0]
                    float temp0_170[0x4] = _mm_sqrt_ss(0, temp0_166[0])
                    temp0_170[0] = temp0_170[0] * 0.5f
                    
                    if (temp0_170[0] <= zmm12[0])
                        int64_t* rsi_2 = *(arg1[0xe9] + (rbx_5 << 3))
                        int32_t* rax_18 = j_sub_140a82f30(0x18)
                        
                        if (rax_18 != 0)
                            *rax_18 = arg_10
                            *(rax_18 + 8) = 0
                            *(rax_18 + 0x10) = 0
                            void* rcx_13 = rsi_2[2]
                            
                            if (rcx_13 == 0)
                                rsi_2[1] = rax_18
                            else
                                *(rcx_13 + 8) = rax_18
                                *(rax_18 + 0x10) = rsi_2[2]
                            
                            rsi_2[2] = rax_18
                            (*(*rsi_2 + 8))(rsi_2, zx.q(rsi_2[3].d + 1))
                        
                        int64_t rcx_16 = arg1[0xe5]
                        rdx_12 = rbx_5 * 3
                        rsi_1 = arg_10
                        *(rcx_16 + (rdx_12 << 2)) = var_1a8.q
                        zmm0_1 = zx.o(var_188)
                        *(rcx_16 + (rdx_12 << 2) + 8) = var_1a0_3
                        rax = zx.q(var_180_3)
                        break
                    
                    rbx_5 += 1
                    rcx_11 += 0xc
                    rax_15 = &(*rax_15)[3]
                    
                    if (rbx_5 s> r13_2)
                        goto label_1420a51e7
            
            int64_t rcx_26 = arg1[0xe7]
            i_2 = i_3
            zmm11 = var_138_1
            *(rcx_26 + (rdx_12 << 2)) = zmm0_1.q
            *(rcx_26 + (rdx_12 << 2) + 8) = rax.d
            rcx_10 = var_198
    
    zmm7 = var_158_1
    rsi_1 += 1
    rcx_10 = &rcx_10[4]
    arg_10 = rsi_1
    i_1 = i_2
    i_2 -= 1
    var_198 = rcx_10
    i_3 = i_2
while (i_1 != 1)
