// 函数: sub_1406f8c10
// 地址: 0x1406f8c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_2 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_3)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
uint32_t rcx_2 = zx.d(rax[1])
int32_t* r14 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
uint32_t rax_7 = rcx_2 u>> 0xf
int32_t i_1 = rcx_2 & 0x7fff
uint32_t arg_10 = rax_7
rax_7.b = not.b(rax_7.b)
int32_t* rsi_1

if ((rax_7.b & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_8 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_1 -= *(rdx_2 + r8)
            rax_8 += 1
            rdx_2 = rax_8 << 2
            r9 += 1
        while (i_1 s>= *(rdx_2 + r8))
    
    rsi_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_218
sub_1407422f0(&var_218, arg2)
char var_127
char rax_12 = var_127
int64_t var_288
float var_278[0x4]
uint32_t (* rcx_5)[0x4]
float zmm6[0x4]

if (rax_12 == 0)
    rcx_5 = &var_278
    var_278 = data_14399f720
else
    uint32_t (* rax_13)[0x4]
    rax_13, zmm6 = sub_140ae1ba0(&r14[0x34], &var_288)
    rcx_5 = rax_13
    rax_12 = var_127

uint32_t zmm14[0x4] = *rcx_5

if (rax_12 != 0)
    zmm6 = sub_140ae1ba0(&r14[0x54], &var_288)

void* rax_14 = sub_140d3c6e0(r14)

if (rax_14 != 0)
    void* rax_15 = sub_142591550()
    void* rcx_8 = *(rax_14 + 0x10)
    int64_t rdx_6 = sx.q(*(rax_15 + 0x38))
    
    if (rdx_6.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_6 << 3)) == rax_15 + 0x30
            && *(rax_14 + 0x430) != 0)
        sub_141f66050(rax_14, r14[0x1a])

if (sub_140d3c6e0(r14) != 0)
    sub_142591550()

if (*(r14 + 0x58) != 0 && r14[0x86].b != 0)
    void* rax_18 = sub_140d3c6e0(r14)
    
    if (rax_18 != 0)
        void* rax_19 = sub_142591550()
        void* rcx_13 = *(rax_18 + 0x10)
        int64_t rdx_8 = sx.q(*(rax_19 + 0x38))
        
        if (rdx_8.d s<= *(rcx_13 + 0x38) && *(*(rcx_13 + 0x30) + (rdx_8 << 3)) == rax_19 + 0x30
                && *(rax_18 + 0x430) != 0)
            sub_141f66050(rax_18, r14[0x1a])

void* r9_1 = *(r14 + 0x70)
int32_t r8_1

if (r9_1 == 0)
    r8_1 = 0
else
    r8_1 = *(r9_1 + sx.q(*(r9_1 + 0x34)) * 0x10 + 0x68)

uint64_t result = zx.q(r14[0x71])
int32_t rdx_11 = r14[0x6e] + r8_1
int128_t zmm13
zmm13.d = 1f f/ r14[0x64]
uint64_t r10_2 = zx.q(result.d) << 4
uint64_t r13_3 = zx.q((result - 1).d) & 1
int32_t arg_18 = rdx_11
uint64_t arg_20 = r10_2

