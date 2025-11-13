// 函数: sub_141a80fc0
// 地址: 0x141a80fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t i_8 = sx.q(arg4[1].d)
int128_t* result = arg1
int64_t i_3 = 0
int128_t* result_1 = arg1
int64_t var_1e8
__builtin_memset(&var_1e8, 0, 0x1c)
int64_t var_1c8
__builtin_memset(&var_1c8, 0, 0x1c)
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x1c)
int64_t var_188
__builtin_memset(&var_188, 0, 0x1c)
float var_128[0x4]
float zmm6[0x4]
uint32_t zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm15[0x4]
zmm6, zmm11, zmm12, zmm13, zmm15 = sub_140ad7d70(arg2, &var_128, arg3)
int32_t zmm8 = 0x3727c5ac
int64_t i_7 = i_8
float var_228[0x4]
float var_158[0x4]
float zmm0_1[0x4]
float zmm1_1[0x4]

if (i_8.d s> 0)
    int64_t rsi_1 = 0
    int64_t i
    
    do
        void* rbx_1 = *arg4 + rsi_1
        
        if (not(zmm8 f>= *(rbx_1 + 0x10)))
            zmm1_1 = *(rbx_1 + 0x60)
            float zmm3_1[0x4] = data_143f2b550
            float zmm2_1[0x4] = zx.o(0)
            var_228 = *(rbx_1 + 0x50)
            zmm0_1 = *(rbx_1 + 0x70)
            float var_218_1[0x4] = zmm1_1
            zmm1_1 = zmm3_1
            zmm3_1 = __andps_xmmxud_memxud(zmm3_1, data_143f2b540)
            float var_208_1[0x4] = zmm0_1
            zmm1_1[0].q = zmm2_1 u>> 0x40
            var_158 = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
            float var_148_1[0x4] = zmm2_1
            float var_138_1[0x4] = zmm3_1
            zmm6, zmm8, zmm11, zmm12, zmm13, zmm15 =
                sub_141a7ebe0(rbx_1, &var_228, &var_158, arg3, zmm1_1, zmm2_1, zmm3_1)
            int64_t* rcx_2 = *(rbx_1 + 8)
            
            if (rcx_2 != 0)
                zmm0_1 = *(rbx_1 + 0x10)
                (*(*rcx_2 + 8))(zmm0_1, &var_158, arg2, arg3, zmm0_1[0], &var_1e8, arg2)
        
        rsi_1 -= -0x80
        i = i_7
        i_7 -= 1
    while (i != 1)
    result = result_1

zmm1_1 = data_143f2b550
zmm0_1 = zmm1_1
float var_58[0x4] = zmm6
float zmm9[0x4] = zx.o(0)
float var_c8[0x4] = zmm13
zmm0_1[0].q = zmm9 u>> 0x40
zmm1_1 = _mm_and_ps(zmm1_1, data_143f2b540)
float var_e8[0x4] = zmm15
var_158 = _mm_shuffle_ps(zx.o(0), zmm0_1, 0xc4)
char rax_4
uint32_t zmm7_1[0x4]
float zmm8_1[0x4]
uint32_t zmm9_1[0x4]
uint32_t zmm10_1[0x4]
rax_4, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_141a7fee0(&var_1e8, &var_158)
uint32_t (* var_178)[0x4]
uint32_t (* r15)[0x4] = var_178
uint32_t (* var_198)[0x4]
uint32_t (* rsi_2)[0x4] = var_198
int32_t* var_1b8
int32_t* rbx_2 = var_1b8
int32_t* var_1d8
uint32_t zmm0_2[0x4]
uint32_t zmm1_2[0x4]
float zmm2_2[0x4]
uint32_t zmm3_2[0x4]
float zmm6_1[0x4]
float zmm14[0x4]

