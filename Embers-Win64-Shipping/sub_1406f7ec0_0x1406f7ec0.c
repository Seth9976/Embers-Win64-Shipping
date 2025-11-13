// 函数: sub_1406f7ec0
// 地址: 0x1406f7ec0
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
int32_t* r15 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
uint8_t rax_7 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int32_t* r14_1

if ((not.b(rax_7) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    r14_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

uint32_t var_298 = 0xffffffff
int128_t* var_290 = nullptr
int32_t var_288 = 0
sub_140767bd0(&var_298, arg2)
void var_238
sub_1407422f0(&var_238, arg2)
char var_147
char rax_12 = var_147
uint32_t var_318[0x4]
uint32_t var_248[0x4]
uint32_t (* rcx_6)[0x4]
float zmm0[0x4]
float zmm6[0x4]

if (rax_12 == 0)
    zmm0 = data_14399f720
    rcx_6 = &var_318
    var_318 = zmm0
else
    uint32_t (* rax_13)[0x4]
    rax_13, zmm6 = sub_140ae1ba0(&r15[0x34], &var_248)
    zmm0 = data_14399f720
    rcx_6 = rax_13
    rax_12 = var_147

uint32_t var_138[0x4] = *rcx_6
uint32_t (* rax_14)[0x4]

if (rax_12 == 0)
    var_318 = zmm0
    rax_14 = &var_318
else
    rax_14, zmm6 = sub_140ae1ba0(&r15[0x54], &var_248)

uint32_t zmm15[0x4] = *rax_14
uint32_t var_258[0x4] = zmm15
void* rax_15 = sub_140d3c6e0(r15)

if (rax_15 != 0)
    void* rax_16 = sub_142591550()
    void* rcx_9 = *(rax_15 + 0x10)
    int64_t rdx_7 = sx.q(*(rax_16 + 0x38))
    
    if (rdx_7.d s<= *(rcx_9 + 0x38) && *(*(rcx_9 + 0x30) + (rdx_7 << 3)) == rax_16 + 0x30
            && *(rax_15 + 0x430) != 0)
        sub_141f66050(rax_15, r15[0x1a])

if (sub_140d3c6e0(r15) != 0)
    sub_142591550()

if (*(r15 + 0x58) != 0 && r15[0x86].b != 0)
    void* rax_19 = sub_140d3c6e0(r15)
    
    if (rax_19 != 0)
        void* rax_20 = sub_142591550()
        void* rcx_14 = *(rax_19 + 0x10)
        int64_t rdx_9 = sx.q(*(rax_20 + 0x38))
        
        if (rdx_9.d s<= *(rcx_14 + 0x38) && *(*(rcx_14 + 0x30) + (rdx_9 << 3)) == rax_20 + 0x30
                && *(rax_19 + 0x430) != 0)
            sub_141f66050(rax_19, r15[0x1a])

void* r8_1 = *(r15 + 0x70)
void* arg_20 = r8_1
int32_t r12_2

if (r8_1 == 0)
    r12_2 = 0
else
    int64_t rcx_17 = sx.q(*(r8_1 + 0x34))
    int64_t rax_23 = rcx_17 * 2
    r12_2 = *(r8_1 + (rcx_17 ^ 1) * 0x10 + 0x68)
    
    if (*(r8_1 + (rax_23 << 3) + 0x68) s<= r12_2)
        r12_2 = *(r8_1 + (rax_23 << 3) + 0x68)

uint64_t result = zx.q(r15[0x71])
int32_t r11_2 = r15[0x6e] + r12_2
int128_t zmm14
zmm14.d = 1f f/ r15[0x64]
uint64_t rcx_21 = zx.q(result.d) << 4
int32_t arg_10 = r11_2
uint64_t r10_3 = (zx.q((result - 1).d) & 1) << 4
uint64_t var_300 = r10_3

if (*(arg2 + 0x40) s> 0)
    int128_t* r9_1 = var_290
    uint32_t zmm7[0x4]
    uint32_t var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint32_t zmm9[0x4]
    uint32_t var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    int64_t rcx_23 = sx.q(var_288) << 2
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t rdx_12 = zx.q(rax_7) << 2
    uint32_t zmm13[0x4]
    uint32_t var_b8_1[0x4] = zmm13
    float var_48_1[0x4] = zmm6
    int64_t var_270_1 = rcx_23
    uint64_t var_268_1 = rdx_12
    
    do
        int128_t* rax_24 = r9_1
        r9_1 += rcx_23
        zmm13 = *rax_24
        int32_t* rax_25 = r14_1
        r14_1 += rdx_12
        int64_t rdx_13 = sx.q(*rax_25)
        result = zx.q(rdx_13.d - r12_2)
        uint32_t zmm1[0x4]
        int64_t var_328
        int32_t var_1ec
        void* var_1e0
        int32_t var_1d4
        void* var_1c8
        int32_t var_1bc
        void* var_1b0
        int32_t result_2
        void* var_198
        float zmm2[0x4]
        uint32_t zmm3[0x4]
        uint32_t zmm4[0x4]
        float zmm5[0x4]
        
        if (rdx_13.d s< 0 || rdx_13.d s>= r11_2)
            zmm4 = data_143dbb1f8
            zmm5 = data_143dbb1fc
            zmm6 = data_143dbb200
            int32_t var_2ac_1 = 0x3f800000
            float var_2b8[0x4]
            var_2b8[0] = zmm4[0]
            int32_t var_29c_1 = 0x3f800000
            float temp0_189[0x4] = _mm_shuffle_ps(var_2b8, var_2b8, 0xe1)
            temp0_189[0] = zmm5[0]
            var_328 = 0
            float temp0_190[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xc6)
            temp0_190[0] = zmm6[0]
            int32_t var_320_4 = 0
            float temp0_191[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xc9)
            var_2b8 = temp0_191
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_191, temp0_191, 0xff), *(r15 + 0x100))
            var_328 = 0
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_191, temp0_191, 0x55), *(r15 + 0xe0))
            int32_t var_320_5 = 0
            float temp0_197[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_191, temp0_191, 0xaa), *(r15 + 0xf0))
            float temp0_199[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_191, temp0_191, 0), *(r15 + 0xd0))
            zmm3 = _mm_add_ps(zmm3, temp0_197)
            zmm1 = _mm_add_ps(zmm1, temp0_199)
            float var_2a8[0x4]
            var_2a8[0] = zmm4[0]
            float temp0_202[0x4] = _mm_shuffle_ps(var_2a8, var_2a8, 0xe1)
            temp0_202[0] = zmm5[0]
            float temp0_203[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0xc6)
            zmm3 = _mm_add_ps(zmm3, zmm1)
            temp0_203[0] = zmm6[0]
            float temp0_205[0x4] = _mm_shuffle_ps(temp0_203, temp0_203, 0xc9)
            var_2a8 = temp0_205
            float temp0_207[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_205, temp0_205, 0x55), *(r15 + 0x160))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_205, temp0_205, 0xaa), *(r15 + 0x170))
            zmm7 = zmm3
            zmm9 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm10 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_205, temp0_205, 0), *(r15 + 0x150))
            float temp0_215[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_205, temp0_205, 0xff), *(r15 + 0x180))
            zmm3 = _mm_add_ps(_mm_add_ps(zmm3, temp0_207), _mm_add_ps(zmm1, temp0_215))
            zmm8 = zmm3
            zmm11 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm12 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            
            if (var_147 != 0)
                void* rdx_32 = var_1e0
                zmm1 = data_14399f720:4.d
                zmm2 = data_14399f720:8.d
                zmm3 = data_14399f720:0xc.d
                var_1e0 = rdx_32 + (sx.q(var_1ec) << 2)
                *rdx_32 = data_14399f720.d[0]
                void* rdx_33 = var_1c8
                var_1c8 = rdx_33 + (sx.q(var_1d4) << 2)
                *rdx_33 = zmm1[0]
                void* rdx_34 = var_1b0
                var_1b0 = rdx_34 + (sx.q(var_1bc) << 2)
                *rdx_34 = zmm2[0]
                void* rdx_35 = var_198
                result = sx.q(result_2)
                var_198 = rdx_35 + (result << 2)
                *rdx_35 = zmm3[0]
        else
            var_328 = 0
            int32_t var_320_1 = 0
            
            if (rdx_13.d s< r12_2)
                int64_t rcx_37 = sx.q(*(r8_1 + 0x34))
                int64_t rdx_26 = rdx_13 * 6
                int32_t var_2cc_1 = 0x3f800000
                int32_t var_2bc_1 = 0x3f800000
                var_328 = 0
                int32_t var_320_3 = 0
                int64_t r11_3 = *(r8_1 + (rcx_37 + 6) * 0x10)
                result = *(r8_1 + ((rcx_37 ^ 1) + 6) * 0x10)
                zmm0 = *(r11_3 + (rdx_26 << 3) + 0x10)
                uint32_t var_2d8[0x4]
                var_2d8[0] = zmm0[0]
                zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                float temp0_96[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                zmm3 = _mm_shuffle_ps(var_2d8, var_2d8, 0xe1)
                zmm3[0] = zmm1[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                zmm3[0] = temp0_96[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                var_2d8 = zmm3
                float temp0_101[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(r15 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r15 + 0xd0))
                float temp0_105[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r15 + 0x100))
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r15 + 0xe0))
                float temp0_108[0x4] = _mm_add_ps(temp0_101, temp0_105)
                zmm0 = *(result + (rdx_26 << 3) + 0x10)
                zmm1 = _mm_add_ps(zmm1, zmm3)
                uint32_t var_2c8[0x4]
                var_2c8[0] = zmm0[0]
                zmm3 = _mm_shuffle_ps(var_2c8, var_2c8, 0xe1)
                float temp0_111[0x4] = _mm_add_ps(temp0_108, zmm1)
                zmm3[0] = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                zmm7 = temp0_111
                zmm9 = _mm_shuffle_ps(temp0_111, temp0_111, 0x55)
                zmm10 = _mm_shuffle_ps(temp0_111, temp0_111, 0xaa)
                zmm3[0] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                var_2c8 = zmm3
                float temp0_119[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(r15 + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r15 + 0x160))
                float temp0_123[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r15 + 0x180))
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r15 + 0x150))
                float temp0_128[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_119, temp0_123), _mm_add_ps(zmm1, zmm3))
                zmm8 = temp0_128
                zmm11 = _mm_shuffle_ps(temp0_128, temp0_128, 0x55)
                zmm12 = _mm_shuffle_ps(temp0_128, temp0_128, 0xaa)
                
                if (var_147 == 0)
                    r11_2 = arg_10
                else
                    zmm2 = *(r11_3 + (rdx_26 << 3))
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), 
                        _mm_shuffle_ps(var_138, var_138, 0))
                    float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_138, var_138, 0xff), zmm2)
                    zmm3 = __mulps_xmmps_memps(zmm3, data_143cdf9d0)
                    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                    float temp0_138[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                    zmm3 = _mm_add_ps(zmm3, temp0_135)
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(var_138, var_138, 0x55))
                    float temp0_143[0x4] =
                        _mm_mul_ps(temp0_138, _mm_shuffle_ps(var_138, var_138, 0xaa))
                    zmm1 = __mulps_xmmps_memps(zmm1, data_143cdf9c0)
                    float temp0_145[0x4] = __mulps_xmmps_memps(temp0_143, data_143cdf9b0)
                    zmm3 = _mm_add_ps(zmm3, zmm1)
                    zmm1 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                    var_318 = _mm_add_ps(zmm3, temp0_145)
                    zmm2 = *(result + (rdx_26 << 3))
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), 
                        _mm_shuffle_ps(zmm2, zmm2, 0x1b))
                    float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xff), zmm2)
                    zmm3 = _mm_add_ps(__mulps_xmmps_memps(zmm3, data_143cdf9d0), temp0_153)
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                    float temp0_160[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xaa), 
                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                    zmm1 = __mulps_xmmps_memps(zmm1, data_143cdf9c0)
                    float temp0_162[0x4] = __mulps_xmmps_memps(temp0_160, data_143cdf9b0)
                    var_248 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), temp0_162)
                    float (* rax_40)[0x4]
                    rax_40, zmm7, zmm8, zmm9, zmm10 =
                        sub_140ae0e60(&var_298, &var_248, &var_318, zmm13)
                    zmm6 = data_143cdfe30
                    zmm5 = *rax_40
                    zmm1 = _mm_mul_ps(zmm5, zmm5)
                    zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                    zmm1 = _mm_rsqrt_ps(zmm4)
                    zmm3 = _mm_mul_ps(zmm4, zmm6)
                    float temp0_176[0x4] = _mm_add_ps(
                        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), 
                            zmm1), 
                        zmm1)
                    void* rdx_28 = var_1e0
                    float temp0_180[0x4] = _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_176, temp0_176), zmm3)), 
                        temp0_176)
                    var_1e0 = rdx_28 + (sx.q(var_1ec) << 2)
                    float temp0_182[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
                    zmm6 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(temp0_180, temp0_176), zmm5) ^ data_143cdfe20, 
                        temp0_182) ^ data_143cdfe20
                    var_318 = zmm6
                    *rdx_28 = zmm6[0]
                    void* rdx_29 = var_1c8
                    var_1c8 = rdx_29 + (sx.q(var_1d4) << 2)
                    *rdx_29 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
                    void* rdx_30 = var_1b0
                    float temp0_187[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    float temp0_188[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    var_1b0 = rdx_30 + (sx.q(var_1bc) << 2)
                    *rdx_30 = temp0_187[0]
                    void* rdx_31 = var_198
                    result = sx.q(result_2)
                    var_198 = rdx_31 + (result << 2)
                    *rdx_31 = temp0_188[0]
                label_1406f8585:
                    r8_1 = arg_20
                    r10_3 = var_300
                    r11_2 = arg_10
            else
                int32_t var_2ec_1 = 0x3f800000
                int32_t var_2dc_1 = 0x3f800000
                var_328 = 0
                int64_t rcx_25 = sx.q(result.d) * 6
                int32_t var_320_2 = 0
                int64_t rax_29 = *(rcx_21 + r15 + 0x1c8)
                zmm2 = *(rax_29 + (rcx_25 << 3) + 0x10)
                zmm6 = *(rax_29 + (rcx_25 << 3))
                uint32_t var_2f8[0x4]
                var_2f8[0] = zmm2[0]
                result = *(r10_3 + r15 + 0x1c8)
                float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm4 = *(result + (rcx_25 << 3) + 0x10)
                zmm15 = *(result + (rcx_25 << 3))
                float var_2e8[0x4]
                var_2e8[0] = zmm4[0]
                zmm3 = _mm_shuffle_ps(var_2f8, var_2f8, 0xe1)
                zmm3[0] = temp0_1[0]
                float temp0_4[0x4] = _mm_shuffle_ps(var_2e8, var_2e8, 0xe1)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                zmm3[0] = zmm1[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                var_2f8 = zmm3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(r15 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r15 + 0xd0))
                float temp0_12[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r15 + 0x100))
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r15 + 0xe0))
                zmm7 = _mm_add_ps(zmm7, temp0_12)
                temp0_4[0] = _mm_shuffle_ps(zmm4, zmm4, 0x55)[0]
                zmm1 = _mm_add_ps(zmm1, zmm3)
                float temp0_18[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
                zmm7 = _mm_add_ps(zmm7, zmm1)
                temp0_18[0] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
                float temp0_21[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
                var_2e8 = temp0_21
                float temp0_23[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xff), *(r15 + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0x55), *(r15 + 0x160))
                float temp0_27[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xaa), *(r15 + 0x170))
                float temp0_29[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0), *(r15 + 0x150))
                float temp0_30[0x4] = _mm_add_ps(temp0_23, temp0_27)
                zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm10 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm8 = _mm_add_ps(temp0_30, _mm_add_ps(zmm1, temp0_29))
                zmm11 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm12 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                
                if (var_147 != 0)
                    float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0x1b), 
                        _mm_shuffle_ps(var_138, var_138, 0))
                    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_138, var_138, 0xff), zmm6)
                    float temp0_42[0x4] = __mulps_xmmps_memps(temp0_39, data_143cdf9d0)
                    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
                    float temp0_44[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
                    float temp0_45[0x4] = _mm_add_ps(temp0_42, temp0_41)
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(var_138, var_138, 0x55))
                    float temp0_49[0x4] =
                        _mm_mul_ps(temp0_44, _mm_shuffle_ps(var_138, var_138, 0xaa))
                    zmm1 = __mulps_xmmps_memps(zmm1, data_143cdf9c0)
                    float temp0_51[0x4] = __mulps_xmmps_memps(temp0_49, data_143cdf9b0)
                    float temp0_52[0x4] = _mm_add_ps(temp0_45, zmm1)
                    zmm1 = _mm_shuffle_ps(zmm15, zmm15, 0x4e)
                    float temp0_54[0x4] = _mm_add_ps(temp0_52, temp0_51)
                    zmm6 = var_258
                    float temp0_55[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                    var_328.o = temp0_54
                    float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0x1b), temp0_55)
                    float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm15)
                    float temp0_60[0x4] = __mulps_xmmps_memps(temp0_57, data_143cdf9d0)
                    zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xb1)
                    float temp0_62[0x4] = _mm_add_ps(temp0_60, temp0_59)
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm6, zmm6, 0x55))
                    zmm15 = _mm_mul_ps(zmm15, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
                    zmm1 = __mulps_xmmps_memps(zmm1, data_143cdf9c0)
                    zmm15 = __mulps_xmmps_memps(zmm15, data_143cdf9b0)
                    float var_128[0x4] = _mm_add_ps(_mm_add_ps(temp0_62, zmm1), zmm15)
                    float var_118[0x4][0x4]
                    float (* rax_30)[0x4]
                    rax_30, zmm7, zmm8, zmm9, zmm10 =
                        sub_140ae0e60(&var_118, &var_128, &var_328, zmm13)
                    zmm6 = data_143cdfe30
                    zmm5 = *rax_30
                    zmm1 = _mm_mul_ps(zmm5, zmm5)
                    zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                    zmm1 = _mm_rsqrt_ps(zmm4)
                    zmm3 = _mm_mul_ps(zmm4, zmm6)
                    float temp0_82[0x4] = _mm_add_ps(
                        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), 
                            zmm1), 
                        zmm1)
                    float* rdx_15 = var_1e0
                    float temp0_87[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_82, temp0_82), zmm3)), 
                            temp0_82), 
                        temp0_82)
                    zmm15 = var_258
                    float temp0_88[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
                    float temp0_89[0x4] = _mm_mul_ps(temp0_87, zmm5)
                    var_1e0 = &rdx_15[sx.q(var_1ec)]
                    float temp0_90[0x4] = _mm_cmpeq_ps(temp0_88, zmm4, 2)
                    zmm6 = _mm_and_ps(temp0_89 ^ data_143cdfe20, temp0_90) ^ data_143cdfe20
                    var_328.o = zmm6
                    *rdx_15 = zmm6[0]
                    float* rdx_16 = var_1c8
                    var_1c8 = &rdx_16[sx.q(var_1d4)]
                    *rdx_16 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
                    float* rdx_17 = var_1b0
                    float temp0_93[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    float temp0_94[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    var_1b0 = &rdx_17[sx.q(var_1bc)]
                    *rdx_17 = temp0_93[0]
                    float* rdx_18 = var_198
                    result = sx.q(result_2)
                    var_198 = &rdx_18[result]
                    *rdx_18 = temp0_94[0]
                    goto label_1406f8585
                
                zmm15 = var_258
        zmm7[0] = zmm7[0] f- zmm8[0]
        zmm9[0] = zmm9[0] f- zmm11[0]
        zmm10[0] = zmm10[0] - zmm12[0]
        zmm1 = zmm11
        zmm7[0] = zmm7[0] f* zmm13[0]
        zmm9[0] = zmm9[0] f* zmm13[0]
        zmm10[0] = zmm10[0] f* zmm13[0]
        zmm8[0] = zmm8[0] f+ zmm7[0]
        zmm1[0] = zmm1[0] f+ zmm9[0]
        zmm12[0] = zmm12[0] + zmm10[0]
        char var_148
        
        if (var_148 != 0)
            void* var_228
            float* rdx_19 = var_228
            int32_t var_234
            var_228 = &rdx_19[sx.q(var_234)]
            *rdx_19 = zmm8[0]
            void* var_210
            uint32_t* rdx_20 = var_210
            int32_t var_21c
            var_210 = &rdx_20[sx.q(var_21c)]
            *rdx_20 = zmm1[0]
            void* var_1f8
            float* rdx_21 = var_1f8
            int32_t result_1
            result = sx.q(result_1)
            var_1f8 = &rdx_21[result]
            *rdx_21 = zmm12[0]
        
        char var_146
        
        if (var_146 != 0)
            void* var_180
            float* rdx_22 = var_180
            zmm8[0] = zmm8[0] - zmm8[0]
            zmm1[0] = zmm1[0] f- zmm11[0]
            zmm12[0] = zmm12[0] - zmm12[0]
            zmm8[0] = zmm8[0] f* zmm14.d
            int32_t var_18c
            var_180 = &rdx_22[sx.q(var_18c)]
            zmm1[0] = zmm1[0] f* zmm14.d
            *rdx_22 = zmm8[0]
            void* var_168
            uint32_t* rdx_23 = var_168
            zmm12[0] = zmm12[0] f* zmm14.d
            int32_t var_174
            var_168 = &rdx_23[sx.q(var_174)]
            *rdx_23 = zmm1[0]
            void* var_150
            float* rdx_24 = var_150
            int32_t result_3
            result = sx.q(result_3)
            var_150 = &rdx_24[result]
            *rdx_24 = zmm12[0]
        
        rcx_23 = var_270_1
        i_2 += 1
        rdx_12 = var_268_1
    while (i_2 s< *(arg2 + 0x40))

return result
