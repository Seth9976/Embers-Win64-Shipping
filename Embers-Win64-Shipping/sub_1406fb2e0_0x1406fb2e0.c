// 函数: sub_1406fb2e0
// 地址: 0x1406fb2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
void* rsi = arg2
int32_t i_2 = 0
int32_t* r8 = *(rsi + 0x20)
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

int64_t r11 = *(rsi + 0x18)
uint32_t rcx_2 = zx.d(rax[1])
int32_t* rbx = *(*(rsi + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(rsi + 0x10) = &rax[2]
uint32_t rax_7 = rcx_2 u>> 0xf
int32_t i_1 = rcx_2 & 0x7fff
uint32_t var_298 = rax_7
rax_7.b = not.b(rax_7.b)
int32_t* r12_1

if ((rax_7.b & 1) == 0)
    r12_1 = zx.q(*(rsi + 0x80) * i_1) + *(rsi + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_8 = 0
        int64_t rdx_2 = 0
        
        do
            i_1 -= *(r8 + rdx_2)
            rax_8 += 1
            rdx_2 = rax_8 << 2
            r9 += 1
        while (i_1 s>= *(r8 + rdx_2))
    
    r12_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_208
sub_1407422f0(&var_208, rsi)
char var_117
char rax_12 = var_117
uint32_t var_288[0x4]
uint32_t (* rcx_5)[0x4]
float zmm6[0x4]

if (rax_12 == 0)
    rcx_5 = &var_288
    var_288 = data_14399f720
else
    uint32_t (* rax_13)[0x4]
    rax_13, zmm6 = sub_140ae1ba0(&rbx[0x34], &var_288)
    rcx_5 = rax_13
    rax_12 = var_117

uint32_t zmm14[0x4] = *rcx_5

if (rax_12 != 0)
    zmm6 = sub_140ae1ba0(&rbx[0x54], &var_288)

void* rax_14 = sub_140d3c6e0(rbx)

if (rax_14 != 0)
    void* rax_15 = sub_142591550()
    void* rcx_8 = *(rax_14 + 0x10)
    int64_t rdx_6 = sx.q(*(rax_15 + 0x38))
    
    if (rdx_6.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_6 << 3)) == rax_15 + 0x30
            && *(rax_14 + 0x430) != 0)
        sub_141f66050(rax_14, rbx[0x1a])

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

void* rdi_1 = *(rbx + 0x58)
int32_t* rdx_8 = rbx
int32_t arg_18

if (rdi_1 != 0 && rbx[0x86].b != 0)
    void* rax_18 = sub_140d3c6e0(rbx)
    arg_18.q = rax_18
    void* rax_19
    void* rcx_13
    int64_t rdx_9
    
    if (rax_18 != 0)
        rax_19 = sub_142591550()
        rcx_13 = *(rax_18 + 0x10)
        rdx_9 = sx.q(*(rax_19 + 0x38))
    
    if (rax_18 == 0 || rdx_9.d s> *(rcx_13 + 0x38)
            || *(*(rcx_13 + 0x30) + (rdx_9 << 3)) != rax_19 + 0x30 || *(rax_18 + 0x430) == 0)
        rdx_8 = rbx
    else
        sub_141f66050(arg_18.q, rbx[0x1a])
        rdx_8 = rbx

int32_t rcx_16

if (rdi_1 == 0 || rdi_1 == 0)
    rcx_16 = 0
else
    rcx_16 = *(rdi_1 + 0x1b0)

uint64_t result = zx.q(rdx_8[0x71])
int32_t r10_2 = rdx_8[0x6e] + rcx_16
int128_t zmm13
zmm13.d = 1f f/ rdx_8[0x64]
uint64_t r11_2 = zx.q(result.d) << 4
int32_t arg_20 = rcx_16
uint64_t r9_3 = (zx.q((result - 1).d) & 1) << 4
arg_18 = r10_2
uint64_t var_270 = r11_2
uint64_t var_278 = r9_3

if (*(rsi + 0x40) s> 0)
    float zmm9[0x4] = arg2.d
    float zmm10[0x4] = arg2.d
    float zmm11[0x4] = arg2.d
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint64_t r8_2 = zx.q(var_298.b) << 2
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    var_298.q = r8_2
    
    do
        int64_t rbx_3 = sx.q(*r12_1)
        r12_1 += r8_2
        result = zx.q(rbx_3.d - rcx_16)
        char var_116
        int32_t var_1bc
        void* var_1b0
        int32_t var_1a4
        void* var_198
        int32_t var_18c
        void* var_180
        int32_t result_2
        void* var_168
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        float zmm4[0x4]
        float zmm5[0x4]
        
        if (rbx_3.d s< 0 || rbx_3.d s>= r10_2)
            zmm5 = data_143dbb1f8
            zmm12 = data_143dbb1fc
            zmm4 = data_143dbb200
            int32_t var_21c_1 = 0x3f800000
            float var_228[0x4]
            var_228[0] = zmm5[0]
            int64_t var_2a8_5 = 0
            float temp0_113[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
            temp0_113[0] = zmm12.d
            int32_t var_2a0_5 = 0
            float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xc6)
            temp0_114[0] = zmm4[0]
            float temp0_115[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0xc9)
            var_228 = temp0_115
            float temp0_117[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_115, temp0_115, 0xaa), *(rbx + 0xf0))
            float temp0_119[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_115, temp0_115, 0x55), *(rbx + 0xe0))
            float temp0_121[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_115, temp0_115, 0xff), *(rbx + 0x100))
            float temp0_123[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_115, temp0_115, 0), *(rbx + 0xd0))
            float temp0_126[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_117, temp0_121), _mm_add_ps(temp0_119, temp0_123))
            zmm6 = temp0_126
            zmm7 = _mm_shuffle_ps(temp0_126, temp0_126, 0x55)
            zmm8 = _mm_shuffle_ps(temp0_126, temp0_126, 0xaa)
            
            if (var_116 != 0)
                int32_t var_20c_1 = 0x3f800000
                float var_218[0x4]
                var_218[0] = zmm5[0]
                int64_t var_2a8_6 = 0
                float temp0_129[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
                temp0_129[0] = zmm12.d
                int32_t var_2a0_6 = 0
                float temp0_130[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0xc6)
                temp0_130[0] = zmm4[0]
                float temp0_131[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0xc9)
                var_218 = temp0_131
                float temp0_133[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0xff), *(rbx + 0x180))
                float temp0_135[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0x55), *(rbx + 0x160))
                float temp0_137[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0xaa), *(rbx + 0x170))
                float temp0_139[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0), *(rbx + 0x150))
                float temp0_142[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_133, temp0_137), _mm_add_ps(temp0_135, temp0_139))
                zmm9 = temp0_142
                zmm10 = _mm_shuffle_ps(temp0_142, temp0_142, 0x55)
                zmm11 = _mm_shuffle_ps(temp0_142, temp0_142, 0xaa)
            
            if (var_117 != 0)
                void* rdx_29 = var_1b0
                zmm1 = data_14399f720:4.d
                zmm2 = data_14399f720:8.d
                zmm3 = data_14399f720:0xc.d
                var_1b0 = rdx_29 + (sx.q(var_1bc) << 2)
                *rdx_29 = data_14399f720.d[0]
                void* rdx_30 = var_198
                var_198 = rdx_30 + (sx.q(var_1a4) << 2)
                *rdx_30 = zmm1[0]
                void* rdx_31 = var_180
                var_180 = rdx_31 + (sx.q(var_18c) << 2)
                *rdx_31 = zmm2[0]
                void* rdx_32 = var_168
                result = sx.q(result_2)
                var_168 = rdx_32 + (result << 2)
                *rdx_32 = zmm3[0]
        else
            float var_108[0x4]
            float zmm0[0x4]
            
            if (rbx_3.d s< rcx_16)
                if (rbx_3.d s>= *(rdi_1 + 0x190))
                    result = *(rdi_1 + 0x1b8)
                    zmm0 = *(result + rbx_3 * 0x30 + 0x10)
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                else
                    result = sub_1423133d0(rdi_1, &var_108, rbx_3.d)
                    zmm0 = *(result + 0x30)
                    zmm1 = *(result + 0x34)
                    zmm3 = *(result + 0x38)
                
                int32_t var_23c_1 = 0x3f800000
                float var_248[0x4]
                var_248[0] = zmm0[0]
                int64_t var_2a8_3 = 0
                float temp0_59[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
                temp0_59[0] = zmm1[0]
                int32_t var_2a0_3 = 0
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc6)
                temp0_60[0] = zmm3[0]
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc9)
                var_248 = temp0_61
                float temp0_63[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), *(rbx + 0x100))
                float temp0_65[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0x55), *(rbx + 0xe0))
                float temp0_67[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), *(rbx + 0xf0))
                float temp0_69[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0), *(rbx + 0xd0))
                float temp0_72[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_63, temp0_67), _mm_add_ps(temp0_65, temp0_69))
                zmm6 = temp0_72
                zmm7 = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
                zmm8 = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)
                
                if (var_116 != 0)
                    if (rbx_3.d s>= *(rdi_1 + 0x190))
                        result = *(rdi_1 + 0x1b8)
                        zmm0 = *(result + rbx_3 * 0x30 + 0x10)
                        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                    else
                        result = sub_1423133d0(rdi_1, &var_108, rbx_3.d)
                        zmm0 = *(result + 0x30)
                        zmm1 = *(result + 0x34)
                        zmm3 = *(result + 0x38)
                    
                    int32_t var_22c_1 = 0x3f800000
                    float var_238[0x4]
                    var_238[0] = zmm0[0]
                    int64_t var_2a8_4 = 0
                    float temp0_77[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                    temp0_77[0] = zmm1[0]
                    int32_t var_2a0_4 = 0
                    float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc6)
                    temp0_78[0] = zmm3[0]
                    float temp0_79[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xc9)
                    var_238 = temp0_79
                    float temp0_81[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_79, temp0_79, 0xff), *(rbx + 0x180))
                    float temp0_83[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_79, temp0_79, 0x55), *(rbx + 0x160))
                    float temp0_85[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_79, temp0_79, 0xaa), *(rbx + 0x170))
                    float temp0_87[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_79, temp0_79, 0), *(rbx + 0x150))
                    float temp0_90[0x4] =
                        _mm_add_ps(_mm_add_ps(temp0_81, temp0_85), _mm_add_ps(temp0_83, temp0_87))
                    zmm9 = temp0_90
                    zmm10 = _mm_shuffle_ps(temp0_90, temp0_90, 0x55)
                    zmm11 = _mm_shuffle_ps(temp0_90, temp0_90, 0xaa)
                
                if (var_117 != 0)
                    if (rbx_3.d s>= *(rdi_1 + 0x190))
                        zmm2 = *(*(rdi_1 + 0x1b8) + rbx_3 * 0x30)
                    else
                        zmm6 = sub_140ae1ba0(sub_1423133d0(rdi_1, &var_108, rbx_3.d), &var_288)
                        zmm2 = var_288
                    
                    void* rdx_19 = var_1b0
                    float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), 
                        _mm_shuffle_ps(zmm14, zmm14, 0))
                    float temp0_96[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                    float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xff), zmm2)
                    var_1b0 = rdx_19 + (sx.q(var_1bc) << 2)
                    float temp0_99[0x4] = __mulps_xmmps_memps(temp0_95, data_143cdf9d0)
                    float temp0_100[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                    float temp0_101[0x4] = _mm_add_ps(temp0_99, temp0_98)
                    float temp0_103[0x4] = _mm_mul_ps(temp0_96, _mm_shuffle_ps(zmm14, zmm14, 0x55))
                    float temp0_105[0x4] = _mm_mul_ps(temp0_100, _mm_shuffle_ps(zmm14, zmm14, 0xaa))
                    float temp0_106[0x4] = __mulps_xmmps_memps(temp0_103, data_143cdf9c0)
                    float temp0_107[0x4] = __mulps_xmmps_memps(temp0_105, data_143cdf9b0)
                    float temp0_109[0x4] = _mm_add_ps(_mm_add_ps(temp0_101, temp0_106), temp0_107)
                    var_288 = temp0_109
                    *rdx_19 = temp0_109[0]
                    float* rdx_20 = var_198
                    float temp0_110[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0x55)
                    float temp0_111[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xaa)
                    float temp0_112[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xff)
                    var_198 = &rdx_20[sx.q(var_1a4)]
                    *rdx_20 = temp0_110[0]
                    float* rdx_21 = var_180
                    var_180 = &rdx_21[sx.q(var_18c)]
                    *rdx_21 = temp0_111[0]
                    float* rdx_22 = var_168
                    result = sx.q(result_2)
                    var_168 = &rdx_22[result]
                    *rdx_22 = temp0_112[0]
                
                r11_2 = var_270
                r10_2 = arg_18
                r9_3 = var_278
                r8_2 = var_298.q
                rsi = arg2
            else
                int32_t var_25c_1 = 0x3f800000
                int64_t var_2a8_1 = 0
                int32_t var_2a0_1 = 0
                int64_t rax_23 = *(r11_2 + rdx_8 + 0x1c8)
                int64_t rcx_18 = sx.q(result.d) * 6
                zmm2 = *(rax_23 + (rcx_18 << 3) + 0x10)
                zmm0 = *(rax_23 + (rcx_18 << 3) + 0x20)
                float var_268[0x4]
                var_268[0] = zmm2[0]
                zmm5 = *(rax_23 + (rcx_18 << 3))
                result = *(r9_3 + rdx_8 + 0x1c8)
                float var_e8_1[0x4] = zmm0
                float temp0_1[0x4] = _mm_shuffle_ps(var_268, var_268, 0xe1)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm4 = *(result + (rcx_18 << 3) + 0x10)
                var_108 = *(result + (rcx_18 << 3))
                float var_e8_2[0x4] = *(result + (rcx_18 << 3) + 0x20)
                temp0_1[0] = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
                float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                temp0_4[0] = temp0_2[0]
                float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
                var_268 = temp0_5
                float temp0_7[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), *(rbx + 0x100))
                float temp0_9[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0x55), *(rbx + 0xe0))
                float temp0_11[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xaa), *(rbx + 0xf0))
                float temp0_13[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0), *(rbx + 0xd0))
                zmm6 = _mm_add_ps(_mm_add_ps(temp0_7, temp0_11), _mm_add_ps(temp0_9, temp0_13))
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                
                if (var_116 != 0)
                    int32_t var_24c_1 = 0x3f800000
                    float var_258[0x4]
                    var_258[0] = zmm4[0]
                    float temp0_19[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                    float temp0_20[0x4] = _mm_shuffle_ps(var_258, var_258, 0xe1)
                    temp0_20[0] = _mm_shuffle_ps(zmm4, zmm4, 0x55)[0]
                    int64_t var_2a8_2 = 0
                    float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc6)
                    temp0_22[0] = temp0_19[0]
                    int32_t var_2a0_2 = 0
                    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
                    var_258 = temp0_23
                    float temp0_25[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_23, temp0_23, 0xaa), *(rbx + 0x170))
                    float temp0_27[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_23, temp0_23, 0x55), *(rbx + 0x160))
                    float temp0_29[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_23, temp0_23, 0xff), *(rbx + 0x180))
                    float temp0_31[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_23, temp0_23, 0), *(rbx + 0x150))
                    zmm9 =
                        _mm_add_ps(_mm_add_ps(temp0_25, temp0_29), _mm_add_ps(temp0_27, temp0_31))
                    zmm10 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                    zmm11 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                
                if (var_117 != 0)
                    float* rdx_11 = var_1b0
                    float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), 
                        _mm_shuffle_ps(zmm14, zmm14, 0))
                    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xff), zmm5)
                    var_1b0 = &rdx_11[sx.q(var_1bc)]
                    float temp0_42[0x4] = __mulps_xmmps_memps(temp0_39, data_143cdf9d0)
                    float temp0_43[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
                    float temp0_44[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
                    float temp0_45[0x4] = _mm_add_ps(temp0_42, temp0_41)
                    float temp0_47[0x4] = _mm_mul_ps(temp0_43, _mm_shuffle_ps(zmm14, zmm14, 0x55))
                    float temp0_49[0x4] = _mm_mul_ps(temp0_44, _mm_shuffle_ps(zmm14, zmm14, 0xaa))
                    float temp0_50[0x4] = __mulps_xmmps_memps(temp0_47, data_143cdf9c0)
                    float temp0_51[0x4] = __mulps_xmmps_memps(temp0_49, data_143cdf9b0)
                    float temp0_53[0x4] = _mm_add_ps(_mm_add_ps(temp0_45, temp0_50), temp0_51)
                    *rdx_11 = temp0_53[0]
                    void* rdx_12 = var_198
                    float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
                    float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
                    float temp0_56[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xff)
                    var_198 = rdx_12 + (sx.q(var_1a4) << 2)
                    *rdx_12 = temp0_54[0]
                    void* rdx_13 = var_180
                    var_180 = rdx_13 + (sx.q(var_18c) << 2)
                    *rdx_13 = temp0_55[0]
                    void* rdx_14 = var_168
                    result = sx.q(result_2)
                    var_168 = rdx_14 + (result << 2)
                    *rdx_14 = temp0_56[0]
        
        if (var_116 != 0)
            zmm6[0] = zmm6[0] - zmm9[0]
            zmm7[0] = zmm7[0] - zmm10[0]
            zmm8[0] = zmm8[0] - zmm11[0]
            zmm9[0] = zmm9[0] + zmm6[0]
            zmm10[0] = zmm10[0] + zmm7[0]
            zmm11[0] = zmm11[0] + zmm8[0]
            zmm6 = zmm9
            zmm7 = zmm10
            zmm8 = zmm11
        
        char var_118
        
        if (var_118 != 0)
            void* var_1f8
            float* rdx_23 = var_1f8
            int32_t var_204
            var_1f8 = &rdx_23[sx.q(var_204)]
            *rdx_23 = zmm6[0]
            void* var_1e0
            float* rdx_24 = var_1e0
            int32_t var_1ec
            var_1e0 = &rdx_24[sx.q(var_1ec)]
            *rdx_24 = zmm7[0]
            void* var_1c8
            float* rdx_25 = var_1c8
            int32_t result_1
            result = sx.q(result_1)
            var_1c8 = &rdx_25[result]
            *rdx_25 = zmm8[0]
        
        if (var_116 != 0)
            void* var_150
            float* rdx_26 = var_150
            zmm6[0] = zmm6[0] - zmm9[0]
            zmm7[0] = zmm7[0] - zmm10[0]
            zmm8[0] = zmm8[0] - zmm11[0]
            zmm6[0] = zmm6[0] f* zmm13.d
            int32_t var_15c
            var_150 = &rdx_26[sx.q(var_15c)]
            zmm7[0] = zmm7[0] f* zmm13.d
            *rdx_26 = zmm6[0]
            float* var_138
            float* rdx_27 = var_138
            zmm8[0] = zmm8[0] f* zmm13.d
            int32_t var_144
            var_138 = &rdx_27[sx.q(var_144)]
            *rdx_27 = zmm7[0]
            float* var_120
            float* rdx_28 = var_120
            int32_t result_3
            result = sx.q(result_3)
            var_120 = &rdx_28[result]
            *rdx_28 = zmm8[0]
        
        rdx_8 = rbx
        i_2 += 1
        rcx_16 = arg_20
    while (i_2 s< *(rsi + 0x40))

return result