if (rax_4 == 0)
    int32_t var_1d0
    float zmm4_1[0x4]
    float zmm5_1[0x4]
    float var_118[0x4]
    
    if (var_1d0 s<= 0)
        zmm15 = var_118
    else
        zmm2_2 = zx.o(0)
        int64_t i_1 = 0
        int32_t var_190
        void* rcx_4 = &(*rsi_2)[sx.q(var_190)]
        uint32_t (* rax_6)[0x4] = rsi_2
        uint64_t r8_5 = (rcx_4 - rsi_2 + 3) u>> 2
        
        if (rsi_2 u> rcx_4)
            r8_5 = 0
        
        if (r8_5 == 0)
            zmm15 = var_118
        else
            if (r8_5 u>= 8)
                zmm1_2 = zx.o(0)
                
                do
                    i_1 += 8
                    zmm1_2 = _mm_add_ps(zmm1_2, *rax_6)
                    zmm0_2 = rax_6[1]
                    rax_6 = &rax_6[2]
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm0_2)
                while (i_1 != (r8_5 & 0xfffffffffffffff8))
                
                zmm1_2 = _mm_add_ps(zmm1_2, zmm2_2)
                zmm2_2 = zmm1_2
                zmm2_2[0].q = zmm1_2 u>> 0x40
                zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xf5)
                zmm2_2[0] = zmm2_2[0] f+ zmm0_2[0]
            
            for (; i_1 != r8_5; i_1 += 1)
                zmm2_2[0] = zmm2_2[0] f+ *rax_6
                rax_6 = &(*rax_6)[1]
            
            if (zmm2_2[0] <= zmm8_1[0])
                zmm15 = var_118
            else
                zmm7_1 = 0x3f800000
                
                if (not(zmm2_2[0] <= 1f))
                    zmm7_1[0] = 1f / zmm2_2[0]
                
                zmm7_1[0] = zmm7_1[0] f* *rsi_2
                zmm4_1 = zmm7_1
                zmm5_1 = zmm7_1
                zmm4_1[0] = zmm4_1[0] f* *var_1d8
                zmm5_1[0] = zmm5_1[0] f* var_1d8[1]
                zmm7_1[0] = zmm7_1[0] f* var_1d8[2]
                
                if (var_1d0 s> 1)
                    uint32_t* rdx_4 = &(*rsi_2)[1]
                    void* rcx_8 = &var_1d8[5]
                    uint64_t i_5 = zx.q(var_1d0 - 1)
                    uint64_t i_2
                    
                    do
                        zmm2_2 = zmm7_1
                        zmm2_2[0] = zmm2_2[0] f* *rdx_4
                        rdx_4 = &rdx_4[1]
                        zmm0_2 = zmm2_2
                        zmm1_2 = zmm2_2
                        zmm0_2[0] = zmm0_2[0] f* *(rcx_8 - 8)
                        zmm1_2[0] = zmm1_2[0] f* *(rcx_8 - 4)
                        zmm2_2[0] = zmm2_2[0] f* *rcx_8
                        rcx_8 += 0xc
                        zmm4_1[0] = zmm4_1[0] f+ zmm0_2[0]
                        zmm5_1[0] = zmm5_1[0] f+ zmm1_2[0]
                        zmm7_1[0] = zmm7_1[0] f+ zmm2_2[0]
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                
                data_143f2b540
                zmm15 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm7_1[0].q), 
                    _mm_unpacklo_ps(zmm5_1, 0)[0].q)
                float var_118_2[0x4] = zmm15
    char rax_7
    rax_7, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11, zmm12 =
        sub_141a80100(&var_1e8, &result_1)
    
    if (rax_7 == 0)
        zmm13 = var_128
    else
        zmm13 = result_1.o
        var_128 = zmm13
    
    int32_t var_1b0
    float var_108[0x4]
    
    if (var_1b0 s<= 0)
        zmm14 = var_108
    else
        zmm2_2 = zx.o(0)
        int32_t var_170
        void* rcx_10 = &(*r15)[sx.q(var_170)]
        uint32_t (* rax_9)[0x4] = r15
        uint64_t rdx_9 = (rcx_10 - r15 + 3) u>> 2
        
        if (r15 u> rcx_10)
            rdx_9 = 0
        
        if (rdx_9 == 0)
            zmm14 = var_108
        else
            if (rdx_9 u>= 8)
                zmm1_2 = zx.o(0)
                
                do
                    i_3 += 8
                    zmm1_2 = _mm_add_ps(zmm1_2, *rax_9)
                    zmm0_2 = rax_9[1]
                    rax_9 = &rax_9[2]
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm0_2)
                while (i_3 != (rdx_9 & 0xfffffffffffffff8))
                
                zmm1_2 = _mm_add_ps(zmm1_2, zmm2_2)
                zmm2_2 = zmm1_2
                zmm2_2[0].q = zmm1_2 u>> 0x40
                zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xf5)
                zmm2_2[0] = zmm2_2[0] f+ zmm0_2[0]
            
            for (; i_3 != rdx_9; i_3 += 1)
                zmm2_2[0] = zmm2_2[0] f+ *rax_9
                rax_9 = &(*rax_9)[1]
            
            if (zmm2_2[0] <= zmm8_1[0])
                zmm14 = var_108
            else
                if (not(zmm2_2[0] <= zmm6_1[0]))
                    zmm6_1[0] = zmm6_1[0] / zmm2_2[0]
                
                zmm3_2 = zmm6_1
                zmm3_2[0] = zmm3_2[0] f* *r15
                zmm4_1 = zmm3_2
                zmm5_1 = zmm3_2
                zmm4_1[0] = zmm4_1[0] f* *rbx_2
                zmm5_1[0] = zmm5_1[0] f* rbx_2[1]
                zmm3_2[0] = zmm3_2[0] f* rbx_2[2]
                
                if (var_1b0 s> 1)
                    uint32_t* rdx_10 = &(*r15)[1]
                    uint64_t i_6 = zx.q(var_1b0 - 1)
                    void* rcx_13 = &rbx_2[5]
                    uint64_t i_4
                    
                    do
                        rdx_10 = &rdx_10[1]
                        zmm6_1[0] = zmm6_1[0] f* rdx_10[-1]
                        rcx_13 += 0xc
                        zmm0_2 = zmm6_1
                        zmm1_2 = zmm6_1
                        zmm0_2[0] = zmm0_2[0] f* *(rcx_13 - 0x14)
                        zmm1_2[0] = zmm1_2[0] f* *(rcx_13 - 0x10)
                        zmm6_1[0] = zmm6_1[0] f* *(rcx_13 - 0xc)
                        zmm4_1[0] = zmm4_1[0] f* zmm0_2[0]
                        zmm5_1[0] = zmm5_1[0] f* zmm1_2[0]
                        zmm3_2[0] = zmm3_2[0] f* zmm6_1[0]
                        i_4 = i_6
                        i_6 -= 1
                    while (i_4 != 1)
                
                float temp0_18[0x4] = _mm_unpacklo_ps(zmm5_1, 0)
                zmm14 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm3_2[0].q), temp0_18[0].q)
                float var_108_2[0x4] = zmm14