if (*(arg2 + 0x40) s> 0)
    float zmm5[0x4] = arg_10
    float zmm8[0x4] = data_143cdf9b0
    float zmm9[0x4] = arg_10
    float zmm10[0x4] = arg_10
    float zmm12[0x4] = data_143cdf9c0
    float zmm15[0x4] = data_143cdf9d0
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    
    do
        int64_t rcx_16 = sx.q(*rsi_1)
        rsi_1 = &rsi_1[zx.q(arg_10.b)]
        result = zx.q(rcx_16.d - r8_1)
        char var_126
        float zmm4[0x4]
        int32_t var_1cc
        void* var_1c0
        int32_t var_1b4
        void* var_1a8
        int32_t var_19c
        void* var_190
        int32_t result_2
        void* var_178
        float zmm2[0x4]
        float zmm3[0x4]
        
        if (rcx_16.d s< 0 || rcx_16.d s>= rdx_11)
            zmm8 = data_143dbb1f8
            zmm11 = data_143dbb1fc
            zmm12 = data_143dbb200
            int32_t var_22c_1 = 0x3f800000
            float var_238[0x4]
            var_238[0] = zmm8[0]
            var_288 = 0
            float temp0_113[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
            temp0_113[0] = zmm11[0]
            int32_t var_280_4 = 0
            float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xc6)
            temp0_114[0] = zmm12[0]
            float temp0_115[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0xc9)
            var_238 = temp0_115
            float temp0_117[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_115, temp0_115, 0xaa), *(r14 + 0xf0))
            float temp0_119[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_115, temp0_115, 0x55), *(r14 + 0xe0))
            float temp0_121[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_115, temp0_115, 0xff), *(r14 + 0x100))
            float temp0_123[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_115, temp0_115, 0), *(r14 + 0xd0))
            float temp0_126[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_117, temp0_121), _mm_add_ps(temp0_119, temp0_123))
            zmm4 = temp0_126
            zmm6 = _mm_shuffle_ps(temp0_126, temp0_126, 0x55)
            zmm7 = _mm_shuffle_ps(temp0_126, temp0_126, 0xaa)
            
            if (var_126 != 0)
                int32_t var_21c_1 = 0x3f800000
                float var_228[0x4]
                var_228[0] = zmm8[0]
                var_288 = 0
                float temp0_129[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
                temp0_129[0] = zmm11[0]
                int32_t var_280_5 = 0
                float temp0_130[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0xc6)
                temp0_130[0] = zmm12[0]
                float temp0_131[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0xc9)
                var_228 = temp0_131
                float temp0_133[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0xff), *(r14 + 0x180))
                float temp0_135[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0x55), *(r14 + 0x160))
                float temp0_137[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0xaa), *(r14 + 0x170))
                float temp0_139[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0), *(r14 + 0x150))
                float temp0_142[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_133, temp0_137), _mm_add_ps(temp0_135, temp0_139))
                zmm5 = temp0_142
                zmm9 = _mm_shuffle_ps(temp0_142, temp0_142, 0x55)
                zmm10 = _mm_shuffle_ps(temp0_142, temp0_142, 0xaa)
            
            zmm12 = data_143cdf9c0
            zmm8 = data_143cdf9b0
            
            if (var_127 != 0)
                void* rdx_30 = var_1c0
                float zmm1[0x4] = data_14399f720:4.d
                zmm2 = data_14399f720:8.d
                zmm3 = data_14399f720:0xc.d
                var_1c0 = rdx_30 + (sx.q(var_1cc) << 2)
                *rdx_30 = data_14399f720.d[0]
                void* rdx_31 = var_1a8
                var_1a8 = rdx_31 + (sx.q(var_1b4) << 2)
                *rdx_31 = zmm1[0]
                void* rdx_32 = var_190
                var_190 = rdx_32 + (sx.q(var_19c) << 2)
                *rdx_32 = zmm2[0]
                void* rdx_33 = var_178
                result = sx.q(result_2)
                var_178 = rdx_33 + (result << 2)
                *rdx_33 = zmm3[0]
        else
            var_288 = 0
            int32_t var_280_1 = 0
            
            if (rcx_16.d s< r8_1)
                int64_t rdx_16 = sx.q(*(r9_1 + 0x34))
                int64_t rcx_24 = rcx_16 * 6
                int32_t var_24c_1 = 0x3f800000
                result = (rdx_16 + 6) * 2
                int64_t r10_3 = *(r9_1 + (result << 3))
                float zmm0[0x4] = *(r10_3 + (rcx_24 << 3) + 0x10)
                float var_258[0x4]
                var_258[0] = zmm0[0]
                float temp0_57[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                float temp0_58[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                float temp0_59[0x4] = _mm_shuffle_ps(var_258, var_258, 0xe1)
                temp0_59[0] = temp0_57[0]
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc6)
                temp0_60[0] = temp0_58[0]
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc9)
                var_258 = temp0_61
                float temp0_63[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), *(r14 + 0x100))
                float temp0_65[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0x55), *(r14 + 0xe0))
                float temp0_67[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), *(r14 + 0xf0))
                float temp0_69[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0), *(r14 + 0xd0))
                float temp0_72[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_63, temp0_67), _mm_add_ps(temp0_65, temp0_69))
                zmm4 = temp0_72
                zmm6 = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
                zmm7 = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)
                
                if (var_126 != 0)
                    int32_t var_23c_1 = 0x3f800000
                    var_288 = 0
                    int32_t var_280_3 = 0
                    result = *(r9_1 + ((rdx_16 ^ 1) + 6) * 0x10)
                    zmm0 = *(result + (rcx_24 << 3) + 0x10)
                    float var_248[0x4]
                    var_248[0] = zmm0[0]
                    float temp0_75[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    float temp0_76[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                    float temp0_77[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
                    temp0_77[0] = temp0_75[0]
                    float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc6)
                    temp0_78[0] = temp0_76[0]
                    float temp0_79[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xc9)
                    var_248 = temp0_79
                    float temp0_81[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_79, temp0_79, 0xff), *(r14 + 0x180))
                    float temp0_83[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_79, temp0_79, 0x55), *(r14 + 0x160))
                    float temp0_85[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_79, temp0_79, 0xaa), *(r14 + 0x170))
                    float temp0_87[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_79, temp0_79, 0), *(r14 + 0x150))
                    float temp0_90[0x4] =
                        _mm_add_ps(_mm_add_ps(temp0_81, temp0_85), _mm_add_ps(temp0_83, temp0_87))
                    zmm5 = temp0_90
                    zmm9 = _mm_shuffle_ps(temp0_90, temp0_90, 0x55)
                    zmm10 = _mm_shuffle_ps(temp0_90, temp0_90, 0xaa)
                
                if (var_127 != 0)
                    zmm2 = *(r10_3 + (rcx_24 << 3))
                    void* rdx_20 = var_1c0
                    float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), 
                        _mm_shuffle_ps(zmm14, zmm14, 0))
                    float temp0_96[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                    float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xff), zmm2)
                    var_1c0 = rdx_20 + (sx.q(var_1cc) << 2)
                    float temp0_99[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                    float temp0_101[0x4] = _mm_add_ps(_mm_mul_ps(temp0_95, zmm15), temp0_98)
                    float temp0_103[0x4] = _mm_mul_ps(temp0_96, _mm_shuffle_ps(zmm14, zmm14, 0x55))
                    float temp0_105[0x4] = _mm_mul_ps(temp0_99, _mm_shuffle_ps(zmm14, zmm14, 0xaa))
                    float temp0_106[0x4] = _mm_mul_ps(temp0_103, zmm12)
                    float temp0_107[0x4] = _mm_mul_ps(temp0_105, zmm8)
                    float temp0_109[0x4] = _mm_add_ps(_mm_add_ps(temp0_101, temp0_106), temp0_107)
                    float var_118_1[0x4] = temp0_109
                    *rdx_20 = temp0_109[0]
                    void* rdx_21 = var_1a8
                    float temp0_110[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0x55)
                    float temp0_111[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xaa)
                    float temp0_112[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xff)
                    var_1a8 = rdx_21 + (sx.q(var_1b4) << 2)
                    *rdx_21 = temp0_110[0]
                    void* rdx_22 = var_190
                    var_190 = rdx_22 + (sx.q(var_19c) << 2)
                    *rdx_22 = temp0_111[0]
                    void* rdx_23 = var_178
                    result = sx.q(result_2)
                    var_178 = rdx_23 + (result << 2)
                    *rdx_23 = temp0_112[0]
                
                r10_2 = arg_20
            else
                var_278[3] = 0x3f800000
                zmm3 = var_278
                int64_t rax_25 = *(r10_2 + r14 + 0x1c8)
                int64_t rcx_18 = sx.q(result.d) * 6
                zmm2 = *(rax_25 + (rcx_18 << 3) + 0x10)
                zmm11 = *(rax_25 + (rcx_18 << 3))
                zmm3[0] = zmm2[0]
                result = *(r14 + r13_3 * 0x10 + 0x1c8)
                float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm8 = *(result + (rcx_18 << 3) + 0x10)
                temp0_1[0] = temp0_3[0]
                float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                temp0_4[0] = temp0_2[0]
                float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
                var_278 = temp0_5
                float temp0_7[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), *(r14 + 0x100))
                float temp0_9[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0x55), *(r14 + 0xe0))
                float temp0_11[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xaa), *(r14 + 0xf0))
                float temp0_13[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0), *(r14 + 0xd0))
                zmm4 = _mm_add_ps(_mm_add_ps(temp0_7, temp0_11), _mm_add_ps(temp0_9, temp0_13))
                zmm6 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                zmm7 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                
                if (var_126 != 0)
                    int32_t var_25c_1 = 0x3f800000
                    float var_268[0x4]
                    var_268[0] = zmm8[0]
                    float temp0_19[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                    float temp0_20[0x4] = _mm_shuffle_ps(var_268, var_268, 0xe1)
                    temp0_20[0] = _mm_shuffle_ps(zmm8, zmm8, 0x55)[0]
                    var_288 = 0
                    float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc6)
                    temp0_22[0] = temp0_19[0]
                    int32_t var_280_2 = 0
                    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
                    var_268 = temp0_23
                    float temp0_25[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_23, temp0_23, 0xff), *(r14 + 0x180))
                    float temp0_27[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_23, temp0_23, 0x55), *(r14 + 0x160))
                    float temp0_29[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_23, temp0_23, 0xaa), *(r14 + 0x170))
                    float temp0_31[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_23, temp0_23, 0), *(r14 + 0x150))
                    zmm5 =
                        _mm_add_ps(_mm_add_ps(temp0_25, temp0_29), _mm_add_ps(temp0_27, temp0_31))
                    zmm9 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                    zmm10 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                
                zmm8 = data_143cdf9b0
                
                if (var_127 != 0)
                    float* rdx_12 = var_1c0
                    float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), 
                        _mm_shuffle_ps(zmm14, zmm14, 0))
                    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xff), zmm11)
                    var_1c0 = &rdx_12[sx.q(var_1cc)]
                    float temp0_42[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x4e)
                    float temp0_43[0x4] = _mm_mul_ps(temp0_39, zmm15)
                    float temp0_44[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xb1)
                    float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_41)
                    float temp0_47[0x4] = _mm_mul_ps(temp0_42, _mm_shuffle_ps(zmm14, zmm14, 0x55))
                    float temp0_49[0x4] = _mm_mul_ps(temp0_44, _mm_shuffle_ps(zmm14, zmm14, 0xaa))
                    float temp0_50[0x4] = _mm_mul_ps(temp0_47, zmm12)
                    float temp0_51[0x4] = _mm_mul_ps(temp0_49, zmm8)
                    float temp0_53[0x4] = _mm_add_ps(_mm_add_ps(temp0_45, temp0_50), temp0_51)
                    *rdx_12 = temp0_53[0]
                    float* rdx_13 = var_1a8
                    float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
                    float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
                    float temp0_56[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xff)
                    var_1a8 = &rdx_13[sx.q(var_1b4)]
                    *rdx_13 = temp0_54[0]
                    float* rdx_14 = var_190
                    var_190 = &rdx_14[sx.q(var_19c)]
                    *rdx_14 = temp0_55[0]
                    float* rdx_15 = var_178
                    result = sx.q(result_2)
                    var_178 = &rdx_15[result]
                    *rdx_15 = temp0_56[0]
        char var_128
        
        if (var_128 != 0)
            void* var_208
            float* rdx_24 = var_208
            int32_t var_214
            var_208 = &rdx_24[sx.q(var_214)]
            *rdx_24 = zmm4[0]
            void* var_1f0
            float* rdx_25 = var_1f0
            int32_t var_1fc
            var_1f0 = &rdx_25[sx.q(var_1fc)]
            *rdx_25 = zmm6[0]
            void* var_1d8
            float* rdx_26 = var_1d8
            int32_t result_1
            result = sx.q(result_1)
            var_1d8 = &rdx_26[result]
            *rdx_26 = zmm7[0]
        
        if (var_126 != 0)
            void* var_160
            float* rdx_27 = var_160
            zmm4[0] = zmm4[0] - zmm5[0]
            zmm6[0] = zmm6[0] - zmm9[0]
            zmm7[0] = zmm7[0] - zmm10[0]
            zmm4[0] = zmm4[0] f* zmm13.d
            int32_t var_16c
            var_160 = &rdx_27[sx.q(var_16c)]
            zmm6[0] = zmm6[0] f* zmm13.d
            *rdx_27 = zmm4[0]
            float* var_148
            float* rdx_28 = var_148
            zmm7[0] = zmm7[0] f* zmm13.d
            int32_t var_154
            var_148 = &rdx_28[sx.q(var_154)]
            *rdx_28 = zmm6[0]
            float* var_130
            float* rdx_29 = var_130
            int32_t result_3
            result = sx.q(result_3)
            var_130 = &rdx_29[result]
            *rdx_29 = zmm7[0]
        
        rdx_11 = arg_18
        i_2 += 1
    while (i_2 s< *(arg2 + 0x40))

return result