else
    zmm13 = var_158
    zmm15 = zmm9
    zmm14 = zmm1_1
    var_128 = zmm13
    float var_118_1[0x4] = zmm15
    float var_108_1[0x4] = zmm14

*result = zmm10_1
result[1] = zmm9_1
result[2] = _mm_and_ps(data_143f2b550, zmm7_1)
zmm8_1 = arg3[2]
zmm7_1 = *arg3
zmm2_2 = zmm7_1

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm14, zmm8_1), data_143f2b5a0, 1)) == 0)
    zmm6_1 = arg3[1]
    float temp0_156[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm7_1, 0), _mm_shuffle_ps(zmm13, zmm13, 0x1b))
    zmm1_2 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
    float temp0_158[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
    float temp0_159[0x4] = _mm_mul_ps(zmm8_1, zmm15)
    float temp0_160[0x4] = __mulps_xmmps_memps(temp0_156, data_143f2b4e0)
    zmm0_2 = _mm_mul_ps(temp0_158, zmm13)
    zmm3_2 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2)
    float temp0_163[0x4] = _mm_mul_ps(zmm8_1, zmm14)
    float temp0_164[0x4] = _mm_add_ps(temp0_160, zmm0_2)
    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
    zmm0_2 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
    zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
    float temp0_169[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
    zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b4d0)
    zmm0_2 = _mm_mul_ps(zmm0_2, temp0_169)
    result[2] = temp0_163
    float temp0_174[0x4] =
        _mm_add_ps(_mm_add_ps(temp0_164, zmm1_2), __mulps_xmmps_memps(zmm0_2, data_143f2b4c0))
    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xc9), zmm3_2)
    *result = temp0_174
    float temp0_179[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xd2), zmm7_1), zmm0_2)
    float temp0_180[0x4] = _mm_add_ps(temp0_179, temp0_179)
    float temp0_181[0x4] = _mm_mul_ps(temp0_158, temp0_180)
    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0xd2), zmm7_1)
    zmm0_2 = _mm_shuffle_ps(temp0_180, temp0_180, 0xc9)
    float temp0_185[0x4] = _mm_add_ps(temp0_181, temp0_159)
    result[1] =
        _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1_2, _mm_mul_ps(zmm0_2, zmm3_2)), temp0_185), zmm6_1)
else
    zmm10_1 = data_143f2b550
    zmm1_2 = _mm_add_ps(zmm7_1, zmm7_1)
    float temp0_26[0x4] = _mm_shuffle_ps(zmm2_2, zmm7_1, 4)
    uint32_t var_a8_1[0x4] = zmm11
    float temp0_27[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
    float var_b8_1[0x4] = zmm12
    _mm_mul_ps(zmm8_1, zmm14)
    zmm3_2 = _mm_mul_ps(zmm1_2, zmm7_1)
    float temp0_31[0x4] = _mm_mul_ps(temp0_26, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
    zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0x1a), _mm_shuffle_ps(zmm3_2, zmm3_2, 1))
    zmm7_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xff), zmm1_2)
    zmm1_2 = _mm_sub_ps(zmm10_1, zmm0_2)
    zmm11 = _mm_add_ps(zmm7_1, temp0_31)
    float temp0_40[0x4] = _mm_sub_ps(temp0_31, zmm7_1)
    zmm1_2 = _mm_mul_ps(zmm1_2, zmm8_1)
    zmm11 = _mm_mul_ps(zmm11, zmm8_1)
    zmm8_1 = arg3[1]
    uint32_t temp0_43[0x4] = __andps_xmmxud_memxud(zmm1_2, data_143f2b540)
    float temp0_44[0x4] = _mm_mul_ps(temp0_27, temp0_40)
    zmm9_1 = _mm_shuffle_ps(zmm11, temp0_43, 0)
    float temp0_46[0x4] = _mm_add_ps(zmm13, zmm13)
    zmm9_1 = _mm_shuffle_ps(zmm9_1, _mm_shuffle_ps(temp0_44, temp0_43, 0x32), 0x82)
    zmm0_2 = _mm_shuffle_ps(zmm11, temp0_43, 0x31)
    zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_44, temp0_43, 0x10), zmm0_2, 0x88)
    zmm3_2 = _mm_mul_ps(temp0_46, zmm13)
    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, temp0_44, 0x12), temp0_43, 0xe8)
    zmm1_2 = _mm_shuffle_ps(temp0_46, temp0_46, 0x29)
    zmm10_1[0].q = zmm8_1 u>> 0x40
    float temp0_56[0x4] = _mm_shuffle_ps(zmm8_1, zmm10_1, 0xc4)
    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm13, zmm13, 4))
    zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0x1a), _mm_shuffle_ps(zmm3_2, zmm3_2, 1))
    float temp0_62[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
    float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0x12), temp0_62)
    float temp0_65[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_66[0x4] = _mm_add_ps(temp0_64, zmm1_2)
    zmm1_2 = _mm_sub_ps(zmm1_2, temp0_64)
    float temp0_68[0x4] = _mm_mul_ps(temp0_66, zmm14)
    float temp0_69[0x4] = _mm_mul_ps(temp0_65, zmm1_2)
    uint32_t temp0_72[0x4] =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10_1, zmm0_2), zmm14), data_143f2b540)
    zmm0_2 = _mm_shuffle_ps(temp0_69, temp0_72, 0x32)
    zmm3_2 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_68, temp0_72, 0), zmm0_2, 0x82)
    zmm0_2 = _mm_shuffle_ps(temp0_68, temp0_72, 0x31)
    float temp0_78[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_69, temp0_72, 0x10), zmm0_2, 0x88)
    float temp0_79[0x4] = _mm_shuffle_ps(temp0_68, temp0_69, 0x12)
    float temp0_80[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
    float temp0_81[0x4] = _mm_shuffle_ps(temp0_79, temp0_72, 0xe8)
    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa), zmm11)
    float temp0_84[0x4] = _mm_mul_ps(temp0_80, zmm7_1)
    zmm10_1[0].q = zmm15 u>> 0x40
    float temp0_85[0x4] = _mm_shuffle_ps(zmm15, zmm10_1, 0xc4)
    zmm0_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0)
    zmm3_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xff), temp0_56)
    float temp0_90[0x4] = _mm_add_ps(temp0_84, _mm_mul_ps(zmm0_2, zmm9_1))
    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0), zmm9_1)
    float temp0_93[0x4] = _mm_add_ps(temp0_90, zmm1_2)
    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xaa), zmm11)
    float temp0_96[0x4] = _mm_add_ps(temp0_93, zmm3_2)
    zmm3_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0x55), zmm7_1)
    float temp0_99[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xff)
    var_228 = temp0_96
    float temp0_100[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0x55)
    zmm3_2 = _mm_add_ps(zmm3_2, zmm0_2)
    float temp0_102[0x4] = _mm_mul_ps(temp0_100, zmm7_1)
    float temp0_103[0x4] = _mm_mul_ps(temp0_99, temp0_56)
    zmm0_2 = _mm_shuffle_ps(temp0_81, temp0_81, 0)
    zmm3_2 = _mm_add_ps(zmm3_2, zmm1_2)
    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9_1)
    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xaa), zmm11)
    zmm3_2 = _mm_add_ps(zmm3_2, temp0_103)
    float temp0_110[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0xff)
    float temp0_111[0x4] = _mm_add_ps(temp0_102, zmm0_2)
    float temp0_112[0x4] = _mm_mul_ps(temp0_110, temp0_56)
    zmm0_2 = _mm_shuffle_ps(temp0_85, temp0_85, 0)
    int96_t var_218_2 = zmm3_2[0].12
    zmm3_2 = _mm_shuffle_ps(temp0_85, temp0_85, 0x55)
    float temp0_115[0x4] = _mm_add_ps(temp0_111, zmm1_2)
    zmm3_2 = _mm_mul_ps(zmm3_2, zmm7_1)
    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0xaa), zmm11)
    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9_1)
    float temp0_120[0x4] = _mm_add_ps(temp0_115, temp0_112)
    float temp0_122[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0xff), temp0_56)
    zmm3_2 = _mm_add_ps(zmm3_2, zmm0_2)
    int96_t var_208_2 = temp0_120[0].12
    int96_t var_1f8_1 = _mm_add_ps(_mm_add_ps(zmm3_2, zmm1_2), temp0_122)[0].12
    int128_t zmm10_2
    int512_t zmm11_1
    float zmm12_1[0x4]
    zmm10_2, zmm11_1, zmm12_1 = sub_1407740e0(&var_228, 0x322bcc77)
    float zmm2_3[0x4] = var_228[0]
    float zmm1_3 = var_228[1]
    float zmm4_2[0x4] =
        _mm_and_ps(_mm_cmpeq_ps(data_143f2b5a0, zmm12_1, 2), data_143f2b590 ^ zmm10_2)
    uint32_t zmm0_3[0x4] = var_228[2]
    zmm4_2 ^= data_143f2b590
    zmm2_3[0] = zmm2_3[0] * zmm4_2[0]
    zmm1_3 = zmm1_3 * zmm4_2[0]
    zmm0_3[0] = zmm0_3[0] f* zmm4_2[0]
    var_228[0] = zmm2_3[0]
    var_228[1] = zmm1_3
    float temp0_128[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
    zmm1_3 = var_218_2:4.d * temp0_128[0]
    var_228[2] = zmm0_3[0]
    zmm0_3 = var_218_2:8.d
    zmm0_3[0] = zmm0_3[0] f* temp0_128[0]
    float zmm3_3 = var_218_2.d * temp0_128[0]
    zmm2_3 = var_208_2.d
    float temp0_129[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
    var_218_2:4.d = zmm1_3
    var_218_2:8.d = zmm0_3[0]
    zmm0_3 = var_208_2:8.d
    zmm1_3 = var_208_2:4.d * temp0_129[0]
    zmm0_3[0] = zmm0_3[0] f* temp0_129[0]
    zmm2_3[0] = zmm2_3[0] * temp0_129[0]
    var_208_2:4.d = zmm1_3
    var_208_2:8.d = zmm0_3[0]
    var_218_2.d = zmm3_3
    var_208_2.d = zmm2_3[0]
    sub_14077e4a0(&result_1, &var_228)
    float zmm5_2[0x4] = result_1.o
    zmm6_1 = data_143f2b570
    r15 = var_178
    rsi_2 = var_198
    rbx_2 = var_1b8
    zmm11_1.o = var_a8_1
    float temp0_130[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
    float (* var_238)[0x4]
    var_238.d = 0x322bcc77
    float temp0_132[0x4] = _mm_add_ps(temp0_130, _mm_shuffle_ps(temp0_130, temp0_130, 0x4e))
    float temp0_134[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0x39), temp0_132)
    float temp0_135[0x4] = _mm_rsqrt_ps(temp0_134)
    float temp0_136[0x4] = _mm_mul_ps(temp0_134, zmm6_1)
    float temp0_141[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_135, temp0_135), temp0_136)), 
            temp0_135), 
        temp0_135)
    float temp0_144[0x4] =
        _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_141, temp0_141), temp0_136))
    float temp0_146[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_134, 2)
    float temp0_148[0x4] = _mm_add_ps(_mm_mul_ps(temp0_144, temp0_141), temp0_141)
    float temp0_149[0x4] = _mm_unpacklo_ps(var_1f8_1:4.d, 0)
    zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_148, zmm5_2) ^ data_143f2b560, temp0_146) ^ data_143f2b560
    float temp0_153[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_1f8_1.d, var_1f8_1:8.d[0].q), temp0_149[0].q)
    result[2] = zmm12_1
    result[1] = temp0_153
    *result = zmm6_1

if (r15 != 0)
    sub_140a74f90(r15)
    rsi_2 = var_198
    rbx_2 = var_1b8

int64_t rcx_17 = var_188

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)
    rsi_2 = var_198
    rbx_2 = var_1b8

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)
    rbx_2 = var_1b8

int64_t rcx_19 = var_1a8

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)
    rbx_2 = var_1b8

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t rcx_21 = var_1c8

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

if (var_1d8 != 0)
    sub_140a74f90(var_1d8)

int64_t rcx_23 = var_1e8

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_268)
return result
